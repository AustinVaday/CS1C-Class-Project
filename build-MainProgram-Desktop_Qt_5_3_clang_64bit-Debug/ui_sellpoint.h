/********************************************************************************
** Form generated from reading UI file 'sellpoint.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SELLPOINT_H
#define UI_SELLPOINT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTextBrowser>

QT_BEGIN_NAMESPACE

class Ui_SellPoint
{
public:
    QTextBrowser *textBrowser;

    void setupUi(QDialog *SellPoint)
    {
        if (SellPoint->objectName().isEmpty())
            SellPoint->setObjectName(QStringLiteral("SellPoint"));
        SellPoint->resize(435, 336);
        textBrowser = new QTextBrowser(SellPoint);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));
        textBrowser->setGeometry(QRect(20, 70, 381, 191));

        retranslateUi(SellPoint);

        QMetaObject::connectSlotsByName(SellPoint);
    } // setupUi

    void retranslateUi(QDialog *SellPoint)
    {
        SellPoint->setWindowTitle(QApplication::translate("SellPoint", "Dialog", 0));
        textBrowser->setHtml(QApplication::translate("SellPoint", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:24pt;\">Key Selling Points</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:14pt;\">-modular, adaptable, and expandable</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:14pt;\">-can perform bomb disposal, surveillance, and </span><span style=\" font-family:'Helvetica Neue Light'; color:#44444"
                        "4;\">reconnaissance</span> </p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">-robots can navigate through harsh terrains with sure footed efficiency</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">-can relay real-time video, audio, and sensor data</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">-will greatly enhance public safety and reduce casualities during wartime</p></body></html>", 0));
    } // retranslateUi

};

namespace Ui {
    class SellPoint: public Ui_SellPoint {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SELLPOINT_H
