/********************************************************************************
** Form generated from reading UI file 'customeraccountwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CUSTOMERACCOUNTWINDOW_H
#define UI_CUSTOMERACCOUNTWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CustomerAccountWindow
{
public:

    void setupUi(QWidget *CustomerAccountWindow)
    {
        if (CustomerAccountWindow->objectName().isEmpty())
            CustomerAccountWindow->setObjectName(QStringLiteral("CustomerAccountWindow"));
        CustomerAccountWindow->resize(400, 300);

        retranslateUi(CustomerAccountWindow);

        QMetaObject::connectSlotsByName(CustomerAccountWindow);
    } // setupUi

    void retranslateUi(QWidget *CustomerAccountWindow)
    {
        CustomerAccountWindow->setWindowTitle(QApplication::translate("CustomerAccountWindow", "Form", 0));
    } // retranslateUi

};

namespace Ui {
    class CustomerAccountWindow: public Ui_CustomerAccountWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CUSTOMERACCOUNTWINDOW_H
