/********************************************************************************
** Form generated from reading UI file 'ViewProducts.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VIEWPRODUCTS_H
#define UI_VIEWPRODUCTS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ViewProducts
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QTextBrowser *productInfo;
    QHBoxLayout *horizontalLayout;
    QPushButton *button_prevProduct;
    QPushButton *button_nextProduct;

    void setupUi(QWidget *ViewProducts)
    {
        if (ViewProducts->objectName().isEmpty())
            ViewProducts->setObjectName(QStringLiteral("ViewProducts"));
        ViewProducts->resize(400, 300);
        layoutWidget = new QWidget(ViewProducts);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(21, 11, 361, 281));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        productInfo = new QTextBrowser(layoutWidget);
        productInfo->setObjectName(QStringLiteral("productInfo"));
        productInfo->setAutoFormatting(QTextEdit::AutoNone);

        verticalLayout->addWidget(productInfo);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        button_prevProduct = new QPushButton(layoutWidget);
        button_prevProduct->setObjectName(QStringLiteral("button_prevProduct"));

        horizontalLayout->addWidget(button_prevProduct);

        button_nextProduct = new QPushButton(layoutWidget);
        button_nextProduct->setObjectName(QStringLiteral("button_nextProduct"));

        horizontalLayout->addWidget(button_nextProduct);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(ViewProducts);

        QMetaObject::connectSlotsByName(ViewProducts);
    } // setupUi

    void retranslateUi(QWidget *ViewProducts)
    {
        ViewProducts->setWindowTitle(QApplication::translate("ViewProducts", "Form", 0));
        productInfo->setHtml(QApplication::translate("ViewProducts", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'.Helvetica Neue DeskInterface'; font-size:13pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Product Name: 	KillerKat </p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Description: 		Super awesome megafreakazoid bomb diffusor </p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Cost: 		$15000.00 </p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Model Number: 	2344 </p>\n"
"<p style=\" margin-top:0px;"
                        " margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Date Released11/22/14 </p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Product Name:	Edward the Monstorous </p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Description:		If there was a robot dog to dismantle a bomb, this	</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">		  would be it! </p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Cost:		$ 20000.00 </p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -"
                        "qt-block-indent:0; text-indent:0px;\">Model Number:	1449 </p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Date Released:	11/14/14 </p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Product Name:	R.Bot Jr. </p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Description:		Comes in all sizes! Kids of all ages! </p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Cost:		$550.00 </p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Model Number:	0941 </p>\n"
"<p style=\" ma"
                        "rgin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Date Released:	12/24/14 </p></body></html>", 0));
        button_prevProduct->setText(QApplication::translate("ViewProducts", "Previous", 0));
        button_nextProduct->setText(QApplication::translate("ViewProducts", "Next", 0));
    } // retranslateUi

};

namespace Ui {
    class ViewProducts: public Ui_ViewProducts {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VIEWPRODUCTS_H
