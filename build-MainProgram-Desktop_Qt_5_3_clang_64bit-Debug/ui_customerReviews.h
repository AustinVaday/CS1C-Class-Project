/********************************************************************************
** Form generated from reading UI file 'customerReviews.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CUSTOMERREVIEWS_H
#define UI_CUSTOMERREVIEWS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_customerReviews
{
public:
    QPushButton *write;
    QTextEdit *custTest;
    QTextEdit *submitForm;
    QLabel *label;
    QLineEdit *nameLine;
    QLabel *label_2;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QRadioButton *veryInterested;
    QRadioButton *somewhatInterested;
    QRadioButton *notInterested;
    QRadioButton *neverCallAgain;

    void setupUi(QWidget *customerReviews)
    {
        if (customerReviews->objectName().isEmpty())
            customerReviews->setObjectName(QStringLiteral("customerReviews"));
        customerReviews->setEnabled(true);
        customerReviews->resize(534, 581);
        customerReviews->setAutoFillBackground(false);
        customerReviews->setStyleSheet(QStringLiteral("background-image: url(:/Resources/night.jpg);"));
        write = new QPushButton(customerReviews);
        write->setObjectName(QStringLiteral("write"));
        write->setGeometry(QRect(150, 520, 201, 32));
        write->setStyleSheet(QLatin1String("border-color: rgb(255, 255, 255);\n"
"font: 15pt \"American Typewriter\";\n"
"color: white;"));
        custTest = new QTextEdit(customerReviews);
        custTest->setObjectName(QStringLiteral("custTest"));
        custTest->setGeometry(QRect(300, 50, 221, 251));
        custTest->setStyleSheet(QLatin1String("font: 16pt \"American Typewriter\";\n"
"color: white;"));
        submitForm = new QTextEdit(customerReviews);
        submitForm->setObjectName(QStringLiteral("submitForm"));
        submitForm->setGeometry(QRect(10, 120, 251, 181));
        submitForm->setStyleSheet(QLatin1String("font: 16pt \"American Typewriter\";\n"
"color: white;"));
        label = new QLabel(customerReviews);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 10, 361, 41));
        label->setStyleSheet(QLatin1String("font: italic 14pt \"Zapfino\";\n"
"color: white;"));
        nameLine = new QLineEdit(customerReviews);
        nameLine->setObjectName(QStringLiteral("nameLine"));
        nameLine->setGeometry(QRect(20, 70, 111, 21));
        nameLine->setStyleSheet(QLatin1String("font: 13pt \"American Typewriter\";\n"
"color: white;"));
        label_2 = new QLabel(customerReviews);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(50, 310, 111, 16));
        label_2->setStyleSheet(QLatin1String("color:\n"
"rgb(255, 255, 255)"));
        layoutWidget = new QWidget(customerReviews);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(50, 330, 158, 77));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        veryInterested = new QRadioButton(layoutWidget);
        veryInterested->setObjectName(QStringLiteral("veryInterested"));
        veryInterested->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255)"));

        verticalLayout->addWidget(veryInterested);

        somewhatInterested = new QRadioButton(layoutWidget);
        somewhatInterested->setObjectName(QStringLiteral("somewhatInterested"));
        somewhatInterested->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255)"));

        verticalLayout->addWidget(somewhatInterested);

        notInterested = new QRadioButton(layoutWidget);
        notInterested->setObjectName(QStringLiteral("notInterested"));
        notInterested->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255)"));

        verticalLayout->addWidget(notInterested);

        neverCallAgain = new QRadioButton(layoutWidget);
        neverCallAgain->setObjectName(QStringLiteral("neverCallAgain"));
        neverCallAgain->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255)"));

        verticalLayout->addWidget(neverCallAgain);


        retranslateUi(customerReviews);

        QMetaObject::connectSlotsByName(customerReviews);
    } // setupUi

    void retranslateUi(QWidget *customerReviews)
    {
        customerReviews->setWindowTitle(QApplication::translate("customerReviews", "Form", 0));
        write->setText(QApplication::translate("customerReviews", "Submit a Testimonial", 0));
        label->setText(QApplication::translate("customerReviews", "Feel free to write a review below...", 0));
        nameLine->setText(QString());
        nameLine->setPlaceholderText(QApplication::translate("customerReviews", "Enter Name:", 0));
        label_2->setText(QApplication::translate("customerReviews", "Please rate us: ", 0));
        veryInterested->setText(QApplication::translate("customerReviews", "Very interested", 0));
        somewhatInterested->setText(QApplication::translate("customerReviews", "Somewhat interested", 0));
        notInterested->setText(QApplication::translate("customerReviews", "Not interested", 0));
        neverCallAgain->setText(QApplication::translate("customerReviews", "Never will call again", 0));
    } // retranslateUi

};

namespace Ui {
    class customerReviews: public Ui_customerReviews {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CUSTOMERREVIEWS_H
