/********************************************************************************
** Form generated from reading UI file 'guestwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
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
    QStatusBar *statusbar;

    void setupUi(QMainWindow *GuestWindow)
    {
        if (GuestWindow->objectName().isEmpty())
            GuestWindow->setObjectName(QStringLiteral("GuestWindow"));
        GuestWindow->resize(350, 300);
        centralwidget = new QWidget(GuestWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        sellButton = new QPushButton(centralwidget);
        sellButton->setObjectName(QStringLiteral("sellButton"));
        sellButton->setGeometry(QRect(40, 60, 261, 31));
        guaranteeButton = new QPushButton(centralwidget);
        guaranteeButton->setObjectName(QStringLiteral("guaranteeButton"));
        guaranteeButton->setGeometry(QRect(50, 160, 251, 21));
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
    } // retranslateUi

};

namespace Ui {
    class GuestWindow: public Ui_GuestWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GUESTWINDOW_H
