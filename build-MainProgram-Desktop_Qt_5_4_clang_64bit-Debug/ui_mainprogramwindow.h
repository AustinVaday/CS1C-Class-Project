/********************************************************************************
** Form generated from reading UI file 'mainprogramwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.4.0
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
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
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
    QWidget *centralWidget;
    QPushButton *exitProgram;
    QWidget *MainMenu;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton_Login;
    QPushButton *pushButton_Guest;
    QPushButton *pushButton_RequestBrochure_2;
    QPushButton *pushButton_Help;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QWidget *page_2;
    QMenuBar *menuBar;
    QMenu *menuExtreme_Robo_Cat_Coderz;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainProgramWindow)
    {
        if (MainProgramWindow->objectName().isEmpty())
            MainProgramWindow->setObjectName(QStringLiteral("MainProgramWindow"));
        MainProgramWindow->resize(533, 430);
        actionLog_In = new QAction(MainProgramWindow);
        actionLog_In->setObjectName(QStringLiteral("actionLog_In"));
        actionHelp = new QAction(MainProgramWindow);
        actionHelp->setObjectName(QStringLiteral("actionHelp"));
        actionExit = new QAction(MainProgramWindow);
        actionExit->setObjectName(QStringLiteral("actionExit"));
        centralWidget = new QWidget(MainProgramWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        exitProgram = new QPushButton(centralWidget);
        exitProgram->setObjectName(QStringLiteral("exitProgram"));
        exitProgram->setGeometry(QRect(410, 320, 115, 32));
        MainMenu = new QWidget(centralWidget);
        MainMenu->setObjectName(QStringLiteral("MainMenu"));
        MainMenu->setGeometry(QRect(80, 20, 361, 201));
        verticalLayout = new QVBoxLayout(MainMenu);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        pushButton_Login = new QPushButton(MainMenu);
        pushButton_Login->setObjectName(QStringLiteral("pushButton_Login"));

        verticalLayout->addWidget(pushButton_Login);

        pushButton_Guest = new QPushButton(MainMenu);
        pushButton_Guest->setObjectName(QStringLiteral("pushButton_Guest"));

        verticalLayout->addWidget(pushButton_Guest);

        pushButton_RequestBrochure_2 = new QPushButton(MainMenu);
        pushButton_RequestBrochure_2->setObjectName(QStringLiteral("pushButton_RequestBrochure_2"));

        verticalLayout->addWidget(pushButton_RequestBrochure_2);

        pushButton_Help = new QPushButton(MainMenu);
        pushButton_Help->setObjectName(QStringLiteral("pushButton_Help"));

        verticalLayout->addWidget(pushButton_Help);

        stackedWidget = new QStackedWidget(centralWidget);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        stackedWidget->setGeometry(QRect(80, 230, 311, 131));
        page = new QWidget();
        page->setObjectName(QStringLiteral("page"));
        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QStringLiteral("page_2"));
        stackedWidget->addWidget(page_2);
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
        menuExtreme_Robo_Cat_Coderz->addAction(actionExit);

        retranslateUi(MainProgramWindow);

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainProgramWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainProgramWindow)
    {
        MainProgramWindow->setWindowTitle(QApplication::translate("MainProgramWindow", "MainProgramWindow", 0));
        actionLog_In->setText(QApplication::translate("MainProgramWindow", "Log In", 0));
        actionHelp->setText(QApplication::translate("MainProgramWindow", "Help", 0));
        actionExit->setText(QApplication::translate("MainProgramWindow", "Exit", 0));
        exitProgram->setText(QApplication::translate("MainProgramWindow", "Exit Program", 0));
        pushButton_Login->setText(QApplication::translate("MainProgramWindow", "Login", 0));
        pushButton_Guest->setText(QApplication::translate("MainProgramWindow", "Guest", 0));
        pushButton_RequestBrochure_2->setText(QApplication::translate("MainProgramWindow", "Create Account", 0));
        pushButton_Help->setText(QApplication::translate("MainProgramWindow", "Help", 0));
        menuExtreme_Robo_Cat_Coderz->setTitle(QApplication::translate("MainProgramWindow", "Extreme Robo Cat Coderz", 0));
    } // retranslateUi

};

namespace Ui {
    class MainProgramWindow: public Ui_MainProgramWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINPROGRAMWINDOW_H
