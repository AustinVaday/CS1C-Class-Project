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
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LoginWindow
{
public:
    QDialogButtonBox *submitButton;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QPlainTextEdit *nameInput;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QPlainTextEdit *passwordInput;

    void setupUi(QDialog *LoginWindow)
    {
        if (LoginWindow->objectName().isEmpty())
            LoginWindow->setObjectName(QStringLiteral("LoginWindow"));
        LoginWindow->resize(334, 122);
        submitButton = new QDialogButtonBox(LoginWindow);
        submitButton->setObjectName(QStringLiteral("submitButton"));
        submitButton->setGeometry(QRect(80, 80, 164, 32));
        submitButton->setOrientation(Qt::Horizontal);
        submitButton->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        widget = new QWidget(LoginWindow);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(40, 20, 248, 58));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label = new QLabel(widget);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout_2->addWidget(label);

        nameInput = new QPlainTextEdit(widget);
        nameInput->setObjectName(QStringLiteral("nameInput"));
        nameInput->setMaximumSize(QSize(141, 21));

        horizontalLayout_2->addWidget(nameInput);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_2 = new QLabel(widget);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout->addWidget(label_2);

        passwordInput = new QPlainTextEdit(widget);
        passwordInput->setObjectName(QStringLiteral("passwordInput"));
        passwordInput->setMaximumSize(QSize(141, 21));

        horizontalLayout->addWidget(passwordInput);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(LoginWindow);
        QObject::connect(submitButton, SIGNAL(accepted()), LoginWindow, SLOT(accept()));
        QObject::connect(submitButton, SIGNAL(rejected()), LoginWindow, SLOT(reject()));

        QMetaObject::connectSlotsByName(LoginWindow);
    } // setupUi

    void retranslateUi(QDialog *LoginWindow)
    {
        LoginWindow->setWindowTitle(QApplication::translate("LoginWindow", "Dialog", 0));
        label->setText(QApplication::translate("LoginWindow", "Account Name:", 0));
        nameInput->setPlainText(QString());
        label_2->setText(QApplication::translate("LoginWindow", "Password", 0));
        passwordInput->setPlainText(QString());
        passwordInput->setPlaceholderText(QString());
    } // retranslateUi

};

namespace Ui {
    class LoginWindow: public Ui_LoginWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINWINDOW_H
