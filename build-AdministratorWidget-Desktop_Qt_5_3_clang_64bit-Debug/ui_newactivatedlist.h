/********************************************************************************
** Form generated from reading UI file 'newactivatedlist.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NEWACTIVATEDLIST_H
#define UI_NEWACTIVATEDLIST_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_NewActivatedList
{
public:
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout;
    QListWidget *listWidget;

    void setupUi(QDialog *NewActivatedList)
    {
        if (NewActivatedList->objectName().isEmpty())
            NewActivatedList->setObjectName(QStringLiteral("NewActivatedList"));
        NewActivatedList->resize(955, 655);
        scrollArea = new QScrollArea(NewActivatedList);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setGeometry(QRect(40, 20, 361, 621));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 359, 619));
        verticalLayout = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        listWidget = new QListWidget(scrollAreaWidgetContents);
        listWidget->setObjectName(QStringLiteral("listWidget"));

        verticalLayout->addWidget(listWidget);

        scrollArea->setWidget(scrollAreaWidgetContents);

        retranslateUi(NewActivatedList);

        QMetaObject::connectSlotsByName(NewActivatedList);
    } // setupUi

    void retranslateUi(QDialog *NewActivatedList)
    {
        NewActivatedList->setWindowTitle(QApplication::translate("NewActivatedList", "Dialog", 0));
    } // retranslateUi

};

namespace Ui {
    class NewActivatedList: public Ui_NewActivatedList {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NEWACTIVATEDLIST_H
