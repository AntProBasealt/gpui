/***********************************************************************************************************************
**
** Copyright (C) 2022 BaseALT Ltd. <org@basealt.ru>
**
** This program is free software; you can redistribute it and/or
** modify it under the terms of the GNU General Public License
** as published by the Free Software Foundation; either version 2
** of the License, or (at your option) any later version.
**
** This program is distributed in the hope that it will be useful,
** but WITHOUT ANY WARRANTY; without even the implied warranty of
** MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
** GNU General Public License for more details.
**
** You should have received a copy of the GNU General Public License
** along with this program; if not, write to the Free Software
** Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA.
**
***********************************************************************************************************************/

#include "administrativetemplateswidget.h"
#include "ui_administrativetemplateswidget.h"

#include <mvvm/factories/viewmodelfactory.h>
#include <mvvm/viewmodel/viewmodeldelegate.h>

#include <QDataWidgetMapper>

#include "../gui/presentationbuilder.h"

#include "../presentation/presentation.h"
#include "../registry/abstractregistrysource.h"
#include "../registry/policystatemanager.h"

#include "../bundle/itemtype.h"
#include "../bundle/policyroles.h"

#include "../admx/policy.h"
#include "../admx/policyelement.h"
#include "../admx/policytype.h"

using namespace model::bundle;
using namespace model::admx;

namespace gpui
{
typedef std::shared_ptr<::model::presentation::Presentation> PresentationPtr;
typedef std::shared_ptr<::model::admx::Policy> PolicyPtr;

class AdministrativeTemplatesWidgetPrivate
{
public:
    model::registry::AbstractRegistrySource *userSource    = nullptr;
    model::registry::AbstractRegistrySource *machineSource = nullptr;

    std::unique_ptr<model::registry::PolicyStateManager> manager = nullptr;

    bool dataChanged  = false;
    bool stateEnabled = false;

    QModelIndex currentIndex{};

    AdministrativeTemplatesWidget::PolicyWidgetState state
        = AdministrativeTemplatesWidget::PolicyWidgetState::STATE_NOT_CONFIGURED;
    AdministrativeTemplatesWidget::PolicyWidgetState initialState
        = AdministrativeTemplatesWidget::PolicyWidgetState::STATE_NOT_CONFIGURED;

