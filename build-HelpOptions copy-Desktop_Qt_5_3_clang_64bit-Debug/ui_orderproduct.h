/********************************************************************************
** Form generated from reading UI file 'orderproduct.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ORDERPRODUCT_H
#define UI_ORDERPRODUCT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTextBrowser>

QT_BEGIN_NAMESPACE

class Ui_OrderProduct
{
public:
    QTextBrowser *OrderingAProduct;

    void setupUi(QDialog *OrderProduct)
    {
        if (OrderProduct->objectName().isEmpty())
            OrderProduct->setObjectName(QStringLiteral("OrderProduct"));
        OrderProduct->resize(251, 282);
        OrderingAProduct = new QTextBrowser(OrderProduct);
        OrderingAProduct->setObjectName(QStringLiteral("OrderingAProduct"));
        OrderingAProduct->setGeometry(QRect(0, 0, 251, 381));

        retranslateUi(OrderProduct);

        QMetaObject::connectSlotsByName(OrderProduct);
    } // setupUi

    void retranslateUi(QDialog *OrderProduct)
    {
        OrderProduct->setWindowTitle(QApplication::translate("OrderProduct", "Ordering a Product", 0));
        OrderingAProduct->setHtml(QApplication::translate("OrderProduct", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:9pt; font-weight:600;\">Ordering a Product</span></p>\n"
"<p align=\"center\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:9pt; font-weight:600;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:9pt;\">1. Create an account. (See How to create an Account)</span></p>\n"
"<p style=\" margin-top:0px; m"
                        "argin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:9pt;\">2. PLace Order.</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:9pt;\">		                       </span></p></body></html>", 0));
    } // retranslateUi

};

namespace Ui {
    class OrderProduct: public Ui_OrderProduct {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ORDERPRODUCT_H
