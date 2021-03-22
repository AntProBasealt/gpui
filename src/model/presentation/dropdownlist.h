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

#ifndef GPUI_DROPDOWNLIST_H
#define GPUI_DROPDOWNLIST_H

#include "../model.h"
#include "presentationwidget.h"
#include "presentationwidgetvisitor.h"

namespace model
{
    namespace presentation
    {
        /*!
         * \class DropdownList
         * \brief The DropdownList class is a drop-down list display element, with which a user can pick one of the displayed entries.
         *
         * \ingroup model
         * \ingroup presentation
         */
        class GPUI_MODEL_EXPORT DropdownList : public PresentationWidget
        {
        public:
            /*!
             * \brief noSort
             */
            bool noSort = false;

            /*!
             * \brief defaultItem The numerical value identifying the default choice of the list of items.
             * The item list is numbered starting from 0.
             */
            unsigned int defaultItem = 0;

            DropdownList(Presentation* presentation)
                : PresentationWidget(presentation)
            {

            }

            virtual void accept(const PresentationWidgetVisitor& visitor) const override {
                visitor.visitDropdownList(*this);
            }
        };
    }
}

#endif // GPUI_DROPDOWNLIST_H