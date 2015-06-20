/********************************************************************************
** Form generated from reading UI file 'proceedtocheckout.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PROCEEDTOCHECKOUT_H
#define UI_PROCEEDTOCHECKOUT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ProceedToCheckout
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QPushButton *on_cvcButton_clicked;
    QLineEdit *lineEdit;
    QTextBrowser *displayShoppingCart;
    QTextBrowser *totalCost_Browser;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_3;
    QLineEdit *creditCardNumber_line;
    QLineEdit *cvcNumber_line;
    QPushButton *on_sumbitPayment_clicked;

    void setupUi(QWidget *ProceedToCheckout)
    {
        if (ProceedToCheckout->objectName().isEmpty())
            ProceedToCheckout->setObjectName(QStringLiteral("ProceedToCheckout"));
        ProceedToCheckout->resize(734, 453);
        ProceedToCheckout->setContextMenuPolicy(Qt::ActionsContextMenu);
        ProceedToCheckout->setToolTipDuration(0);
        ProceedToCheckout->setAutoFillBackground(false);
        ProceedToCheckout->setStyleSheet(QLatin1String("#ViewProducts\n"
"{\n"
"	background-color: rgb(10, 10, 30);\n"
"\n"
"}"));
        label = new QLabel(ProceedToCheckout);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(400, 70, 291, 31));
        label_2 = new QLabel(ProceedToCheckout);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(400, 140, 71, 20));
        label_3 = new QLabel(ProceedToCheckout);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(400, 190, 31, 21));
        on_cvcButton_clicked = new QPushButton(ProceedToCheckout);
        on_cvcButton_clicked->setObjectName(QStringLiteral("on_cvcButton_clicked"));
        on_cvcButton_clicked->setGeometry(QRect(440, 190, 31, 21));
        lineEdit = new QLineEdit(ProceedToCheckout);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(50, 80, 201, 21));
        displayShoppingCart = new QTextBrowser(ProceedToCheckout);
        displayShoppingCart->setObjectName(QStringLiteral("displayShoppingCart"));
        displayShoppingCart->setGeometry(QRect(50, 100, 311, 281));
        displayShoppingCart->setAutoFillBackground(true);
        displayShoppingCart->setStyleSheet(QLatin1String("#ViewProducts\n"
"{\n"
"	background-color: rgb(0, 0, 0);\n"
"\n"
"}"));
        totalCost_Browser = new QTextBrowser(ProceedToCheckout);
        totalCost_Browser->setObjectName(QStringLiteral("totalCost_Browser"));
        totalCost_Browser->setGeometry(QRect(50, 380, 311, 41));
        layoutWidget = new QWidget(ProceedToCheckout);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(480, 110, 211, 191));
        verticalLayout_3 = new QVBoxLayout(layoutWidget);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        creditCardNumber_line = new QLineEdit(layoutWidget);
        creditCardNumber_line->setObjectName(QStringLiteral("creditCardNumber_line"));

        verticalLayout_3->addWidget(creditCardNumber_line);

        cvcNumber_line = new QLineEdit(layoutWidget);
        cvcNumber_line->setObjectName(QStringLiteral("cvcNumber_line"));

        verticalLayout_3->addWidget(cvcNumber_line);

        on_sumbitPayment_clicked = new QPushButton(layoutWidget);
        on_sumbitPayment_clicked->setObjectName(QStringLiteral("on_sumbitPayment_clicked"));

        verticalLayout_3->addWidget(on_sumbitPayment_clicked);


        retranslateUi(ProceedToCheckout);

        QMetaObject::connectSlotsByName(ProceedToCheckout);
    } // setupUi

    void retranslateUi(QWidget *ProceedToCheckout)
    {
        ProceedToCheckout->setWindowTitle(QApplication::translate("ProceedToCheckout", "Form", 0));
        label->setText(QApplication::translate("ProceedToCheckout", "Please Enter Your Payment Information Below", 0));
        label_2->setText(QApplication::translate("ProceedToCheckout", "Credit Card #", 0));
        label_3->setText(QApplication::translate("ProceedToCheckout", "CVC#", 0));
        on_cvcButton_clicked->setText(QApplication::translate("ProceedToCheckout", "?", 0));
        lineEdit->setText(QApplication::translate("ProceedToCheckout", "Products being purchased:", 0));
        on_sumbitPayment_clicked->setText(QApplication::translate("ProceedToCheckout", "Submit Payment", 0));
    } // retranslateUi

};

namespace Ui {
    class ProceedToCheckout: public Ui_ProceedToCheckout {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROCEEDTOCHECKOUT_H
