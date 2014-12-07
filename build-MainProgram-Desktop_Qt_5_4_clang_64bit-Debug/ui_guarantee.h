/********************************************************************************
** Form generated from reading UI file 'guarantee.ui'
**
** Created by: Qt User Interface Compiler version 5.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GUARANTEE_H
#define UI_GUARANTEE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTextBrowser>

QT_BEGIN_NAMESPACE

class Ui_Guarantee
{
public:
    QTextBrowser *textBrowser;

    void setupUi(QDialog *Guarantee)
    {
        if (Guarantee->objectName().isEmpty())
            Guarantee->setObjectName(QStringLiteral("Guarantee"));
        Guarantee->resize(400, 300);
        Guarantee->setStyleSheet(QLatin1String("#Guarantee{\n"
"	background-image: url(:/Resources/coral.jpg);\n"
"\n"
"}"));
        textBrowser = new QTextBrowser(Guarantee);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));
        textBrowser->setGeometry(QRect(20, 20, 351, 261));
        textBrowser->setStyleSheet(QLatin1String("\n"
"background-color: rgba(121, 74, 255, 64);"));

        retranslateUi(Guarantee);

        QMetaObject::connectSlotsByName(Guarantee);
    } // setupUi

    void retranslateUi(QDialog *Guarantee)
    {
        Guarantee->setWindowTitle(QApplication::translate("Guarantee", "Dialog", 0));
        textBrowser->setHtml(QApplication::translate("Guarantee", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:24pt; font-weight:600; color:#ffffff;\">Guarantee Policy</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:14pt; font-weight:600; color:#ffffff;\">-</span><span style=\" font-size:14pt; color:#ffffff;\">One Year Warranty</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:14pt; color:#ffffff;\">-"
                        "guaranteed to dispose of 99.9% of all bomb threats</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:14pt; color:#ffffff;\">-guaranteed to save 50% of civilian population</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:14pt; color:#ffffff;\">-guaranteed to detect threats as small as 10.67 nanometers</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:14pt; color:#ffffff;\">-mechanical parts guaranteed to last atleast 2 years</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:14pt; color:#ffffff;\">-electrical parts guaranteed to last 1 year</span></p>\n"
"<p style=\" margin-t"
                        "op:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:14pt; color:#ffffff;\">-saving lives: priceless</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:14pt; color:#ffffff;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:9pt; color:#ffffff;\">*****any tampering with the meowzers robot will lead to explosion of the Earth</span></p></body></html>", 0));
    } // retranslateUi

};

namespace Ui {
    class Guarantee: public Ui_Guarantee {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GUARANTEE_H
