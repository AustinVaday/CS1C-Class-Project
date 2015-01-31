/********************************************************************************
** Form generated from reading UI file 'shoppingcartwindownew.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SHOPPINGCARTWINDOWNEW_H
#define UI_SHOPPINGCARTWINDOWNEW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ShoppingCartWindowNew
{
public:
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QGridLayout *gridLayout;
    QListWidget *listWidget;
    QLabel *label;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *remove_button;
    QPushButton *checkout_button;
    QPushButton *back_button;

    void setupUi(QWidget *ShoppingCartWindowNew)
    {
        if (ShoppingCartWindowNew->objectName().isEmpty())
            ShoppingCartWindowNew->setObjectName(QStringLiteral("ShoppingCartWindowNew"));
        ShoppingCartWindowNew->resize(676, 536);
        scrollArea = new QScrollArea(ShoppingCartWindowNew);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setGeometry(QRect(50, 50, 361, 471));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 359, 469));
        gridLayout = new QGridLayout(scrollAreaWidgetContents);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        listWidget = new QListWidget(scrollAreaWidgetContents);
        listWidget->setObjectName(QStringLiteral("listWidget"));

        gridLayout->addWidget(listWidget, 0, 0, 1, 1);

        scrollArea->setWidget(scrollAreaWidgetContents);
        label = new QLabel(ShoppingCartWindowNew);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(150, 20, 111, 16));
        layoutWidget = new QWidget(ShoppingCartWindowNew);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(460, 190, 175, 100));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        remove_button = new QPushButton(layoutWidget);
        remove_button->setObjectName(QStringLiteral("remove_button"));

        verticalLayout->addWidget(remove_button);

        checkout_button = new QPushButton(layoutWidget);
        checkout_button->setObjectName(QStringLiteral("checkout_button"));

        verticalLayout->addWidget(checkout_button);

        back_button = new QPushButton(layoutWidget);
        back_button->setObjectName(QStringLiteral("back_button"));

        verticalLayout->addWidget(back_button);


        retranslateUi(ShoppingCartWindowNew);

        QMetaObject::connectSlotsByName(ShoppingCartWindowNew);
    } // setupUi

    void retranslateUi(QWidget *ShoppingCartWindowNew)
    {
        ShoppingCartWindowNew->setWindowTitle(QApplication::translate("ShoppingCartWindowNew", "Form", 0));
        label->setText(QApplication::translate("ShoppingCartWindowNew", "ShoppingCart", 0));
        remove_button->setText(QApplication::translate("ShoppingCartWindowNew", "Remove Item", 0));
        checkout_button->setText(QApplication::translate("ShoppingCartWindowNew", "Proceed To Checkout", 0));
        back_button->setText(QApplication::translate("ShoppingCartWindowNew", "Back", 0));
    } // retranslateUi

};

namespace Ui {
    class ShoppingCartWindowNew: public Ui_ShoppingCartWindowNew {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SHOPPINGCARTWINDOWNEW_H
