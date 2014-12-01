/********************************************************************************
** Form generated from reading UI file 'maindisplay.ui'
**
** Created by: Qt User Interface Compiler version 5.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINDISPLAY_H
#define UI_MAINDISPLAY_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>

QT_BEGIN_NAMESPACE

class Ui_MainDisplay
{
public:

    void setupUi(QFrame *MainDisplay)
    {
        if (MainDisplay->objectName().isEmpty())
            MainDisplay->setObjectName(QStringLiteral("MainDisplay"));
        MainDisplay->setFrameShadow(QFrame::Raised);
        MainDisplay->resize(400, 300);
        MainDisplay->setFrameShape(QFrame::StyledPanel);

        retranslateUi(MainDisplay);

        QMetaObject::connectSlotsByName(MainDisplay);
    } // setupUi

    void retranslateUi(QFrame *MainDisplay)
    {
        MainDisplay->setWindowTitle(QApplication::translate("MainDisplay", "Frame", 0));
    } // retranslateUi

};

namespace Ui {
    class MainDisplay: public Ui_MainDisplay {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINDISPLAY_H
