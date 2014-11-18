/********************************************************************************
** Form generated from reading UI file 'firstdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FIRSTDIALOG_H
#define UI_FIRSTDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTextBrowser>

QT_BEGIN_NAMESPACE

class Ui_FirstDialog
{
public:
    QTextBrowser *textBrowser;

    void setupUi(QDialog *FirstDialog)
    {
        if (FirstDialog->objectName().isEmpty())
            FirstDialog->setObjectName(QStringLiteral("FirstDialog"));
        FirstDialog->resize(400, 300);
        textBrowser = new QTextBrowser(FirstDialog);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));
        textBrowser->setGeometry(QRect(0, 0, 400, 400));

        retranslateUi(FirstDialog);

        QMetaObject::connectSlotsByName(FirstDialog);
    } // setupUi

    void retranslateUi(QDialog *FirstDialog)
    {
        FirstDialog->setWindowTitle(QApplication::translate("FirstDialog", "Dialog", 0));
        textBrowser->setHtml(QApplication::translate("FirstDialog", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:600;\">Creating An Account</span></p>\n"
"<p align=\"center\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-weight:600;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:600;\">1. To create an account you must navigate back to the main menu</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px"
                        "; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:600;\">2. Click create an account</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:600;\">3. Fill in specified fields</span></p></body></html>", 0));
    } // retranslateUi

};

namespace Ui {
    class FirstDialog: public Ui_FirstDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FIRSTDIALOG_H
