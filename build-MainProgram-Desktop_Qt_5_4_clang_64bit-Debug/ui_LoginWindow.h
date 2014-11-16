/********************************************************************************
** Form generated from reading UI file 'LoginWindow.ui'
**
** Created by: Qt User Interface Compiler version 5.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINWINDOW_H
#define UI_LOGINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LoginWindow
{
public:
    QDialogButtonBox *submitButton;
    QLabel *label;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *accountNameLabel;
    QLineEdit *inputName;
    QHBoxLayout *horizontalLayout;
    QLabel *passwordLabel;
    QLineEdit *inputPassword;

    void setupUi(QDialog *LoginWindow)
    {
        if (LoginWindow->objectName().isEmpty())
            LoginWindow->setObjectName(QStringLiteral("LoginWindow"));
        LoginWindow->resize(337, 151);
        submitButton = new QDialogButtonBox(LoginWindow);
        submitButton->setObjectName(QStringLiteral("submitButton"));
        submitButton->setGeometry(QRect(90, 100, 164, 32));
        submitButton->setOrientation(Qt::Horizontal);
        submitButton->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        label = new QLabel(LoginWindow);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(110, 0, 116, 29));
        QFont font;
        font.setPointSize(24);
        label->setFont(font);
        widget = new QWidget(LoginWindow);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(60, 40, 232, 58));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        accountNameLabel = new QLabel(widget);
        accountNameLabel->setObjectName(QStringLiteral("accountNameLabel"));

        horizontalLayout_2->addWidget(accountNameLabel);

        inputName = new QLineEdit(widget);
        inputName->setObjectName(QStringLiteral("inputName"));

        horizontalLayout_2->addWidget(inputName);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        passwordLabel = new QLabel(widget);
        passwordLabel->setObjectName(QStringLiteral("passwordLabel"));

        horizontalLayout->addWidget(passwordLabel);

        inputPassword = new QLineEdit(widget);
        inputPassword->setObjectName(QStringLiteral("inputPassword"));

        horizontalLayout->addWidget(inputPassword, 0, Qt::AlignRight);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(LoginWindow);
        QObject::connect(submitButton, SIGNAL(accepted()), LoginWindow, SLOT(accept()));
        QObject::connect(submitButton, SIGNAL(rejected()), LoginWindow, SLOT(reject()));

        QMetaObject::connectSlotsByName(LoginWindow);
    } // setupUi

    void retranslateUi(QDialog *LoginWindow)
    {
        LoginWindow->setWindowTitle(QApplication::translate("LoginWindow", "Dialog", 0));
        label->setText(QApplication::translate("LoginWindow", "User Login", 0));
        accountNameLabel->setText(QApplication::translate("LoginWindow", "Account Name:", 0));
        passwordLabel->setText(QApplication::translate("LoginWindow", "Password", 0));
    } // retranslateUi

};

namespace Ui {
    class LoginWindow: public Ui_LoginWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINWINDOW_H
