/********************************************************************************
** Form generated from reading UI file 'CustomerPlaceOrder.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CUSTOMERPLACEORDER_H
#define UI_CUSTOMERPLACEORDER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CustomerPlaceOrder
{
public:

    void setupUi(QWidget *CustomerPlaceOrder)
    {
        if (CustomerPlaceOrder->objectName().isEmpty())
            CustomerPlaceOrder->setObjectName(QStringLiteral("CustomerPlaceOrder"));
        CustomerPlaceOrder->resize(400, 300);

        retranslateUi(CustomerPlaceOrder);

        QMetaObject::connectSlotsByName(CustomerPlaceOrder);
    } // setupUi

    void retranslateUi(QWidget *CustomerPlaceOrder)
    {
        CustomerPlaceOrder->setWindowTitle(QApplication::translate("CustomerPlaceOrder", "Form", 0));
    } // retranslateUi

};

namespace Ui {
    class CustomerPlaceOrder: public Ui_CustomerPlaceOrder {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CUSTOMERPLACEORDER_H
