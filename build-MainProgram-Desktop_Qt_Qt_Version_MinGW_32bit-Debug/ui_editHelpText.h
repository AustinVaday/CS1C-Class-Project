/********************************************************************************
** Form generated from reading UI file 'editHelpText.ui'
**
** Created by: Qt User Interface Compiler version 5.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITHELPTEXT_H
#define UI_EDITHELPTEXT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_EditHelpText
{
public:

    void setupUi(QWidget *EditHelpText)
    {
        if (EditHelpText->objectName().isEmpty())
            EditHelpText->setObjectName(QStringLiteral("EditHelpText"));
        EditHelpText->resize(400, 300);

        retranslateUi(EditHelpText);

        QMetaObject::connectSlotsByName(EditHelpText);
    } // setupUi

    void retranslateUi(QWidget *EditHelpText)
    {
        EditHelpText->setWindowTitle(QApplication::translate("EditHelpText", "Form", 0));
    } // retranslateUi

};

namespace Ui {
    class EditHelpText: public Ui_EditHelpText {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITHELPTEXT_H
