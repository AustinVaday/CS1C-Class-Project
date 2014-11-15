/********************************************************************************
** Form generated from reading UI file 'MainDisplayArea.ui'
**
** Created by: Qt User Interface Compiler version 5.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINDISPLAYAREA_H
#define UI_MAINDISPLAYAREA_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMdiArea>

QT_BEGIN_NAMESPACE

class Ui_MainDisplayArea
{
public:

    void setupUi(QMdiArea *MainDisplayArea)
    {
        if (MainDisplayArea->objectName().isEmpty())
            MainDisplayArea->setObjectName(QStringLiteral("MainDisplayArea"));
        MainDisplayArea->resize(777, 548);

        retranslateUi(MainDisplayArea);

        QMetaObject::connectSlotsByName(MainDisplayArea);
    } // setupUi

    void retranslateUi(QMdiArea *MainDisplayArea)
    {
        MainDisplayArea->setWindowTitle(QApplication::translate("MainDisplayArea", "MdiArea", 0));
    } // retranslateUi

};

namespace Ui {
    class MainDisplayArea: public Ui_MainDisplayArea {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINDISPLAYAREA_H
