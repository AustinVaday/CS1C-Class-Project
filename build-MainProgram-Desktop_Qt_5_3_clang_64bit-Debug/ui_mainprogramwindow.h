/********************************************************************************
** Form generated from reading UI file 'mainprogramwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINPROGRAMWINDOW_H
#define UI_MAINPROGRAMWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainProgramWindow
{
public:
    QAction *actionLog_In;
    QAction *actionHelp;
    QAction *actionExit;
    QAction *actionContactUS;
    QWidget *centralWidget;
    QPushButton *exitProgram;
    QWidget *MainMenu;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton_Login;
    QPushButton *pushButton_Guest;
    QPushButton *pushButton_RequestBrochure;
    QPushButton *pushButton_Login_2;
    QPushButton *pushButton_Help;
    QPushButton *pushButton;
    QLabel *label;
    QMenuBar *menuBar;
    QMenu *menuExtreme_Robo_Cat_Coderz;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainProgramWindow)
    {
        if (MainProgramWindow->objectName().isEmpty())
            MainProgramWindow->setObjectName(QStringLiteral("MainProgramWindow"));
        MainProgramWindow->resize(533, 430);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainProgramWindow->sizePolicy().hasHeightForWidth());
        MainProgramWindow->setSizePolicy(sizePolicy);
        MainProgramWindow->setMinimumSize(QSize(533, 430));
        MainProgramWindow->setMaximumSize(QSize(533, 430));
        MainProgramWindow->setStyleSheet(QStringLiteral(""));
        actionLog_In = new QAction(MainProgramWindow);
        actionLog_In->setObjectName(QStringLiteral("actionLog_In"));
        actionHelp = new QAction(MainProgramWindow);
        actionHelp->setObjectName(QStringLiteral("actionHelp"));
        actionHelp->setEnabled(true);
        actionExit = new QAction(MainProgramWindow);
        actionExit->setObjectName(QStringLiteral("actionExit"));
        actionContactUS = new QAction(MainProgramWindow);
        actionContactUS->setObjectName(QStringLiteral("actionContactUS"));
        actionContactUS->setCheckable(false);
        centralWidget = new QWidget(MainProgramWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        centralWidget->setStyleSheet(QLatin1String("\n"
"background-image: url(:/Resources/city whhaaa.jpg);\n"
"\n"
""));
        exitProgram = new QPushButton(centralWidget);
        exitProgram->setObjectName(QStringLiteral("exitProgram"));
        exitProgram->setGeometry(QRect(410, 320, 115, 32));
        sizePolicy.setHeightForWidth(exitProgram->sizePolicy().hasHeightForWidth());
        exitProgram->setSizePolicy(sizePolicy);
        exitProgram->setStyleSheet(QLatin1String("color: white;\n"
"font: 13pt \"Papyrus\";\n"
""));
        MainMenu = new QWidget(centralWidget);
        MainMenu->setObjectName(QStringLiteral("MainMenu"));
        MainMenu->setGeometry(QRect(80, 100, 361, 201));
        sizePolicy.setHeightForWidth(MainMenu->sizePolicy().hasHeightForWidth());
        MainMenu->setSizePolicy(sizePolicy);
        verticalLayout = new QVBoxLayout(MainMenu);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        pushButton_Login = new QPushButton(MainMenu);
        pushButton_Login->setObjectName(QStringLiteral("pushButton_Login"));
        sizePolicy.setHeightForWidth(pushButton_Login->sizePolicy().hasHeightForWidth());
        pushButton_Login->setSizePolicy(sizePolicy);
        pushButton_Login->setStyleSheet(QLatin1String("color: white;\n"
"font: 13pt \"Papyrus\";\n"
""));

        verticalLayout->addWidget(pushButton_Login);

        pushButton_Guest = new QPushButton(MainMenu);
        pushButton_Guest->setObjectName(QStringLiteral("pushButton_Guest"));
        sizePolicy.setHeightForWidth(pushButton_Guest->sizePolicy().hasHeightForWidth());
        pushButton_Guest->setSizePolicy(sizePolicy);
        pushButton_Guest->setStyleSheet(QLatin1String("color: white;\n"
"font: 13pt \"Papyrus\";\n"
"\n"
""));

        verticalLayout->addWidget(pushButton_Guest);

        pushButton_RequestBrochure = new QPushButton(MainMenu);
        pushButton_RequestBrochure->setObjectName(QStringLiteral("pushButton_RequestBrochure"));
        sizePolicy.setHeightForWidth(pushButton_RequestBrochure->sizePolicy().hasHeightForWidth());
        pushButton_RequestBrochure->setSizePolicy(sizePolicy);
        pushButton_RequestBrochure->setStyleSheet(QLatin1String("color: white;\n"
"font: 13pt \"Papyrus\";\n"
""));

        verticalLayout->addWidget(pushButton_RequestBrochure);

        pushButton_Login_2 = new QPushButton(MainMenu);
        pushButton_Login_2->setObjectName(QStringLiteral("pushButton_Login_2"));
        sizePolicy.setHeightForWidth(pushButton_Login_2->sizePolicy().hasHeightForWidth());
        pushButton_Login_2->setSizePolicy(sizePolicy);
        pushButton_Login_2->setStyleSheet(QLatin1String("color: white;\n"
"font: 13pt \"Papyrus\";\n"
""));

        verticalLayout->addWidget(pushButton_Login_2);

        pushButton_Help = new QPushButton(MainMenu);
        pushButton_Help->setObjectName(QStringLiteral("pushButton_Help"));
        sizePolicy.setHeightForWidth(pushButton_Help->sizePolicy().hasHeightForWidth());
        pushButton_Help->setSizePolicy(sizePolicy);
        pushButton_Help->setStyleSheet(QLatin1String("color: white;\n"
"font: 13pt \"Papyrus\";\n"
""));

        verticalLayout->addWidget(pushButton_Help);

        pushButton_Help->raise();
        pushButton_Login->raise();
        pushButton_Guest->raise();
        pushButton_RequestBrochure->raise();
        pushButton_Login_2->raise();
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(160, 320, 181, 31));
        sizePolicy.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy);
        pushButton->setStyleSheet(QLatin1String("color: white;\n"
"font: 13pt \"Papyrus\";"));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(50, 10, 461, 91));
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        label->setStyleSheet(QStringLiteral("color:rgb(255, 255, 255)"));
        MainProgramWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainProgramWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 533, 22));
        menuExtreme_Robo_Cat_Coderz = new QMenu(menuBar);
        menuExtreme_Robo_Cat_Coderz->setObjectName(QStringLiteral("menuExtreme_Robo_Cat_Coderz"));
        MainProgramWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainProgramWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainProgramWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainProgramWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainProgramWindow->setStatusBar(statusBar);

        menuBar->addAction(menuExtreme_Robo_Cat_Coderz->menuAction());
        menuExtreme_Robo_Cat_Coderz->addAction(actionHelp);
        menuExtreme_Robo_Cat_Coderz->addAction(actionContactUS);
        menuExtreme_Robo_Cat_Coderz->addAction(actionExit);

        retranslateUi(MainProgramWindow);

        QMetaObject::connectSlotsByName(MainProgramWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainProgramWindow)
    {
        MainProgramWindow->setWindowTitle(QApplication::translate("MainProgramWindow", "MainProgramWindow", 0));
        actionLog_In->setText(QApplication::translate("MainProgramWindow", "Log In", 0));
        actionHelp->setText(QApplication::translate("MainProgramWindow", "Help", 0));
        actionExit->setText(QApplication::translate("MainProgramWindow", "Exit", 0));
        actionContactUS->setText(QApplication::translate("MainProgramWindow", "Contact Us", 0));
        exitProgram->setText(QApplication::translate("MainProgramWindow", "Exit Program", 0));
        pushButton_Login->setText(QApplication::translate("MainProgramWindow", "Login", 0));
        pushButton_Guest->setText(QApplication::translate("MainProgramWindow", "Guest", 0));
        pushButton_RequestBrochure->setText(QApplication::translate("MainProgramWindow", "Request Account/Brochure", 0));
        pushButton_Login_2->setText(QApplication::translate("MainProgramWindow", "Chat with an Admin", 0));
        pushButton_Help->setText(QApplication::translate("MainProgramWindow", "Help", 0));
        pushButton->setText(QApplication::translate("MainProgramWindow", "Reviews", 0));
        label->setText(QApplication::translate("MainProgramWindow", "<html><head/><body><p><span style=\" font-family:'Arial'; font-size:48pt;\">iRobotsTheBomb Inc.</span></p></body></html>", 0));
        menuExtreme_Robo_Cat_Coderz->setTitle(QApplication::translate("MainProgramWindow", "Extreme Robo Cat Coderz", 0));
    } // retranslateUi

};

namespace Ui {
    class MainProgramWindow: public Ui_MainProgramWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINPROGRAMWINDOW_H
