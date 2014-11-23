/********************************************************************************
** Form generated from reading UI file 'navigatingapp.ui'
**
** Created by: Qt User Interface Compiler version 5.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NAVIGATINGAPP_H
#define UI_NAVIGATINGAPP_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTextBrowser>

QT_BEGIN_NAMESPACE

class Ui_NavigatingApp
{
public:
    QTextBrowser *textBrowser;

    void setupUi(QDialog *NavigatingApp)
    {
        if (NavigatingApp->objectName().isEmpty())
            NavigatingApp->setObjectName(QStringLiteral("NavigatingApp"));
        NavigatingApp->resize(400, 300);
        textBrowser = new QTextBrowser(NavigatingApp);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));
        textBrowser->setGeometry(QRect(0, 0, 400, 400));

        retranslateUi(NavigatingApp);

        QMetaObject::connectSlotsByName(NavigatingApp);
    } // setupUi

    void retranslateUi(QDialog *NavigatingApp)
    {
        NavigatingApp->setWindowTitle(QApplication::translate("NavigatingApp", "Dialog", 0));
        textBrowser->setHtml(QApplication::translate("NavigatingApp", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:600;\">Navigating the App</span></p>\n"
"<p align=\"center\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">1. To Navigate the application, select, one of the main menu Options</p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-rig"
                        "ht:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">2. Resrouces such as Login Help, How to create an Account etc. can be found in the Help Options in interface</p></body></html>", 0));
    } // retranslateUi

};

namespace Ui {
    class NavigatingApp: public Ui_NavigatingApp {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NAVIGATINGAPP_H
