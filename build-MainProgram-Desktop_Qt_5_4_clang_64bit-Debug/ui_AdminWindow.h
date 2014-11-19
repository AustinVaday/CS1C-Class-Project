/********************************************************************************
** Form generated from reading UI file 'AdminWindow.ui'
**
** Created by: Qt User Interface Compiler version 5.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMINWINDOW_H
#define UI_ADMINWINDOW_H

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

class Ui_AdminWindow
{
public:
    QWidget *centralWidget;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *view_activated_customers;
    QPushButton *view_deactivated_customers;
    QPushButton *search_customer;
    QPushButton *modify_help_options;
    QPushButton *modify_customer_reviews;
    QPushButton *back_button;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout_2;
    QLabel *welcome_label;
    QLabel *user_name_label;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;
    QMenuBar *menuBar;
    QMenu *menuMenu;

    void setupUi(QMainWindow *AdminWindow)
    {
        if (AdminWindow->objectName().isEmpty())
            AdminWindow->setObjectName(QStringLiteral("AdminWindow"));
        AdminWindow->resize(1084, 651);
        centralWidget = new QWidget(AdminWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        layoutWidget = new QWidget(centralWidget);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(460, 220, 219, 202));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        view_activated_customers = new QPushButton(layoutWidget);
        view_activated_customers->setObjectName(QStringLiteral("view_activated_customers"));

        verticalLayout->addWidget(view_activated_customers);

        view_deactivated_customers = new QPushButton(layoutWidget);
        view_deactivated_customers->setObjectName(QStringLiteral("view_deactivated_customers"));

        verticalLayout->addWidget(view_deactivated_customers);

        search_customer = new QPushButton(layoutWidget);
        search_customer->setObjectName(QStringLiteral("search_customer"));

        verticalLayout->addWidget(search_customer);

        modify_help_options = new QPushButton(layoutWidget);
        modify_help_options->setObjectName(QStringLiteral("modify_help_options"));

        verticalLayout->addWidget(modify_help_options);

        modify_customer_reviews = new QPushButton(layoutWidget);
        modify_customer_reviews->setObjectName(QStringLiteral("modify_customer_reviews"));

        verticalLayout->addWidget(modify_customer_reviews);

        back_button = new QPushButton(layoutWidget);
        back_button->setObjectName(QStringLiteral("back_button"));

        verticalLayout->addWidget(back_button);

        layoutWidget1 = new QWidget(centralWidget);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(450, 60, 491, 98));
        verticalLayout_2 = new QVBoxLayout(layoutWidget1);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        welcome_label = new QLabel(layoutWidget1);
        welcome_label->setObjectName(QStringLiteral("welcome_label"));
        QFont font;
        font.setFamily(QStringLiteral("Arial"));
        font.setBold(true);
        font.setWeight(75);
        welcome_label->setFont(font);

        verticalLayout_2->addWidget(welcome_label);

        user_name_label = new QLabel(layoutWidget1);
        user_name_label->setObjectName(QStringLiteral("user_name_label"));
        user_name_label->setFont(font);

        verticalLayout_2->addWidget(user_name_label);

        AdminWindow->setCentralWidget(centralWidget);
        mainToolBar = new QToolBar(AdminWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        AdminWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(AdminWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        AdminWindow->setStatusBar(statusBar);
        menuBar = new QMenuBar(AdminWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1084, 22));
        menuMenu = new QMenu(menuBar);
        menuMenu->setObjectName(QStringLiteral("menuMenu"));
        AdminWindow->setMenuBar(menuBar);

        menuBar->addAction(menuMenu->menuAction());

        retranslateUi(AdminWindow);

        QMetaObject::connectSlotsByName(AdminWindow);
    } // setupUi

    void retranslateUi(QMainWindow *AdminWindow)
    {
        AdminWindow->setWindowTitle(QApplication::translate("AdminWindow", "MainWindow", 0));
        view_activated_customers->setText(QApplication::translate("AdminWindow", "View Activated Customers", 0));
        view_deactivated_customers->setText(QApplication::translate("AdminWindow", "View Deactivated Customers", 0));
        search_customer->setText(QApplication::translate("AdminWindow", "Search Customer", 0));
        modify_help_options->setText(QApplication::translate("AdminWindow", "Modify Help Options", 0));
        modify_customer_reviews->setText(QApplication::translate("AdminWindow", "Modify Customer Reviews", 0));
        back_button->setText(QApplication::translate("AdminWindow", "Back ", 0));
        welcome_label->setText(QApplication::translate("AdminWindow", "<html><head/><body><p><span style=\" font-family: Arial; font-size:28pt; font-weight:600;\">Welcome, </span></p></body></html>", 0));
        user_name_label->setText(QApplication::translate("AdminWindow", "<html><head/><body><p><span style=\" font-family:'Arial'; font-size:28pt; font-weight:600;\">UserName</span></p></body></html>", 0));
        menuMenu->setTitle(QApplication::translate("AdminWindow", "Help", 0));
    } // retranslateUi

};

namespace Ui {
    class AdminWindow: public Ui_AdminWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINWINDOW_H
