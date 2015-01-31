/********************************************************************************
** Form generated from reading UI file 'customeraddressbook.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
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
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CustomerAddressBook
{
public:
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_2;
    QLabel *LABEL_Name;
    QLabel *LABEL_addressLine1;
    QLabel *LABEL_addressLine2;
    QLabel *LABEL_Email;
    QLabel *LABEL_accountId;
    QLabel *LABEL_password;
    QLabel *LABEL_Interest;
    QLabel *LABEL_keyValue;
    QVBoxLayout *verticalLayout;
    QLineEdit *EDIT_name;
    QLineEdit *EDIT_addressLine1;
    QLineEdit *EDIT_addressLine2;
    QLineEdit *EDIT_email;
    QLineEdit *EDIT_account;
    QLineEdit *EDIT_password;
    QLineEdit *EDIT_interest;
    QLineEdit *EDIT_value;
    QLabel *warningLabel;
    QWidget *layoutWidget1;
    QHBoxLayout *PrevNextButton;
    QPushButton *prevCustomerButton;
    QPushButton *nextCustomerButton;
    QWidget *layoutWidget2;
    QHBoxLayout *toggleAccess;
    QRadioButton *ActivatedCustomer;
    QWidget *layoutWidget3;
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *addSubmitCancelLayout;
    QPushButton *addButton;
    QPushButton *submitButton;
    QPushButton *cancelButton;
    QVBoxLayout *EditRemoveSearch;
    QPushButton *editButton;
    QPushButton *removeButton;
    QPushButton *searchButton;

    void setupUi(QWidget *CustomerAddressBook)
    {
        if (CustomerAddressBook->objectName().isEmpty())
            CustomerAddressBook->setObjectName(QStringLiteral("CustomerAddressBook"));
        CustomerAddressBook->resize(492, 548);
        layoutWidget = new QWidget(CustomerAddressBook);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 10, 361, 406));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setSizeConstraint(QLayout::SetMaximumSize);
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setSizeConstraint(QLayout::SetFixedSize);
        LABEL_Name = new QLabel(layoutWidget);
        LABEL_Name->setObjectName(QStringLiteral("LABEL_Name"));

        verticalLayout_2->addWidget(LABEL_Name);

        LABEL_addressLine1 = new QLabel(layoutWidget);
        LABEL_addressLine1->setObjectName(QStringLiteral("LABEL_addressLine1"));

        verticalLayout_2->addWidget(LABEL_addressLine1);

        LABEL_addressLine2 = new QLabel(layoutWidget);
        LABEL_addressLine2->setObjectName(QStringLiteral("LABEL_addressLine2"));

        verticalLayout_2->addWidget(LABEL_addressLine2);

        LABEL_Email = new QLabel(layoutWidget);
        LABEL_Email->setObjectName(QStringLiteral("LABEL_Email"));

        verticalLayout_2->addWidget(LABEL_Email);

        LABEL_accountId = new QLabel(layoutWidget);
        LABEL_accountId->setObjectName(QStringLiteral("LABEL_accountId"));

        verticalLayout_2->addWidget(LABEL_accountId);

        LABEL_password = new QLabel(layoutWidget);
        LABEL_password->setObjectName(QStringLiteral("LABEL_password"));

        verticalLayout_2->addWidget(LABEL_password);

        LABEL_Interest = new QLabel(layoutWidget);
        LABEL_Interest->setObjectName(QStringLiteral("LABEL_Interest"));

        verticalLayout_2->addWidget(LABEL_Interest);

        LABEL_keyValue = new QLabel(layoutWidget);
        LABEL_keyValue->setObjectName(QStringLiteral("LABEL_keyValue"));

        verticalLayout_2->addWidget(LABEL_keyValue);


        horizontalLayout->addLayout(verticalLayout_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        EDIT_name = new QLineEdit(layoutWidget);
        EDIT_name->setObjectName(QStringLiteral("EDIT_name"));

        verticalLayout->addWidget(EDIT_name);

        EDIT_addressLine1 = new QLineEdit(layoutWidget);
        EDIT_addressLine1->setObjectName(QStringLiteral("EDIT_addressLine1"));

        verticalLayout->addWidget(EDIT_addressLine1);

        EDIT_addressLine2 = new QLineEdit(layoutWidget);
        EDIT_addressLine2->setObjectName(QStringLiteral("EDIT_addressLine2"));

        verticalLayout->addWidget(EDIT_addressLine2);

        EDIT_email = new QLineEdit(layoutWidget);
        EDIT_email->setObjectName(QStringLiteral("EDIT_email"));

        verticalLayout->addWidget(EDIT_email);

        EDIT_account = new QLineEdit(layoutWidget);
        EDIT_account->setObjectName(QStringLiteral("EDIT_account"));

        verticalLayout->addWidget(EDIT_account);

        EDIT_password = new QLineEdit(layoutWidget);
        EDIT_password->setObjectName(QStringLiteral("EDIT_password"));

        verticalLayout->addWidget(EDIT_password);

        EDIT_interest = new QLineEdit(layoutWidget);
        EDIT_interest->setObjectName(QStringLiteral("EDIT_interest"));

        verticalLayout->addWidget(EDIT_interest);

        EDIT_value = new QLineEdit(layoutWidget);
        EDIT_value->setObjectName(QStringLiteral("EDIT_value"));

        verticalLayout->addWidget(EDIT_value);


        horizontalLayout->addLayout(verticalLayout);

        warningLabel = new QLabel(CustomerAddressBook);
        warningLabel->setObjectName(QStringLiteral("warningLabel"));
        warningLabel->setGeometry(QRect(15, 420, 376, 30));
        layoutWidget1 = new QWidget(CustomerAddressBook);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(15, 495, 381, 41));
        PrevNextButton = new QHBoxLayout(layoutWidget1);
        PrevNextButton->setObjectName(QStringLiteral("PrevNextButton"));
        PrevNextButton->setContentsMargins(0, 0, 0, 0);
        prevCustomerButton = new QPushButton(layoutWidget1);
        prevCustomerButton->setObjectName(QStringLiteral("prevCustomerButton"));

        PrevNextButton->addWidget(prevCustomerButton);

        nextCustomerButton = new QPushButton(layoutWidget1);
        nextCustomerButton->setObjectName(QStringLiteral("nextCustomerButton"));

        PrevNextButton->addWidget(nextCustomerButton);

        layoutWidget2 = new QWidget(CustomerAddressBook);
        layoutWidget2->setObjectName(QStringLiteral("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(15, 465, 287, 22));
        toggleAccess = new QHBoxLayout(layoutWidget2);
        toggleAccess->setObjectName(QStringLiteral("toggleAccess"));
        toggleAccess->setContentsMargins(0, 0, 0, 0);
        ActivatedCustomer = new QRadioButton(layoutWidget2);
        ActivatedCustomer->setObjectName(QStringLiteral("ActivatedCustomer"));

        toggleAccess->addWidget(ActivatedCustomer);

        layoutWidget3 = new QWidget(CustomerAddressBook);
        layoutWidget3->setObjectName(QStringLiteral("layoutWidget3"));
        layoutWidget3->setGeometry(QRect(390, 0, 97, 451));
        verticalLayout_3 = new QVBoxLayout(layoutWidget3);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        addSubmitCancelLayout = new QVBoxLayout();
        addSubmitCancelLayout->setObjectName(QStringLiteral("addSubmitCancelLayout"));
        addButton = new QPushButton(layoutWidget3);
        addButton->setObjectName(QStringLiteral("addButton"));

        addSubmitCancelLayout->addWidget(addButton);

        submitButton = new QPushButton(layoutWidget3);
        submitButton->setObjectName(QStringLiteral("submitButton"));

        addSubmitCancelLayout->addWidget(submitButton);

        cancelButton = new QPushButton(layoutWidget3);
        cancelButton->setObjectName(QStringLiteral("cancelButton"));

        addSubmitCancelLayout->addWidget(cancelButton);


        verticalLayout_3->addLayout(addSubmitCancelLayout);

        EditRemoveSearch = new QVBoxLayout();
        EditRemoveSearch->setObjectName(QStringLiteral("EditRemoveSearch"));
        editButton = new QPushButton(layoutWidget3);
        editButton->setObjectName(QStringLiteral("editButton"));

        EditRemoveSearch->addWidget(editButton);

        removeButton = new QPushButton(layoutWidget3);
        removeButton->setObjectName(QStringLiteral("removeButton"));

        EditRemoveSearch->addWidget(removeButton);

        searchButton = new QPushButton(layoutWidget3);
        searchButton->setObjectName(QStringLiteral("searchButton"));

        EditRemoveSearch->addWidget(searchButton);


        verticalLayout_3->addLayout(EditRemoveSearch);

        layoutWidget->raise();
        layoutWidget->raise();
        layoutWidget->raise();
        layoutWidget->raise();
        warningLabel->raise();

        retranslateUi(CustomerAddressBook);

        QMetaObject::connectSlotsByName(CustomerAddressBook);
    } // setupUi

    void retranslateUi(QWidget *CustomerAddressBook)
    {
        CustomerAddressBook->setWindowTitle(QApplication::translate("CustomerAddressBook", "Form", 0));
        LABEL_Name->setText(QApplication::translate("CustomerAddressBook", "Name: ", 0));
        LABEL_addressLine1->setText(QApplication::translate("CustomerAddressBook", "Address Line 1:", 0));
        LABEL_addressLine2->setText(QApplication::translate("CustomerAddressBook", "Address Line 2:", 0));
        LABEL_Email->setText(QApplication::translate("CustomerAddressBook", "Email:", 0));
        LABEL_accountId->setText(QApplication::translate("CustomerAddressBook", "Account ID:", 0));
        LABEL_password->setText(QApplication::translate("CustomerAddressBook", "Password:", 0));
        LABEL_Interest->setText(QApplication::translate("CustomerAddressBook", "Interest", 0));
        LABEL_keyValue->setText(QApplication::translate("CustomerAddressBook", "Key Value", 0));
        warningLabel->setText(QString());
        prevCustomerButton->setText(QApplication::translate("CustomerAddressBook", "Previous Customer", 0));
        nextCustomerButton->setText(QApplication::translate("CustomerAddressBook", "Next Customer", 0));
        ActivatedCustomer->setText(QApplication::translate("CustomerAddressBook", "Access To Brochure", 0));
        addButton->setText(QApplication::translate("CustomerAddressBook", "Add", 0));
        submitButton->setText(QApplication::translate("CustomerAddressBook", "Submit", 0));
        cancelButton->setText(QApplication::translate("CustomerAddressBook", "Cancel", 0));
        editButton->setText(QApplication::translate("CustomerAddressBook", "Edit", 0));
        removeButton->setText(QApplication::translate("CustomerAddressBook", "Remove", 0));
        searchButton->setText(QApplication::translate("CustomerAddressBook", "Search", 0));
    } // retranslateUi

};

namespace Ui {
    class CustomerAddressBook: public Ui_CustomerAddressBook {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CUSTOMERADDRESSBOOK_H
