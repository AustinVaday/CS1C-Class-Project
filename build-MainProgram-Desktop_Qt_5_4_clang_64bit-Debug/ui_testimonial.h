/********************************************************************************
** Form generated from reading UI file 'testimonial.ui'
**
** Created by: Qt User Interface Compiler version 5.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TESTIMONIAL_H
#define UI_TESTIMONIAL_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Testimonial
{
public:
    QPushButton *write;
    QTextEdit *custTest;
    QTextEdit *submitForm;
    QLabel *label;
    QLineEdit *nameLine;

    void setupUi(QWidget *Testimonial)
    {
        if (Testimonial->objectName().isEmpty())
            Testimonial->setObjectName(QStringLiteral("Testimonial"));
        Testimonial->resize(534, 356);
        Testimonial->setStyleSheet(QStringLiteral("Background-image: url(:/Resources/night.jpg)"));
        write = new QPushButton(Testimonial);
        write->setObjectName(QStringLiteral("write"));
        write->setGeometry(QRect(150, 310, 201, 32));
        write->setStyleSheet(QLatin1String("border-color: rgb(255, 255, 255);\n"
"font: 15pt \"American Typewriter\";\n"
"color: white;"));
        custTest = new QTextEdit(Testimonial);
        custTest->setObjectName(QStringLiteral("custTest"));
        custTest->setGeometry(QRect(300, 50, 221, 251));
        custTest->setStyleSheet(QLatin1String("font: 16pt \"American Typewriter\";\n"
"color: white;"));
        submitForm = new QTextEdit(Testimonial);
        submitForm->setObjectName(QStringLiteral("submitForm"));
        submitForm->setGeometry(QRect(10, 120, 251, 181));
        submitForm->setStyleSheet(QLatin1String("font: 16pt \"American Typewriter\";\n"
"color: white;"));
        label = new QLabel(Testimonial);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 10, 271, 41));
        label->setStyleSheet(QLatin1String("font: italic 14pt \"Zapfino\";\n"
"color: white;"));
        nameLine = new QLineEdit(Testimonial);
        nameLine->setObjectName(QStringLiteral("nameLine"));
        nameLine->setGeometry(QRect(20, 70, 111, 21));
        nameLine->setStyleSheet(QLatin1String("font: 13pt \"American Typewriter\";\n"
"color: white;"));

        retranslateUi(Testimonial);

        QMetaObject::connectSlotsByName(Testimonial);
    } // setupUi

    void retranslateUi(QWidget *Testimonial)
    {
        Testimonial->setWindowTitle(QApplication::translate("Testimonial", "Form", 0));
        write->setText(QApplication::translate("Testimonial", "Submit a Testimonial", 0));
        label->setText(QApplication::translate("Testimonial", "Feel Free to Write testimonials below...", 0));
        nameLine->setText(QString());
        nameLine->setPlaceholderText(QApplication::translate("Testimonial", "Enter Name:", 0));
    } // retranslateUi

};

namespace Ui {
    class Testimonial: public Ui_Testimonial {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TESTIMONIAL_H
