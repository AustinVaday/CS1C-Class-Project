/********************************************************************************
** Form generated from reading UI file 'customeraddressbook.ui'
**
** Created by: Qt User Interface Compiler version 5.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CUSTOMERADDRESSBOOK_H
#define UI_CUSTOMERADDRESSBOOK_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CustomerAddressBook
{
public:
    QLabel *warningLabel;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QVBoxLayout *verticalLayout;
    QLineEdit *NameEdit;
    QLineEdit *EmailEdit;
    QLineEdit *AccountIdEdit;
    QLineEdit *PasswordEdit;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout_3;
    QPushButton *addButton;
    QPushButton *submitButton;
    QPushButton *cancelButton;
    QWidget *layoutWidget2;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *prevCustomerButton;
    QPushButton *nextCustomerButton;
    QWidget *layoutWidget3;
    QVBoxLayout *verticalLayout_4;
    QPushButton *editButton;
    QPushButton *removeButton;

    void setupUi(QWidget *CustomerAddressBook)
    {
        if (CustomerAddressBook->objectName().isEmpty())
            CustomerAddressBook->setObjectName(QStringLiteral("CustomerAddressBook"));
        CustomerAddressBook->resize(411, 301);
        warningLabel = new QLabel(CustomerAddressBook);
        warningLabel->setObjectName(QStringLiteral("warningLabel"));
        warningLabel->setGeometry(QRect(20, 180, 381, 16));
        layoutWidget = new QWidget(CustomerAddressBook);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 10, 291, 121));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        label = new QLabel(layoutWidget);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout_2->addWidget(label);

        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        verticalLayout_2->addWidget(label_2);

        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        verticalLayout_2->addWidget(label_3);

        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName(QStringLiteral("label_4"));

        verticalLayout_2->addWidget(label_4);


        horizontalLayout->addLayout(verticalLayout_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        NameEdit = new QLineEdit(layoutWidget);
        NameEdit->setObjectName(QStringLiteral("NameEdit"));

        verticalLayout->addWidget(NameEdit);

        EmailEdit = new QLineEdit(layoutWidget);
        EmailEdit->setObjectName(QStringLiteral("EmailEdit"));

        verticalLayout->addWidget(EmailEdit);

        AccountIdEdit = new QLineEdit(layoutWidget);
        AccountIdEdit->setObjectName(QStringLiteral("AccountIdEdit"));

        verticalLayout->addWidget(AccountIdEdit);

        PasswordEdit = new QLineEdit(layoutWidget);
        PasswordEdit->setObjectName(QStringLiteral("PasswordEdit"));

        verticalLayout->addWidget(PasswordEdit);


        horizontalLayout->addLayout(verticalLayout);

        layoutWidget1 = new QWidget(CustomerAddressBook);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(320, 20, 86, 100));
        verticalLayout_3 = new QVBoxLayout(layoutWidget1);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        addButton = new QPushButton(layoutWidget1);
        addButton->setObjectName(QStringLiteral("addButton"));

        verticalLayout_3->addWidget(addButton);

        submitButton = new QPushButton(layoutWidget1);
        submitButton->setObjectName(QStringLiteral("submitButton"));

        verticalLayout_3->addWidget(submitButton);

        cancelButton = new QPushButton(layoutWidget1);
        cancelButton->setObjectName(QStringLiteral("cancelButton"));

        verticalLayout_3->addWidget(cancelButton);

        layoutWidget2 = new QWidget(CustomerAddressBook);
        layoutWidget2->setObjectName(QStringLiteral("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(20, 150, 297, 32));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget2);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        prevCustomerButton = new QPushButton(layoutWidget2);
        prevCustomerButton->setObjectName(QStringLiteral("prevCustomerButton"));

        horizontalLayout_2->addWidget(prevCustomerButton);

        nextCustomerButton = new QPushButton(layoutWidget2);
        nextCustomerButton->setObjectName(QStringLiteral("nextCustomerButton"));

        horizontalLayout_2->addWidget(nextCustomerButton);

        layoutWidget3 = new QWidget(CustomerAddressBook);
        layoutWidget3->setObjectName(QStringLiteral("layoutWidget3"));
        layoutWidget3->setGeometry(QRect(320, 110, 92, 66));
        verticalLayout_4 = new QVBoxLayout(layoutWidget3);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        editButton = new QPushButton(layoutWidget3);
        editButton->setObjectName(QStringLiteral("editButton"));

        verticalLayout_4->addWidget(editButton);

        removeButton = new QPushButton(layoutWidget3);
        removeButton->setObjectName(QStringLiteral("removeButton"));

        verticalLayout_4->addWidget(removeButton);


        retranslateUi(CustomerAddressBook);

        QMetaObject::connectSlotsByName(CustomerAddressBook);
    } // setupUi

    void retranslateUi(QWidget *CustomerAddressBook)
    {
        CustomerAddressBook->setWindowTitle(QApplication::translate("CustomerAddressBook", "Form", 0));
        warningLabel->setText(QString());
        label->setText(QApplication::translate("CustomerAddressBook", "Name: ", 0));
        label_2->setText(QApplication::translate("CustomerAddressBook", "Email:", 0));
        label_3->setText(QApplication::translate("CustomerAddressBook", "Account ID:", 0));
        label_4->setText(QApplication::translate("CustomerAddressBook", "Password:", 0));
        addButton->setText(QApplication::translate("CustomerAddressBook", "Add", 0));
        submitButton->setText(QApplication::translate("CustomerAddressBook", "Submit", 0));
        cancelButton->setText(QApplication::translate("CustomerAddressBook", "Cancel", 0));
        prevCustomerButton->setText(QApplication::translate("CustomerAddressBook", "Previous Customer", 0));
        nextCustomerButton->setText(QApplication::translate("CustomerAddressBook", "Next Customer", 0));
        editButton->setText(QApplication::translate("CustomerAddressBook", "Edit", 0));
        removeButton->setText(QApplication::translate("CustomerAddressBook", "Remove", 0));
    } // retranslateUi

};

namespace Ui {
    class CustomerAddressBook: public Ui_CustomerAddressBook {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CUSTOMERADDRESSBOOK_H
