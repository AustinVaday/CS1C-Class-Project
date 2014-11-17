/********************************************************************************
** Form generated from reading UI file 'requestbrochure.ui'
**
** Created by: Qt User Interface Compiler version 5.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REQUESTBROCHURE_H
#define UI_REQUESTBROCHURE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTextBrowser>

QT_BEGIN_NAMESPACE

class Ui_RequestBrochure
{
public:
    QTextBrowser *textBrowser;

    void setupUi(QDialog *RequestBrochure)
    {
        if (RequestBrochure->objectName().isEmpty())
            RequestBrochure->setObjectName(QStringLiteral("RequestBrochure"));
        RequestBrochure->resize(400, 300);
        textBrowser = new QTextBrowser(RequestBrochure);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));
        textBrowser->setGeometry(QRect(0, 0, 400, 400));

        retranslateUi(RequestBrochure);

        QMetaObject::connectSlotsByName(RequestBrochure);
    } // setupUi

    void retranslateUi(QDialog *RequestBrochure)
    {
        RequestBrochure->setWindowTitle(QApplication::translate("RequestBrochure", "Dialog", 0));
        textBrowser->setHtml(QApplication::translate("RequestBrochure", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:600;\">Requesting a Brochure</span></p>\n"
"<p align=\"center\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-weight:600;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">1. To request a brochure you must first create an account.</p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; "
                        "margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">2. Select the &quot;Request Brochure&quot; button</p></body></html>", 0));
    } // retranslateUi

};

namespace Ui {
    class RequestBrochure: public Ui_RequestBrochure {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REQUESTBROCHURE_H
