/********************************************************************************
** Form generated from reading UI file 'maintplan.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINTPLAN_H
#define UI_MAINTPLAN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTextBrowser>

QT_BEGIN_NAMESPACE

class Ui_MaintPlan
{
public:
    QTextBrowser *textBrowser;

    void setupUi(QDialog *MaintPlan)
    {
        if (MaintPlan->objectName().isEmpty())
            MaintPlan->setObjectName(QStringLiteral("MaintPlan"));
        MaintPlan->resize(443, 333);
        MaintPlan->setStyleSheet(QLatin1String("#MaintPlan\n"
"{\n"
"	background-image: url(:/Resources/storm.jpg);\n"
"}"));
        textBrowser = new QTextBrowser(MaintPlan);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));
        textBrowser->setGeometry(QRect(30, 40, 381, 251));
        textBrowser->setStyleSheet(QLatin1String("font: 15pt \"American Typewriter\";\n"
"color: white;\n"
"background-color: rgba(7, 18, 255, 64);"));

        retranslateUi(MaintPlan);

        QMetaObject::connectSlotsByName(MaintPlan);
    } // setupUi

    void retranslateUi(QDialog *MaintPlan)
    {
        MaintPlan->setWindowTitle(QApplication::translate("MaintPlan", "Dialog", 0));
        textBrowser->setHtml(QApplication::translate("MaintPlan", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'American Typewriter'; font-size:15pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.Lucida Grande UI'; font-size:24pt;\">Maintanence Plan</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.Lucida Grande UI'; font-size:14pt;\">1) Beginning Plan - extends warranty of mechanical parts to 2.5 years and will come with technical support for this period of time - $1,000</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-righ"
                        "t:0px; -qt-block-indent:0; text-indent:0px; font-family:'.Lucida Grande UI'; font-size:14pt;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.Lucida Grande UI'; font-size:14pt;\">2)Intermediate Plan - extends warranty of mechanical parts to 3 years, and electrical parts to 2.5 years, and also has technical support for 3 years-$2,000</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'.Lucida Grande UI'; font-size:14pt;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.Lucida Grande UI'; font-size:14pt;\">3)Advanced Plan - extands warranty of mechanical parts to 5 years, and electrical parts to 3.5 years, and comes with tech support for 5 years - $5,000</span></p"
                        "></body></html>", 0));
    } // retranslateUi

};

namespace Ui {
    class MaintPlan: public Ui_MaintPlan {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINTPLAN_H
