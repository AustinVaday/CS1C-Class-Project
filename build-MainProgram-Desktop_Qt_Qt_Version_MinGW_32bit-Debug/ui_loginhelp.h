/********************************************************************************
** Form generated from reading UI file 'loginhelp.ui'
**
** Created by: Qt User Interface Compiler version 5.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINHELP_H
#define UI_LOGINHELP_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTextBrowser>

QT_BEGIN_NAMESPACE

class Ui_LoginHelp
{
public:
    QTextBrowser *loginHelpText;

    void setupUi(QDialog *LoginHelp)
    {
        if (LoginHelp->objectName().isEmpty())
            LoginHelp->setObjectName(QStringLiteral("LoginHelp"));
        LoginHelp->resize(400, 300);
        loginHelpText = new QTextBrowser(LoginHelp);
        loginHelpText->setObjectName(QStringLiteral("loginHelpText"));
        loginHelpText->setGeometry(QRect(0, 0, 400, 400));

        retranslateUi(LoginHelp);

        QMetaObject::connectSlotsByName(LoginHelp);
    } // setupUi

    void retranslateUi(QDialog *LoginHelp)
    {
        LoginHelp->setWindowTitle(QApplication::translate("LoginHelp", "Dialog", 0));
        loginHelpText->setHtml(QApplication::translate("LoginHelp", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'.Helvetica Neue DeskInterface'; font-size:13pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:600;\">Login Help</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:600;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt;\">1. Select "
                        "the Login button</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'MS Shell Dlg 2'; font-size:8.25pt;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt;\">2. Enter email and password</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'MS Shell Dlg 2'; font-size:8.25pt;\"><br /></p></body></html>", 0));
    } // retranslateUi

};

namespace Ui {
    class LoginHelp: public Ui_LoginHelp {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINHELP_H