    model::registry::PolicyStateManager::PolicyState policyState
        = model::registry::PolicyStateManager::STATE_NOT_CONFIGURED;
};

AdministrativeTemplatesWidget::AdministrativeTemplatesWidget(QWidget *parent)
    : gui::PluginWidgetInterface(parent)
    , ui(new Ui::AdministrativeTemplatesWidget())
    , d(new AdministrativeTemplatesWidgetPrivate())
{
    ui->setupUi(this);

    connect(ui->notConfiguredRadioButton, &QRadioButton::toggled, this, [=](bool checked) {
        if (checked)
        {
            d->dataChanged = d->state != STATE_NOT_CONFIGURED && d->initialState != STATE_NOT_CONFIGURED;
            setPolicyWidgetState(STATE_NOT_CONFIGURED);
            qWarning() << "Setting state not configured" << d->manager.get();
            if (d->manager)
            {
                d->policyState = model::registry::PolicyStateManager::STATE_NOT_CONFIGURED;
            }
        }
    });
    connect(ui->enabledRadioButton, &QRadioButton::toggled, this, [=](bool checked) {
        if (checked)
        {
            d->dataChanged = d->state != STATE_ENABLED && d->initialState != STATE_ENABLED;
            setPolicyWidgetState(STATE_ENABLED);
            qWarning() << "Setting state enabled" << d->manager.get();
            if (d->manager)
            {
                d->policyState = model::registry::PolicyStateManager::STATE_ENABLED;
            }
        }
    });
    connect(ui->disabledRadioButton, &QRadioButton::toggled, this, [=](bool checked) {
        if (checked)
        {
            d->dataChanged = d->state != STATE_DISABLED && d->initialState != STATE_DISABLED;
            setPolicyWidgetState(STATE_DISABLED);
            qWarning() << "Setting state disabled" << d->manager.get();
            if (d->manager)
            {
                d->policyState = model::registry::PolicyStateManager::STATE_DISABLED;
            }
        }
    });

    connect(this,
            &AdministrativeTemplatesWidget::acceptPressed,
            this,
            &AdministrativeTemplatesWidget::onApplyClickedExternal);
    connect(this, &AdministrativeTemplatesWidget::rejectPressed, this, &AdministrativeTemplatesWidget::onCancelClicked);

    connectDialogBoxSignals();
}

AdministrativeTemplatesWidget::~AdministrativeTemplatesWidget()
{
    delete ui;
}

void AdministrativeTemplatesWidget::setPolicyWidgetState(AdministrativeTemplatesWidget::PolicyWidgetState state)
{
    switch (state)
    {
    case STATE_ENABLED: {
        d->stateEnabled = true;
        ui->contentScrollArea->setDisabled(false);
    }
    break;
    case STATE_DISABLED:
    case STATE_NOT_CONFIGURED:
    default:
        d->stateEnabled = false;
        ui->contentScrollArea->setDisabled(true);
        break;
    }

    d->state = state;
}

void AdministrativeTemplatesWidget::setModelIndex(const QModelIndex &index)
{
    // Perform mandatory cleanup.
    ui->okPushButton->disconnect();
    ui->cancelPushButton->disconnect();
    connectDialogBoxSignals();

    d->currentIndex = index;

    const QAbstractItemModel *model = index.model();

    if (d->dataChanged)
    {
        onDataChanged();
    }

    d->dataChanged = false;

    if (ui->contentScrollArea->widget()->layout())
    {
        delete ui->contentScrollArea->takeWidget();

        ui->contentScrollArea->setWidget(new QWidget(this));
    }

    if (model)
    {
        ui->policyNameLabel->setText((tr("Policy: ") + model->data(index, Qt::DisplayRole).value<QString>()).trimmed());
        ui->descriptionTextEdit->setText(model->data(index, PolicyRoles::EXPLAIN_TEXT).value<QString>());

        d->manager = nullptr;

        if (model->data(index, PolicyRoles::ITEM_TYPE).value<uint>() == ItemType::ITEM_TYPE_POLICY)
        {
            setPolicyWidgetState(STATE_NOT_CONFIGURED);

            ui->notConfiguredRadioButton->setChecked(true);
            ui->supportedOnTextEdit->setText(model->data(index, PolicyRoles::SUPPORTED_ON).value<QString>());

            auto presentation = model->data(index, PolicyRoles::PRESENTATION).value<PresentationPtr>();
            auto policy       = model->data(index, PolicyRoles::POLICY).value<PolicyPtr>();
            model::registry::AbstractRegistrySource *source = d->userSource;

            if (policy && d->machineSource)
            {
                if (static_cast<PolicyType>(model->data(index, PolicyRoles::POLICY_TYPE).toUInt())
                    == PolicyType::Machine)
                {
                    source = d->machineSource;
                }

                auto policyType = static_cast<PolicyType>(model->data(index, PolicyRoles::POLICY_TYPE).toUInt());

                qDebug() << policy->displayName.c_str() << " type: "
                         << (policyType == PolicyType::Machine
                                 ? "Machine"
                                 : (policyType == PolicyType::User
                                        ? "User"
                                        : (policyType == PolicyType::Both ? "Both" : "Error ")));
            }

            if (source && policy)
            {
                d->manager = std::make_unique<model::registry::PolicyStateManager>(*source, *policy);

                auto state = d->manager->determinePolicyState();
                if (state == model::registry::PolicyStateManager::STATE_ENABLED)
                {
                    d->state        = STATE_ENABLED;
                    d->initialState = STATE_ENABLED;
                    ui->enabledRadioButton->setChecked(true);
                }

                if (state == model::registry::PolicyStateManager::STATE_DISABLED)
                {
                    d->state        = STATE_DISABLED;
                    d->initialState = STATE_DISABLED;
                    ui->disabledRadioButton->setChecked(true);
                }

                if (state == model::registry::PolicyStateManager::STATE_NOT_CONFIGURED)
                {
                    d->state        = STATE_NOT_CONFIGURED;
                    d->initialState = STATE_NOT_CONFIGURED;
                    ui->notConfiguredRadioButton->setChecked(true);
                }
            }

            if (presentation && policy)
            {
                ui->okPushButton->disconnect();
                ui->cancelPushButton->disconnect();

                auto layout = ::gui::PresentationBuilder::build(
                    {*presentation, *policy, *source, *ui->okPushButton, d->dataChanged, d->stateEnabled});
                connectDialogBoxSignals();

                ui->contentScrollArea->widget()->setLayout(layout);
            }
        }
    }
}

void AdministrativeTemplatesWidget::onDataChanged()
{
    QMessageBox messageBox(QMessageBox::Question,
                           QObject::tr("Save settings dialog"),
                           QObject::tr("Policy settings were modified do you want to save them?"),
                           QMessageBox::Yes | QMessageBox::No,
                           this);
    messageBox.setButtonText(QMessageBox::Yes, tr("Yes"));
    messageBox.setButtonText(QMessageBox::No, tr("No"));
    int reply = messageBox.exec();

    switch (reply)
    {
    case QMessageBox::Yes:
        emit ui->okPushButton->clicked();
        onApplyClickedInternal();
        break;
    case QMessageBox::No:
        onCancelClicked();
        break;
    default:
        break;
    }
}

void AdministrativeTemplatesWidget::onApplyClickedExternal()
{
    emit ui->okPushButton->clicked();
    onApplyClickedInternal();
}

void AdministrativeTemplatesWidget::connectDialogBoxSignals()
{
    connect(ui->okPushButton, &QPushButton::clicked, this, &AdministrativeTemplatesWidget::onApplyClickedInternal);
    connect(ui->cancelPushButton, &QPushButton::clicked, this, &AdministrativeTemplatesWidget::onCancelClicked);
}

void AdministrativeTemplatesWidget::onApplyClickedInternal()
{
    d->dataChanged = false;
    d->manager->setupPolicyState(d->policyState);
    savePolicyChanges();
}

void AdministrativeTemplatesWidget::onCancelClicked()
{
    d->dataChanged = false;
    setModelIndex(d->currentIndex);
}

void AdministrativeTemplatesWidget::setUserRegistrySource(model::registry::AbstractRegistrySource *registrySource)
{
    qWarning() << "Test user registry source";
    d->userSource = registrySource;
}

void AdministrativeTemplatesWidget::setMachineRegistrySource(model::registry::AbstractRegistrySource *registrySource)
{
    qWarning() << "Test machine registry source";
    d->machineSource = registrySource;
}

bool AdministrativeTemplatesWidget::hasDataChanged()
{
    return d->dataChanged;
}

} // namespace gpui

Q_DECLARE_METATYPE(std::shared_ptr<::model::presentation::Presentation>)
Q_DECLARE_METATYPE(std::shared_ptr<::model::admx::Policy>)
