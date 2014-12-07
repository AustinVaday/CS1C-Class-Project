/********************************************************************************
** Form generated from reading UI file 'ViewProducts.ui'
**
** Created by: Qt User Interface Compiler version 5.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VIEWPRODUCTS_H
#define UI_VIEWPRODUCTS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
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
    QWidget *Product2;
    QLabel *pic2;
    QTextBrowser *text2;
    QWidget *Product3;
    QLabel *pic3;
    QTextBrowser *text3;
    QPushButton *MaintPlan;

    void setupUi(QWidget *ViewProducts)
    {
        if (ViewProducts->objectName().isEmpty())
            ViewProducts->setObjectName(QStringLiteral("ViewProducts"));
        ViewProducts->resize(582, 480);
        ViewProducts->setStyleSheet(QLatin1String("#ViewProducts\n"
"{\n"
"	background-color: rgb(0, 0, 0);\n"
"\n"
"}"));
        tabWidget = new QTabWidget(ViewProducts);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(0, 30, 581, 441));
        tabWidget->setAutoFillBackground(false);
        tabWidget->setStyleSheet(QLatin1String("#Product1\n"
"{\n"
"	background-image: url(:/Resources/space cat.jpg);\n"
"}\n"
"\n"
"#Product2\n"
"{\n"
"	\n"
"	background-color: rgb(0, 0, 0);\n"
"}\n"
"\n"
"#Product3\n"
"{\n"
"	\n"
"	background-image: url(:/Resources/soviet.jpg);\n"
"\n"
"}\n"
""));
        Product1 = new QWidget();
        Product1->setObjectName(QStringLiteral("Product1"));
        pic1 = new QLabel(Product1);
        pic1->setObjectName(QStringLiteral("pic1"));
        pic1->setGeometry(QRect(170, 0, 231, 211));
        pic1->setAutoFillBackground(false);
        pic1->setPixmap(QPixmap(QString::fromUtf8(":/Resources/cat robot.jpg")));
        pic1->setScaledContents(true);
        text1 = new QTextBrowser(Product1);
        text1->setObjectName(QStringLiteral("text1"));
        text1->setGeometry(QRect(140, 210, 301, 211));
        text1->setAutoFillBackground(false);
        text1->setStyleSheet(QLatin1String("#text1\n"
"{\n"
"	background-color: rgba(192, 19, 255, 115);\n"
"   \n"
"	font: 100 15pt \"American Typewriter\";\n"
"	\n"
"	font-weight: bold;\n"
"   \n"
"	color: rgb(255, 255, 255);\n"
"\n"
"\n"
"}"));
        tabWidget->addTab(Product1, QString());
        Product2 = new QWidget();
        Product2->setObjectName(QStringLiteral("Product2"));
        pic2 = new QLabel(Product2);
        pic2->setObjectName(QStringLiteral("pic2"));
        pic2->setGeometry(QRect(20, 0, 521, 391));
        pic2->setPixmap(QPixmap(QString::fromUtf8(":/Resources/images.jpeg")));
        pic2->setScaledContents(true);
        text2 = new QTextBrowser(Product2);
        text2->setObjectName(QStringLiteral("text2"));
        text2->setGeometry(QRect(130, 120, 281, 201));
        text2->setStyleSheet(QLatin1String("#text2\n"
"{\n"
"	background-color: rgba(0, 0, 0, 38);\n"
"	font\n"
"	font: 15pt \"American Typewriter\";\n"
"	color:white;\n"
"\n"
"}"));
        tabWidget->addTab(Product2, QString());
        Product3 = new QWidget();
        Product3->setObjectName(QStringLiteral("Product3"));
        pic3 = new QLabel(Product3);
        pic3->setObjectName(QStringLiteral("pic3"));
        pic3->setGeometry(QRect(40, 0, 481, 221));
        pic3->setPixmap(QPixmap(QString::fromUtf8(":/Resources/H51s.jpg")));
        pic3->setScaledContents(true);
        text3 = new QTextBrowser(Product3);
        text3->setObjectName(QStringLiteral("text3"));
        text3->setGeometry(QRect(140, 230, 271, 211));
        text3->setStyleSheet(QLatin1String("font: 15pt \"American Typewriter\";\n"
"color:white;\n"
"background-color: rgba(0, 0, 0, 56);"));
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

        retranslateUi(ViewProducts);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(ViewProducts);
    } // setupUi

    void retranslateUi(QWidget *ViewProducts)
    {
        ViewProducts->setWindowTitle(QApplication::translate("ViewProducts", "Form", 0));
        pic1->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(Product1), QApplication::translate("ViewProducts", "Product 1", 0));
        pic2->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(Product2), QApplication::translate("ViewProducts", "Product 2", 0));
        pic3->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(Product3), QApplication::translate("ViewProducts", "Product 3", 0));
        MaintPlan->setText(QApplication::translate("ViewProducts", "Maintanence Plan", 0));
    } // retranslateUi

};

namespace Ui {
    class ViewProducts: public Ui_ViewProducts {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VIEWPRODUCTS_H
