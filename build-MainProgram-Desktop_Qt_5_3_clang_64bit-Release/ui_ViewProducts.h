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
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ViewProducts
{
public:
    QTabWidget *tabWidget;
    QWidget *Product1;
    QLabel *pic1;
    QTextBrowser *text1;
    QPushButton *product_One;
    QWidget *Product2;
    QLabel *pic2;
    QTextBrowser *text2;
    QPushButton *product_Two;
    QWidget *Product3;
    QLabel *pic3;
    QTextBrowser *text3;
    QPushButton *product_Three;
    QPushButton *MaintPlan;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QPushButton *checkout_button;
    QPushButton *backButton;

    void setupUi(QWidget *ViewProducts)
    {
        if (ViewProducts->objectName().isEmpty())
            ViewProducts->setObjectName(QStringLiteral("ViewProducts"));
        ViewProducts->resize(672, 516);
        ViewProducts->setStyleSheet(QLatin1String("#ViewProducts\n"
"{\n"
"	background-color: white;\n"
"\n"
"}"));
        tabWidget = new QTabWidget(ViewProducts);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(40, 50, 531, 441));
        tabWidget->setAutoFillBackground(false);
        tabWidget->setStyleSheet(QStringLiteral(""));
        Product1 = new QWidget();
        Product1->setObjectName(QStringLiteral("Product1"));
        pic1 = new QLabel(Product1);
        pic1->setObjectName(QStringLiteral("pic1"));
        pic1->setGeometry(QRect(170, 10, 181, 151));
        pic1->setAutoFillBackground(false);
        pic1->setPixmap(QPixmap(QString::fromUtf8(":/Resources/cat robot.jpg")));
        pic1->setScaledContents(true);
        text1 = new QTextBrowser(Product1);
        text1->setObjectName(QStringLiteral("text1"));
        text1->setGeometry(QRect(110, 170, 301, 191));
        text1->setAutoFillBackground(false);
        text1->setStyleSheet(QLatin1String("#text1\n"
"{\n"
"   \n"
"	font: 100 15pt \"American Typewriter\";\n"
"	\n"
"	font-weight: bold;\n"
"   \n"
"	color: rgb(255, 255, 255);\n"
"\n"
"\n"
"}"));
        product_One = new QPushButton(Product1);
        product_One->setObjectName(QStringLiteral("product_One"));
        product_One->setGeometry(QRect(190, 370, 151, 31));
        product_One->setAutoFillBackground(false);
        product_One->setStyleSheet(QLatin1String("\n"
"background-color: rgb(0, 0, 0);\n"
"font: 13pt \"American Typewriter\";\n"
"color: white;\n"
"border:  2px solid #555;\n"
"border-style: solid;\n"
"border-width: 1px;\n"
"border-radius: 40px;\n"
"padding: 5px;\n"
"border-color: rgb(218, 73, 255);\n"
"\n"
""));
        tabWidget->addTab(Product1, QString());
        Product2 = new QWidget();
        Product2->setObjectName(QStringLiteral("Product2"));
        pic2 = new QLabel(Product2);
        pic2->setObjectName(QStringLiteral("pic2"));
        pic2->setGeometry(QRect(20, 0, 521, 391));
        pic2->setStyleSheet(QStringLiteral(""));
        pic2->setPixmap(QPixmap(QString::fromUtf8(":/Resources/images.jpeg")));
        pic2->setScaledContents(true);
        text2 = new QTextBrowser(Product2);
        text2->setObjectName(QStringLiteral("text2"));
        text2->setGeometry(QRect(130, 100, 281, 201));
        text2->setStyleSheet(QLatin1String("#text2\n"
"{\n"
"	background-color: rgba(0, 0, 0, 38);\n"
"	font\n"
"	font: 15pt \"American Typewriter\";\n"
"	color:white;\n"
"\n"
"}"));
        product_Two = new QPushButton(Product2);
        product_Two->setObjectName(QStringLiteral("product_Two"));
        product_Two->setGeometry(QRect(190, 330, 151, 31));
        product_Two->setAutoFillBackground(false);
        product_Two->setStyleSheet(QLatin1String("\n"
"background-color: rgb(0, 0, 0);\n"
"font: 13pt \"American Typewriter\";\n"
"color: white;\n"
"border:  2px solid #555;\n"
"border-style: solid;\n"
"border-width: 1px;\n"
"border-radius: 40px;\n"
"padding: 5px;\n"
"border-color: rgb(218, 73, 255);\n"
"\n"
""));
        tabWidget->addTab(Product2, QString());
        Product3 = new QWidget();
        Product3->setObjectName(QStringLiteral("Product3"));
        pic3 = new QLabel(Product3);
        pic3->setObjectName(QStringLiteral("pic3"));
        pic3->setGeometry(QRect(120, 0, 291, 151));
        pic3->setPixmap(QPixmap(QString::fromUtf8(":/Resources/H51s.jpg")));
        pic3->setScaledContents(true);
        text3 = new QTextBrowser(Product3);
        text3->setObjectName(QStringLiteral("text3"));
        text3->setGeometry(QRect(100, 160, 321, 211));
        text3->setStyleSheet(QLatin1String("font: 15pt \"American Typewriter\";\n"
"color:white;\n"
"background-color: rgba(0, 0, 0, 56);"));
        product_Three = new QPushButton(Product3);
        product_Three->setObjectName(QStringLiteral("product_Three"));
        product_Three->setGeometry(QRect(180, 380, 151, 31));
        product_Three->setAutoFillBackground(false);
        product_Three->setStyleSheet(QLatin1String("\n"
"background-color: rgb(0, 0, 0);\n"
"font: 13pt \"American Typewriter\";\n"
"color: white;\n"
"border:  2px solid #555;\n"
"border-style: solid;\n"
"border-width: 1px;\n"
"border-radius: 40px;\n"
"padding: 5px;\n"
"border-color: rgb(218, 73, 255);\n"
"\n"
""));
        tabWidget->addTab(Product3, QString());
        MaintPlan = new QPushButton(ViewProducts);
        MaintPlan->setObjectName(QStringLiteral("MaintPlan"));
        MaintPlan->setGeometry(QRect(220, 0, 151, 31));
        MaintPlan->setAutoFillBackground(false);
        MaintPlan->setStyleSheet(QLatin1String("\n"
"background-color: rgb(0, 0, 0);\n"
"font: 13pt \"American Typewriter\";\n"
"color: white;\n"
"border:  2px solid #555;\n"
"border-style: solid;\n"
"border-width: 1px;\n"
"border-radius: 40px;\n"
"padding: 5px;\n"
"border-color: rgb(218, 73, 255);\n"
"\n"
""));
        widget = new QWidget(ViewProducts);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(460, 10, 181, 32));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        checkout_button = new QPushButton(widget);
        checkout_button->setObjectName(QStringLiteral("checkout_button"));
        checkout_button->setAutoFillBackground(false);
        checkout_button->setStyleSheet(QLatin1String("\n"
"background-color: rgb(0, 0, 0);\n"
"font: 13pt \"American Typewriter\";\n"
"color: white;\n"
"border:  2px solid #555;\n"
"border-style: solid;\n"
"border-width: 1px;\n"
"border-radius: 40px;\n"
"padding: 5px;\n"
"border-color: rgb(218, 73, 255);\n"
"\n"
""));

        horizontalLayout->addWidget(checkout_button);

        backButton = new QPushButton(widget);
        backButton->setObjectName(QStringLiteral("backButton"));
        backButton->setAutoFillBackground(false);
        backButton->setStyleSheet(QLatin1String("\n"
"background-color: rgb(0, 0, 0);\n"
"font: 13pt \"American Typewriter\";\n"
"color: white;\n"
"border:  2px solid #555;\n"
"border-style: solid;\n"
"border-width: 1px;\n"
"border-radius: 40px;\n"
"padding: 5px;\n"
"border-color: rgb(218, 73, 255);\n"
"\n"
""));

        horizontalLayout->addWidget(backButton);


        retranslateUi(ViewProducts);

        tabWidget->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(ViewProducts);
    } // setupUi

    void retranslateUi(QWidget *ViewProducts)
    {
        ViewProducts->setWindowTitle(QApplication::translate("ViewProducts", "Form", 0));
        pic1->setText(QString());
        product_One->setText(QApplication::translate("ViewProducts", "Add to Cart", 0));
        tabWidget->setTabText(tabWidget->indexOf(Product1), QApplication::translate("ViewProducts", "Product 1", 0));
        pic2->setText(QString());
        product_Two->setText(QApplication::translate("ViewProducts", "Add to Cart", 0));
        tabWidget->setTabText(tabWidget->indexOf(Product2), QApplication::translate("ViewProducts", "Product 2", 0));
        pic3->setText(QString());
        product_Three->setText(QApplication::translate("ViewProducts", "Add to Cart", 0));
        tabWidget->setTabText(tabWidget->indexOf(Product3), QApplication::translate("ViewProducts", "Product 3", 0));
        MaintPlan->setText(QApplication::translate("ViewProducts", "Maintanence Plan", 0));
        checkout_button->setText(QApplication::translate("ViewProducts", "Checkout", 0));
        backButton->setText(QApplication::translate("ViewProducts", "Back", 0));
    } // retranslateUi

};

namespace Ui {
    class ViewProducts: public Ui_ViewProducts {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VIEWPRODUCTS_H
