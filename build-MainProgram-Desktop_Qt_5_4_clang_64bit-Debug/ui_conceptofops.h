/********************************************************************************
** Form generated from reading UI file 'conceptofops.ui'
**
** Created by: Qt User Interface Compiler version 5.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONCEPTOFOPS_H
#define UI_CONCEPTOFOPS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTextBrowser>

QT_BEGIN_NAMESPACE

class Ui_ConceptOfOps
{
public:
    QTextBrowser *opsWindow;

    void setupUi(QDialog *ConceptOfOps)
    {
        if (ConceptOfOps->objectName().isEmpty())
            ConceptOfOps->setObjectName(QStringLiteral("ConceptOfOps"));
        ConceptOfOps->resize(400, 300);
        ConceptOfOps->setStyleSheet(QLatin1String("#ConceptOfOps\n"
"{\n"
"	font: 15pt \"Papyrus\";\n"
"	background-image: url(:/Resources/concept.jpg);\n"
"}"));
        opsWindow = new QTextBrowser(ConceptOfOps);
        opsWindow->setObjectName(QStringLiteral("opsWindow"));
        opsWindow->setGeometry(QRect(40, 70, 321, 151));
        opsWindow->setStyleSheet(QLatin1String("#opsWindow\n"
"{\n"
"	background-color: rgba(65, 71, 100, 135);\n"
"	font-style: 13pt \"Papyrus\";\n"
"	color: white;\n"
"}\n"
""));

        retranslateUi(ConceptOfOps);

        QMetaObject::connectSlotsByName(ConceptOfOps);
    } // setupUi

    void retranslateUi(QDialog *ConceptOfOps)
    {
        ConceptOfOps->setWindowTitle(QApplication::translate("ConceptOfOps", "Dialog", 0));
        opsWindow->setHtml(QApplication::translate("ConceptOfOps", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:24pt;\">Concept of Operations</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:14pt;\">    Our battle tested robots provide increased protection, productivity and mission effectiveness for public safety, military, and industrial applications. Our engineers have the knowledge and tools to make sure your robot is mission ready.</span></p></body></html>", 0));
    } // retranslateUi

};

namespace Ui {
    class ConceptOfOps: public Ui_ConceptOfOps {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONCEPTOFOPS_H
