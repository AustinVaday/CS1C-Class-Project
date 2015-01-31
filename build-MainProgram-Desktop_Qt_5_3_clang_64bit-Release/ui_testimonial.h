/********************************************************************************
** Form generated from reading UI file 'testimonial.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
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
#include <QtWidgets/QTextBrowser>
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
    QLabel *label_2;
    QLabel *kimk;
    QTextBrowser *textBrowser;
    QLabel *churchill;
    QTextBrowser *textBrowser_2;

    void setupUi(QWidget *Testimonial)
    {
        if (Testimonial->objectName().isEmpty())
            Testimonial->setObjectName(QStringLiteral("Testimonial"));
        Testimonial->setEnabled(true);
        Testimonial->resize(719, 464);
        Testimonial->setAutoFillBackground(false);
        Testimonial->setStyleSheet(QLatin1String("background-image: url(:/Resources/night.jpg);\n"
"background-color: rgb(0, 0, 0);"));
        write = new QPushButton(Testimonial);
        write->setObjectName(QStringLiteral("write"));
        write->setGeometry(QRect(20, 410, 201, 32));
        write->setStyleSheet(QLatin1String("border-color: rgb(255, 255, 255);\n"
"font: 15pt \"American Typewriter\";\n"
"color: white;"));
        custTest = new QTextEdit(Testimonial);
        custTest->setObjectName(QStringLiteral("custTest"));
        custTest->setGeometry(QRect(220, 120, 211, 281));
        custTest->setStyleSheet(QLatin1String("font: 16pt \"American Typewriter\";\n"
"color: white;"));
        submitForm = new QTextEdit(Testimonial);
        submitForm->setObjectName(QStringLiteral("submitForm"));
        submitForm->setGeometry(QRect(10, 120, 201, 281));
        submitForm->setStyleSheet(QLatin1String("font: 16pt \"American Typewriter\";\n"
"color: white;"));
        submitForm->setOverwriteMode(false);
        label = new QLabel(Testimonial);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 10, 341, 41));
        label->setStyleSheet(QLatin1String("font: italic 14pt \"Zapfino\";\n"
"color: white;"));
        nameLine = new QLineEdit(Testimonial);
        nameLine->setObjectName(QStringLiteral("nameLine"));
        nameLine->setGeometry(QRect(20, 70, 111, 21));
        nameLine->setStyleSheet(QLatin1String("font: 13pt \"American Typewriter\";\n"
"color: white;"));
        label_2 = new QLabel(Testimonial);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(440, 10, 211, 51));
        label_2->setStyleSheet(QLatin1String("border-color: rgb(255, 255, 255);\n"
"font: 15pt \"American Typewriter\";\n"
"color: white;"));
        kimk = new QLabel(Testimonial);
        kimk->setObjectName(QStringLiteral("kimk"));
        kimk->setGeometry(QRect(600, 70, 111, 121));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(kimk->sizePolicy().hasHeightForWidth());
        kimk->setSizePolicy(sizePolicy);
        kimk->setMaximumSize(QSize(16775, 16775));
        kimk->setStyleSheet(QStringLiteral(""));
        kimk->setPixmap(QPixmap(QString::fromUtf8(":/Resources/rs_634x1024-130903132917-634.Kim-Kardashian-Hair-Wedding.mh.090313.jpg")));
        kimk->setScaledContents(true);
        textBrowser = new QTextBrowser(Testimonial);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));
        textBrowser->setGeometry(QRect(440, 70, 141, 111));
        textBrowser->setStyleSheet(QLatin1String("border-color: rgb(255, 255, 255);\n"
"font: 13pt \"American Typewriter\";\n"
"color: white;"));
        churchill = new QLabel(Testimonial);
        churchill->setObjectName(QStringLiteral("churchill"));
        churchill->setGeometry(QRect(470, 200, 211, 141));
        churchill->setPixmap(QPixmap(QString::fromUtf8(":/Resources/speeches_churchill.jpg")));
        churchill->setScaledContents(true);
        textBrowser_2 = new QTextBrowser(Testimonial);
        textBrowser_2->setObjectName(QStringLiteral("textBrowser_2"));
        textBrowser_2->setGeometry(QRect(460, 350, 241, 91));
        textBrowser_2->setStyleSheet(QLatin1String("border-color: rgb(255, 255, 255);\n"
"font: 13pt \"American Typewriter\";\n"
"color: white;"));

        retranslateUi(Testimonial);

        QMetaObject::connectSlotsByName(Testimonial);
    } // setupUi

    void retranslateUi(QWidget *Testimonial)
    {
        Testimonial->setWindowTitle(QApplication::translate("Testimonial", "Form", 0));
        write->setText(QApplication::translate("Testimonial", "Submit a Testimonial", 0));
        submitForm->setPlaceholderText(QApplication::translate("Testimonial", "Write here...", 0));
        label->setText(QApplication::translate("Testimonial", "Feel Free to Write testimonials below...", 0));
        nameLine->setText(QString());
        nameLine->setPlaceholderText(QApplication::translate("Testimonial", "Enter Name:", 0));
        label_2->setText(QApplication::translate("Testimonial", "Here are some recent \n"
"celebrity testimonials...", 0));
        kimk->setText(QString());
        textBrowser->setHtml(QApplication::translate("Testimonial", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'American Typewriter'; font-size:13pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">I use the iRobot600 all the time to help defend me from my massive amounts of paparazzi, I love it !</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">- Kim Kardashian</p></body></html>", 0));
        churchill->setText(QString());
        textBrowser_2->setHtml(QApplication::translate("Testimonial", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'American Typewriter'; font-size:13pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">The Soviet Attackers robots was huge help during WWII. Without the video and audio surveliance, those Russians might have beat us !</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">- Winston Churchill</p></body></html>", 0));
    } // retranslateUi

};

namespace Ui {
    class Testimonial: public Ui_Testimonial {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TESTIMONIAL_H
