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
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
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

    void setupUi(QWidget *ViewProducts)
    {
        if (ViewProducts->objectName().isEmpty())
            ViewProducts->setObjectName(QStringLiteral("ViewProducts"));
        ViewProducts->resize(569, 463);
        tabWidget = new QTabWidget(ViewProducts);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(0, 0, 571, 461));
        Product1 = new QWidget();
        Product1->setObjectName(QStringLiteral("Product1"));
        pic1 = new QLabel(Product1);
        pic1->setObjectName(QStringLiteral("pic1"));
        pic1->setGeometry(QRect(160, 0, 231, 211));
        pic1->setPixmap(QPixmap(QString::fromUtf8(":/Resources/cat robot.jpg")));
        pic1->setScaledContents(true);
        text1 = new QTextBrowser(Product1);
        text1->setObjectName(QStringLiteral("text1"));
        text1->setGeometry(QRect(130, 210, 291, 221));
        tabWidget->addTab(Product1, QString());
        Product2 = new QWidget();
        Product2->setObjectName(QStringLiteral("Product2"));
        pic2 = new QLabel(Product2);
        pic2->setObjectName(QStringLiteral("pic2"));
        pic2->setGeometry(QRect(50, 0, 451, 201));
        pic2->setPixmap(QPixmap(QString::fromUtf8(":/Resources/images.jpeg")));
        pic2->setScaledContents(true);
        text2 = new QTextBrowser(Product2);
        text2->setObjectName(QStringLiteral("text2"));
        text2->setGeometry(QRect(140, 220, 281, 201));
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
        tabWidget->addTab(Product3, QString());

        retranslateUi(ViewProducts);

        tabWidget->setCurrentIndex(2);


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
    } // retranslateUi

};

namespace Ui {
    class ViewProducts: public Ui_ViewProducts {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VIEWPRODUCTS_H
