/********************************************************************************
** Form generated from reading UI file 'MainMenu.ui'
**
** Created by: Qt User Interface Compiler version 5.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINMENU_H
#define UI_MAINMENU_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainMenu
{
public:
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QPushButton *loginButton;
    QPushButton *guestButton;
    QPushButton *requestBrochureButton;

    void setupUi(QWidget *MainMenu)
    {
        if (MainMenu->objectName().isEmpty())
            MainMenu->setObjectName(QStringLiteral("MainMenu"));
        MainMenu->resize(400, 300);
        verticalLayout_2 = new QVBoxLayout(MainMenu);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        loginButton = new QPushButton(MainMenu);
        loginButton->setObjectName(QStringLiteral("loginButton"));

        verticalLayout->addWidget(loginButton);

        guestButton = new QPushButton(MainMenu);
        guestButton->setObjectName(QStringLiteral("guestButton"));

        verticalLayout->addWidget(guestButton);

        requestBrochureButton = new QPushButton(MainMenu);
        requestBrochureButton->setObjectName(QStringLiteral("requestBrochureButton"));

        verticalLayout->addWidget(requestBrochureButton);


        verticalLayout_2->addLayout(verticalLayout);


        retranslateUi(MainMenu);

        QMetaObject::connectSlotsByName(MainMenu);
    } // setupUi

    void retranslateUi(QWidget *MainMenu)
    {
        MainMenu->setWindowTitle(QApplication::translate("MainMenu", "Form", 0));
        loginButton->setText(QApplication::translate("MainMenu", "Login", 0));
        guestButton->setText(QApplication::translate("MainMenu", "Guest", 0));
        requestBrochureButton->setText(QApplication::translate("MainMenu", "Request Brochure", 0));
    } // retranslateUi

};

namespace Ui {
    class MainMenu: public Ui_MainMenu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINMENU_H
