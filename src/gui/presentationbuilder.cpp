/***********************************************************************************************************************
**
** Copyright (C) 2021 BaseALT Ltd.
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

#include "presentationbuilder.h"

#include "../model/presentationwidget.h"
#include "../model/presentationwidgetvisitor.h"
#include "../model/presentation.h"

#include "../model/checkbox.h"
#include "../model/combobox.h"
#include "../model/decimaltextbox.h"
#include "../model/dropdownlist.h"
#include "../model/listbox.h"
#include "../model/longdecimaltextbox.h"
#include "../model/multitextbox.h"
#include "../model/text.h"
#include "../model/textbox.h"

#include <QVBoxLayout>

#include <QCheckBox>
#include <QComboBox>
#include <QLabel>
#include <QListWidget>
#include <QLineEdit>
#include <QTextEdit>
#include <QSpinBox>
#include <QPlainTextEdit>

#include <iostream>

using namespace model::presentation;

namespace gui
{
    class PresentationBuilderPrivate : public PresentationWidgetVisitor {
    public:
        virtual void visitCheckBox(const CheckBox &widget) const override
        {
            QCheckBox* checkBox = new QCheckBox();
            checkBox->setChecked(widget.defaultChecked);
            addToLayout(checkBox);
        }

        virtual void visitComboBox(const ComboBox &widget) const override
        {
            QComboBox* comboBox = new QComboBox();
            comboBox->setCurrentText(QString::fromStdString(widget.defaultValue));
            for (const auto& item: widget.suggestions)
            {
                comboBox->addItem(QString::fromStdString(item));
            }
            addToLayout(comboBox);
        }

        virtual void visitDecimalTextBox(const DecimalTextBox &widget) const override
        {
            createAnyDecimalTextBox(widget.spin, widget.defaultValue, widget.spinStep);
        }

        virtual void visitDropdownList(const DropdownList &widget) const override
        {
            QComboBox* comboBox = new QComboBox();
            comboBox->setCurrentIndex(widget.defaultItem);
            addToLayout(comboBox);
        }

        virtual void visitListBox(const ListBox &widget) const override
        {
            Q_UNUSED(widget);
            QListWidget* listWidget = new QListWidget();
            // TODO: Create list widget content from associated enum.
            addToLayout(listWidget);
        }

        virtual void visitLongDecimalTextBox(const LongDecimalTextBox &widget) const override
        {
            createAnyDecimalTextBox(widget.spin, widget.defaultValue, widget.spinStep);
        }

        virtual void visitMultiTextBox(const MultiTextBox &widget) const override
        {
            QPlainTextEdit* plainTextEdit = new QPlainTextEdit();
            plainTextEdit->setMaximumHeight(widget.defaultHeight);
            addToLayout(plainTextEdit);
        }

        virtual void visitText(const Text &widget) const override
        {
            QLabel* label = new QLabel();
            label->setText(QString::fromStdString(widget.content));
            addToLayout(label);
        }

        virtual void visitTextBox(const TextBox &widget) const override
        {
            QLineEdit* lineEdit = new QLineEdit();
            lineEdit->setText(QString::fromStdString(widget.defaultValue));
            addToLayout(lineEdit);
        }

        void setLayout(QLayout* layout) {
            m_layout = layout;
        }

    private:
        QLayout* m_layout = nullptr;

        void addToLayout(QWidget* widget) const {
            if (m_layout) {
                m_layout->addWidget(widget);
            }
        }

        template<typename Number>
        void createAnyDecimalTextBox(bool spin, Number value, Number step) const {
            if (spin)
            {
                QSpinBox* spinBox = new QSpinBox();
                // TODO: Replace maximum and minimum values with parameters specified in ADMX/ADML documents.
                spinBox->setMinimum(0);
                spinBox->setMaximum(9999);
                spinBox->setSingleStep(step);
                spinBox->setValue(value);
                addToLayout(spinBox);
                return;
            }

            QLineEdit* edit = new QLineEdit();
            edit->setText(QString::number(value));
            // TODO: Create int validator for decimal text box.
            edit->setValidator(new QIntValidator(0, 9999));
            addToLayout(edit);
        }
    };

    PresentationBuilderPrivate* PresentationBuilder::d = new PresentationBuilderPrivate();

    QWidget* buildWidget(const CheckBox* widget)
    {
        QCheckBox* checkBox = new QCheckBox();
        checkBox->setChecked(widget->defaultChecked);
        return checkBox;
    }

    QWidget* PresentationBuilder::build(const Presentation& presentation)
    {
        QWidget* mainWidget = new QWidget();
        QVBoxLayout* layout = new QVBoxLayout();
        d->setLayout(layout);

        for (const auto& widget : presentation.widgets) {
            QWidget* policyWidget = nullptr;
            widget->accept(*d);

            if (policyWidget) {
                layout->addWidget(policyWidget);
            }
        }

        mainWidget->setLayout(layout);

        return mainWidget;
    }
}