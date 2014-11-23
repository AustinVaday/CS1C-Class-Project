/********************************************************************************
** Form generated from reading UI file 'BrochureWindow.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BROCHUREWINDOW_H
#define UI_BROCHUREWINDOW_H

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
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_BrochureWindow
{
public:
    QAction *actionHELP;
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_4;
    QPushButton *pushButton_3;
    QMenuBar *menubar;
    QMenu *menuMenu;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *BrochureWindow)
    {
        if (BrochureWindow->objectName().isEmpty())
            BrochureWindow->setObjectName(QStringLiteral("BrochureWindow"));
        BrochureWindow->resize(631, 425);
        actionHELP = new QAction(BrochureWindow);
        actionHELP->setObjectName(QStringLiteral("actionHELP"));
        centralwidget = new QWidget(BrochureWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        verticalLayout_2 = new QVBoxLayout(centralwidget);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        label = new QLabel(centralwidget);
        label->setObjectName(QStringLiteral("label"));
        QFont font;
        font.setPointSize(40);
        label->setFont(font);
        label->setMargin(0);
        label->setIndent(200);
        label->setOpenExternalLinks(true);

        verticalLayout_2->addWidget(label);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        verticalLayout->addWidget(pushButton);

        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        verticalLayout->addWidget(pushButton_2);

        pushButton_4 = new QPushButton(centralwidget);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));

        verticalLayout->addWidget(pushButton_4);

        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));

        verticalLayout->addWidget(pushButton_3);


        verticalLayout_2->addLayout(verticalLayout);

        BrochureWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(BrochureWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 631, 22));
        menuMenu = new QMenu(menubar);
        menuMenu->setObjectName(QStringLiteral("menuMenu"));
        BrochureWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(BrochureWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        BrochureWindow->setStatusBar(statusbar);

        menubar->addAction(menuMenu->menuAction());
        menuMenu->addAction(actionHELP);

        retranslateUi(BrochureWindow);

        QMetaObject::connectSlotsByName(BrochureWindow);
    } // setupUi

    void retranslateUi(QMainWindow *BrochureWindow)
    {
        BrochureWindow->setWindowTitle(QApplication::translate("BrochureWindow", "MainWindow", 0));
        actionHELP->setText(QApplication::translate("BrochureWindow", "HELP", 0));
        label->setText(QApplication::translate("BrochureWindow", "Brochure", 0));
        pushButton->setText(QApplication::translate("BrochureWindow", "Place Order", 0));
        pushButton_2->setText(QApplication::translate("BrochureWindow", "View Products", 0));
        pushButton_4->setText(QApplication::translate("BrochureWindow", "Account Info", 0));
        pushButton_3->setText(QApplication::translate("BrochureWindow", "Log out", 0));
        menuMenu->setTitle(QApplication::translate("BrochureWindow", "Menu", 0));
    } // retranslateUi

};

namespace Ui {
    class BrochureWindow: public Ui_BrochureWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BROCHUREWINDOW_H
