/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

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

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QPushButton *view_activated_customers;
    QPushButton *view_deactivated_customers;
    QPushButton *search_customer;
    QPushButton *modify_help_options;
    QPushButton *modify_customer_reviews;
    QPushButton *back_button;
    QWidget *widget1;
    QVBoxLayout *verticalLayout_2;
    QLabel *welcome_label;
    QLabel *user_name_label;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;
    QMenuBar *menuBar;
    QMenu *menuMenu;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1084, 651);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        widget = new QWidget(centralWidget);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(460, 220, 147, 170));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        view_activated_customers = new QPushButton(widget);
        view_activated_customers->setObjectName(QStringLiteral("view_activated_customers"));

        verticalLayout->addWidget(view_activated_customers);

        view_deactivated_customers = new QPushButton(widget);
        view_deactivated_customers->setObjectName(QStringLiteral("view_deactivated_customers"));

        verticalLayout->addWidget(view_deactivated_customers);

        search_customer = new QPushButton(widget);
        search_customer->setObjectName(QStringLiteral("search_customer"));

        verticalLayout->addWidget(search_customer);

        modify_help_options = new QPushButton(widget);
        modify_help_options->setObjectName(QStringLiteral("modify_help_options"));

        verticalLayout->addWidget(modify_help_options);

        modify_customer_reviews = new QPushButton(widget);
        modify_customer_reviews->setObjectName(QStringLiteral("modify_customer_reviews"));

        verticalLayout->addWidget(modify_customer_reviews);

        back_button = new QPushButton(widget);
        back_button->setObjectName(QStringLiteral("back_button"));

        verticalLayout->addWidget(back_button);

        widget1 = new QWidget(centralWidget);
        widget1->setObjectName(QStringLiteral("widget1"));
        widget1->setGeometry(QRect(450, 60, 491, 98));
        verticalLayout_2 = new QVBoxLayout(widget1);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        welcome_label = new QLabel(widget1);
        welcome_label->setObjectName(QStringLiteral("welcome_label"));
        QFont font;
        font.setFamily(QStringLiteral("Arial"));
        font.setBold(true);
        font.setWeight(75);
        welcome_label->setFont(font);

        verticalLayout_2->addWidget(welcome_label);

        user_name_label = new QLabel(widget1);
        user_name_label->setObjectName(QStringLiteral("user_name_label"));
        user_name_label->setFont(font);

        verticalLayout_2->addWidget(user_name_label);

        MainWindow->setCentralWidget(centralWidget);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1084, 21));
        menuMenu = new QMenu(menuBar);
        menuMenu->setObjectName(QStringLiteral("menuMenu"));
        MainWindow->setMenuBar(menuBar);

        menuBar->addAction(menuMenu->menuAction());

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        view_activated_customers->setText(QApplication::translate("MainWindow", "View Activated Customers", 0));
        view_deactivated_customers->setText(QApplication::translate("MainWindow", "View Deactivated Customers", 0));
        search_customer->setText(QApplication::translate("MainWindow", "Search Customer", 0));
        modify_help_options->setText(QApplication::translate("MainWindow", "Modify Help Options", 0));
        modify_customer_reviews->setText(QApplication::translate("MainWindow", "Modify Customer Reviews", 0));
        back_button->setText(QApplication::translate("MainWindow", "Back ", 0));
        welcome_label->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-family: Arial; font-size:28pt; font-weight:600;\">Welcome, </span></p></body></html>", 0));
        user_name_label->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-family:'Arial'; font-size:28pt; font-weight:600;\">UserName</span></p></body></html>", 0));
        menuMenu->setTitle(QApplication::translate("MainWindow", "Help", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
