/********************************************************************************
** Form generated from reading UI file 'environments.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ENVIRONMENTS_H
#define UI_ENVIRONMENTS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTextBrowser>

QT_BEGIN_NAMESPACE

class Ui_Environments
{
public:
    QTextBrowser *textBrowser;

    void setupUi(QDialog *Environments)
    {
        if (Environments->objectName().isEmpty())
            Environments->setObjectName(QStringLiteral("Environments"));
        Environments->resize(400, 300);
        Environments->setStyleSheet(QLatin1String("#Environments{\n"
"background-image: url(:/Resources/03776_craterpath_2560x1600.jpg);\n"
"}"));
        textBrowser = new QTextBrowser(Environments);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));
        textBrowser->setGeometry(QRect(20, 60, 351, 181));
        textBrowser->setStyleSheet(QLatin1String("background-color: rgba(165, 243, 246, 64)\n"
""));

        retranslateUi(Environments);

        QMetaObject::connectSlotsByName(Environments);
    } // setupUi

    void retranslateUi(QDialog *Environments)
    {
        Environments->setWindowTitle(QApplication::translate("Environments", "Dialog", 0));
        textBrowser->setHtml(QApplication::translate("Environments", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:24pt; color:#ffffff;\">Physical Environments Supported</span></p>\n"
"<p align=\"center\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:18pt; color:#ffffff;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" color:#ffffff;\">-Meowzers robot is great for jungle terrain</span></p>\n"
"<p style=\" margin-top:0px"
                        "; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" color:#ffffff;\">-Soviet Attackers are great in snowy and icey terrain</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" color:#ffffff;\">-iRobot is good for desert and mountainous areas</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; color:#ffffff;\"><br /></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; color:#ffffff;\"><br /></p></body></html>", 0));
    } // retranslateUi

};

namespace Ui {
    class Environments: public Ui_Environments {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ENVIRONMENTS_H
