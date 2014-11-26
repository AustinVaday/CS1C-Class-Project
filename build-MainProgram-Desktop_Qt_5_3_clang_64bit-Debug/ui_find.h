/********************************************************************************
** Form generated from reading UI file 'find.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FIND_H
#define UI_FIND_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Find
{
public:
    QDialogButtonBox *buttonBox;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEdit;

    void setupUi(QDialog *Find)
    {
        if (Find->objectName().isEmpty())
            Find->setObjectName(QStringLiteral("Find"));
        Find->resize(402, 112);
        buttonBox = new QDialogButtonBox(Find);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(30, 70, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        widget = new QWidget(Find);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(40, 30, 288, 23));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(widget);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        lineEdit = new QLineEdit(widget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        horizontalLayout->addWidget(lineEdit);


        retranslateUi(Find);
        QObject::connect(buttonBox, SIGNAL(accepted()), Find, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), Find, SLOT(reject()));

        QMetaObject::connectSlotsByName(Find);
    } // setupUi

    void retranslateUi(QDialog *Find)
    {
        Find->setWindowTitle(QApplication::translate("Find", "Dialog", 0));
        label->setText(QApplication::translate("Find", "Enter a Customer Name:", 0));
    } // retranslateUi

};

namespace Ui {
    class Find: public Ui_Find {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FIND_H
