/********************************************************************************
** Form generated from reading UI file 'newactivatedlist.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NEWACTIVATEDLIST_H
#define UI_NEWACTIVATEDLIST_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_NewActivatedList
{
public:
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout;
    QListWidget *listWidget;
    QPushButton *addCustomer;
    QScrollArea *scrollArea_2;
    QWidget *scrollAreaWidgetContents_2;
    QVBoxLayout *verticalLayout_2;
    QListWidget *deactivatedListWidget;
    QLabel *label;
    QLabel *label_2;
    QPushButton *addToActivatedListButton;
    QPushButton *addToDeactivatedListButton;
    QPushButton *masterModeButton;

    void setupUi(QDialog *NewActivatedList)
    {
        if (NewActivatedList->objectName().isEmpty())
            NewActivatedList->setObjectName(QStringLiteral("NewActivatedList"));
        NewActivatedList->resize(971, 739);
        scrollArea = new QScrollArea(NewActivatedList);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setGeometry(QRect(40, 50, 361, 621));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 359, 619));
        verticalLayout = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        listWidget = new QListWidget(scrollAreaWidgetContents);
        listWidget->setObjectName(QStringLiteral("listWidget"));

        verticalLayout->addWidget(listWidget);

        scrollArea->setWidget(scrollAreaWidgetContents);
        addCustomer = new QPushButton(NewActivatedList);
        addCustomer->setObjectName(QStringLiteral("addCustomer"));
        addCustomer->setGeometry(QRect(140, 690, 121, 32));
        scrollArea_2 = new QScrollArea(NewActivatedList);
        scrollArea_2->setObjectName(QStringLiteral("scrollArea_2"));
        scrollArea_2->setGeometry(QRect(510, 50, 361, 621));
        scrollArea_2->setWidgetResizable(true);
        scrollAreaWidgetContents_2 = new QWidget();
        scrollAreaWidgetContents_2->setObjectName(QStringLiteral("scrollAreaWidgetContents_2"));
        scrollAreaWidgetContents_2->setGeometry(QRect(0, 0, 359, 619));
        verticalLayout_2 = new QVBoxLayout(scrollAreaWidgetContents_2);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        deactivatedListWidget = new QListWidget(scrollAreaWidgetContents_2);
        deactivatedListWidget->setObjectName(QStringLiteral("deactivatedListWidget"));

        verticalLayout_2->addWidget(deactivatedListWidget);

        scrollArea_2->setWidget(scrollAreaWidgetContents_2);
        label = new QLabel(NewActivatedList);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(130, 20, 181, 20));
        label_2 = new QLabel(NewActivatedList);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(590, 20, 191, 21));
        addToActivatedListButton = new QPushButton(NewActivatedList);
        addToActivatedListButton->setObjectName(QStringLiteral("addToActivatedListButton"));
        addToActivatedListButton->setGeometry(QRect(430, 240, 51, 32));
        addToDeactivatedListButton = new QPushButton(NewActivatedList);
        addToDeactivatedListButton->setObjectName(QStringLiteral("addToDeactivatedListButton"));
        addToDeactivatedListButton->setGeometry(QRect(430, 280, 51, 32));
        masterModeButton = new QPushButton(NewActivatedList);
        masterModeButton->setObjectName(QStringLiteral("masterModeButton"));
        masterModeButton->setGeometry(QRect(400, 340, 113, 32));

        retranslateUi(NewActivatedList);

        QMetaObject::connectSlotsByName(NewActivatedList);
    } // setupUi

    void retranslateUi(QDialog *NewActivatedList)
    {
        NewActivatedList->setWindowTitle(QApplication::translate("NewActivatedList", "Dialog", 0));
        addCustomer->setText(QApplication::translate("NewActivatedList", "Add Customer", 0));
        label->setText(QApplication::translate("NewActivatedList", "Activated List of Customers", 0));
        label_2->setText(QApplication::translate("NewActivatedList", "Deactivated List of Customers", 0));
        addToActivatedListButton->setText(QApplication::translate("NewActivatedList", "<--", 0));
        addToDeactivatedListButton->setText(QApplication::translate("NewActivatedList", "-->", 0));
        masterModeButton->setText(QApplication::translate("NewActivatedList", "Master Mode", 0));
    } // retranslateUi

};

namespace Ui {
    class NewActivatedList: public Ui_NewActivatedList {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NEWACTIVATEDLIST_H
