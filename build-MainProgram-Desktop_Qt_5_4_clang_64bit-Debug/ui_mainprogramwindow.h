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
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
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
        pushButton = new QPushButton(MainMenu);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        verticalLayout->addWidget(pushButton);

        pushButton_2 = new QPushButton(MainMenu);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        verticalLayout->addWidget(pushButton_2);

        pushButton_3 = new QPushButton(MainMenu);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));

        verticalLayout->addWidget(pushButton_3);

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

        QMetaObject::connectSlotsByName(MainProgramWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainProgramWindow)
    {
        MainProgramWindow->setWindowTitle(QApplication::translate("MainProgramWindow", "MainProgramWindow", 0));
        actionLog_In->setText(QApplication::translate("MainProgramWindow", "Log In", 0));
        actionHelp->setText(QApplication::translate("MainProgramWindow", "Help", 0));
        actionExit->setText(QApplication::translate("MainProgramWindow", "Exit", 0));
        exitProgram->setText(QApplication::translate("MainProgramWindow", "Exit Program", 0));
        pushButton->setText(QApplication::translate("MainProgramWindow", "Login", 0));
        pushButton_2->setText(QApplication::translate("MainProgramWindow", "Guest", 0));
        pushButton_3->setText(QApplication::translate("MainProgramWindow", "Request Brochure", 0));
        menuExtreme_Robo_Cat_Coderz->setTitle(QApplication::translate("MainProgramWindow", "Extreme Robo Cat Coderz", 0));
    } // retranslateUi

};

namespace Ui {
    class MainProgramWindow: public Ui_MainProgramWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINPROGRAMWINDOW_H
