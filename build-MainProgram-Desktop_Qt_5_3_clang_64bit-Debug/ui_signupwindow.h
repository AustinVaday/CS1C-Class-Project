/********************************************************************************
** Form generated from reading UI file 'signupwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SIGNUPWINDOW_H
#define UI_SIGNUPWINDOW_H

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
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SignUpWindow
{
public:
    QDialogButtonBox *buttonBox;
    QLabel *label_5;
    QWidget *layoutWidget_5;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_6;
    QLabel *label_4;
    QVBoxLayout *verticalLayout;
    QLineEdit *NameEdit;
    QLineEdit *EmailEdit;
    QLineEdit *AddressLine1Edit;
    QLineEdit *AddressLine1Edit_2;
    QLineEdit *PasswordEdit;

    void setupUi(QDialog *SignUpWindow)
    {
        if (SignUpWindow->objectName().isEmpty())
            SignUpWindow->setObjectName(QStringLiteral("SignUpWindow"));
        SignUpWindow->resize(400, 296);
        buttonBox = new QDialogButtonBox(SignUpWindow);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(30, 250, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        label_5 = new QLabel(SignUpWindow);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(130, 30, 131, 16));
        layoutWidget_5 = new QWidget(SignUpWindow);
        layoutWidget_5->setObjectName(QStringLiteral("layoutWidget_5"));
        layoutWidget_5->setGeometry(QRect(20, 70, 361, 149));
        horizontalLayout = new QHBoxLayout(layoutWidget_5);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        label = new QLabel(layoutWidget_5);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout_2->addWidget(label);

        label_2 = new QLabel(layoutWidget_5);
        label_2->setObjectName(QStringLiteral("label_2"));

        verticalLayout_2->addWidget(label_2);

        label_3 = new QLabel(layoutWidget_5);
        label_3->setObjectName(QStringLiteral("label_3"));

        verticalLayout_2->addWidget(label_3);

        label_6 = new QLabel(layoutWidget_5);
        label_6->setObjectName(QStringLiteral("label_6"));

        verticalLayout_2->addWidget(label_6);

        label_4 = new QLabel(layoutWidget_5);
        label_4->setObjectName(QStringLiteral("label_4"));

        verticalLayout_2->addWidget(label_4);


        horizontalLayout->addLayout(verticalLayout_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        NameEdit = new QLineEdit(layoutWidget_5);
        NameEdit->setObjectName(QStringLiteral("NameEdit"));

        verticalLayout->addWidget(NameEdit);

        EmailEdit = new QLineEdit(layoutWidget_5);
        EmailEdit->setObjectName(QStringLiteral("EmailEdit"));

        verticalLayout->addWidget(EmailEdit);

        AddressLine1Edit = new QLineEdit(layoutWidget_5);
        AddressLine1Edit->setObjectName(QStringLiteral("AddressLine1Edit"));

        verticalLayout->addWidget(AddressLine1Edit);

        AddressLine1Edit_2 = new QLineEdit(layoutWidget_5);
        AddressLine1Edit_2->setObjectName(QStringLiteral("AddressLine1Edit_2"));

        verticalLayout->addWidget(AddressLine1Edit_2);

        PasswordEdit = new QLineEdit(layoutWidget_5);
        PasswordEdit->setObjectName(QStringLiteral("PasswordEdit"));

        verticalLayout->addWidget(PasswordEdit);


        horizontalLayout->addLayout(verticalLayout);


        retranslateUi(SignUpWindow);
        QObject::connect(buttonBox, SIGNAL(accepted()), SignUpWindow, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), SignUpWindow, SLOT(reject()));

        QMetaObject::connectSlotsByName(SignUpWindow);
    } // setupUi

    void retranslateUi(QDialog *SignUpWindow)
    {
        SignUpWindow->setWindowTitle(QApplication::translate("SignUpWindow", "Dialog", 0));
        label_5->setText(QApplication::translate("SignUpWindow", "Request a Brochure", 0));
        label->setText(QApplication::translate("SignUpWindow", "Name: ", 0));
        label_2->setText(QApplication::translate("SignUpWindow", "Email:", 0));
        label_3->setText(QApplication::translate("SignUpWindow", "Address Line 1:", 0));
        label_6->setText(QApplication::translate("SignUpWindow", "Address Line 2:", 0));
        label_4->setText(QApplication::translate("SignUpWindow", "Password:", 0));
    } // retranslateUi

};

namespace Ui {
    class SignUpWindow: public Ui_SignUpWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIGNUPWINDOW_H
