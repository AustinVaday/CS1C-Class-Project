/********************************************************************************
** Form generated from reading UI file 'guestwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GUESTWINDOW_H
#define UI_GUESTWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_GuestWindow
{
public:
    QWidget *centralwidget;
    QPushButton *sellButton;
    QPushButton *guaranteeButton;
    QPushButton *EnviroButton;
    QPushButton *ConceptOps;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *GuestWindow)
    {
        if (GuestWindow->objectName().isEmpty())
            GuestWindow->setObjectName(QStringLiteral("GuestWindow"));
        GuestWindow->resize(564, 357);
        GuestWindow->setStyleSheet(QLatin1String("background-image: url(:/Resources/guest.jpg);\n"
""));
        centralwidget = new QWidget(GuestWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        sellButton = new QPushButton(centralwidget);
        sellButton->setObjectName(QStringLiteral("sellButton"));
        sellButton->setGeometry(QRect(130, 120, 261, 31));
        sellButton->setStyleSheet(QLatin1String("background-color: rgb(15, 15, 99);\n"
"\n"
"font: 14pt \"American Typewriter\";"));
        guaranteeButton = new QPushButton(centralwidget);
        guaranteeButton->setObjectName(QStringLiteral("guaranteeButton"));
        guaranteeButton->setGeometry(QRect(130, 240, 261, 31));
        guaranteeButton->setStyleSheet(QLatin1String("background-color: rgb(6, 5, 105);\n"
"font: 14pt \"American Typewriter\";"));
        EnviroButton = new QPushButton(centralwidget);
        EnviroButton->setObjectName(QStringLiteral("EnviroButton"));
        EnviroButton->setGeometry(QRect(130, 180, 261, 32));
        EnviroButton->setStyleSheet(QLatin1String("font: 14pt \"American Typewriter\";\n"
"background-color: rgb(20, 29, 117);"));
        ConceptOps = new QPushButton(centralwidget);
        ConceptOps->setObjectName(QStringLiteral("ConceptOps"));
        ConceptOps->setGeometry(QRect(130, 60, 261, 32));
        ConceptOps->setStyleSheet(QLatin1String("background-color: rgb(15, 15, 99);\n"
"\n"
"font: 14pt \"American Typewriter\";"));
        GuestWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(GuestWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        GuestWindow->setStatusBar(statusbar);

        retranslateUi(GuestWindow);

        QMetaObject::connectSlotsByName(GuestWindow);
    } // setupUi

    void retranslateUi(QMainWindow *GuestWindow)
    {
        GuestWindow->setWindowTitle(QApplication::translate("GuestWindow", "Guest Window", 0));
        sellButton->setText(QApplication::translate("GuestWindow", "Key Selling Points", 0));
        guaranteeButton->setText(QApplication::translate("GuestWindow", "Guarantee Policy", 0));
        EnviroButton->setText(QApplication::translate("GuestWindow", "Physical Environments Supported", 0));
        ConceptOps->setText(QApplication::translate("GuestWindow", "Concept of Operations", 0));
    } // retranslateUi

};

namespace Ui {
    class GuestWindow: public Ui_GuestWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GUESTWINDOW_H
