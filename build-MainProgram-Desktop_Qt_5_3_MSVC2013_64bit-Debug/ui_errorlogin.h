/********************************************************************************
** Form generated from reading UI file 'errorlogin.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ERRORLOGIN_H
#define UI_ERRORLOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ErrorLogin
{
public:
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QPlainTextEdit *plainTextEdit;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *ErrorLogin)
    {
        if (ErrorLogin->objectName().isEmpty())
            ErrorLogin->setObjectName(QStringLiteral("ErrorLogin"));
        ErrorLogin->resize(286, 259);
        widget = new QWidget(ErrorLogin);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(10, 10, 268, 241));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        plainTextEdit = new QPlainTextEdit(widget);
        plainTextEdit->setObjectName(QStringLiteral("plainTextEdit"));

        verticalLayout->addWidget(plainTextEdit);

        buttonBox = new QDialogButtonBox(widget);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(ErrorLogin);
        QObject::connect(buttonBox, SIGNAL(accepted()), ErrorLogin, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), ErrorLogin, SLOT(reject()));

        QMetaObject::connectSlotsByName(ErrorLogin);
    } // setupUi

    void retranslateUi(QDialog *ErrorLogin)
    {
        ErrorLogin->setWindowTitle(QApplication::translate("ErrorLogin", "Login Error", 0));
        plainTextEdit->setPlainText(QApplication::translate("ErrorLogin", "You have entered an invalid username or password! Please try again.", 0));
    } // retranslateUi

};

namespace Ui {
    class ErrorLogin: public Ui_ErrorLogin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ERRORLOGIN_H
