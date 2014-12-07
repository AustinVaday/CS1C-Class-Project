/********************************************************************************
** Form generated from reading UI file 'BrochureWindow.ui'
**
** Created by: Qt User Interface Compiler version 5.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BROCHUREWINDOW_H
#define UI_BROCHUREWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_BrochureWindow
{
public:
    QAction *actionHELP;
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QVBoxLayout *verticalLayout;
    QPushButton *button_placeOrder;
    QPushButton *button_viewProducts;
    QPushButton *button_accountInfo;
    QPushButton *button_logout;
    QMenuBar *menubar;
    QMenu *menuMenu;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *BrochureWindow)
    {
        if (BrochureWindow->objectName().isEmpty())
            BrochureWindow->setObjectName(QStringLiteral("BrochureWindow"));
        BrochureWindow->resize(631, 446);
        BrochureWindow->setStyleSheet(QStringLiteral("background-image: url(:/Resources/peacebridgeout.jpg);"));
        actionHELP = new QAction(BrochureWindow);
        actionHELP->setObjectName(QStringLiteral("actionHELP"));
        centralwidget = new QWidget(BrochureWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        verticalLayout_2 = new QVBoxLayout(centralwidget);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setSizeConstraint(QLayout::SetNoConstraint);
        label = new QLabel(centralwidget);
        label->setObjectName(QStringLiteral("label"));
        QFont font;
        font.setFamily(QStringLiteral("Zapfino"));
        font.setPointSize(48);
        font.setBold(false);
        font.setItalic(true);
        font.setWeight(50);
        label->setFont(font);
        label->setStyleSheet(QStringLiteral("font: italic 48pt \"Zapfino\";"));
        label->setMargin(0);
        label->setIndent(200);
        label->setOpenExternalLinks(true);

        verticalLayout_2->addWidget(label);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setSizeConstraint(QLayout::SetNoConstraint);
        button_placeOrder = new QPushButton(centralwidget);
        button_placeOrder->setObjectName(QStringLiteral("button_placeOrder"));
        button_placeOrder->setEnabled(true);
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(button_placeOrder->sizePolicy().hasHeightForWidth());
        button_placeOrder->setSizePolicy(sizePolicy);
        button_placeOrder->setMaximumSize(QSize(16777215, 46));
        button_placeOrder->setStyleSheet(QStringLiteral("font: italic 13pt \"Zapfino\";"));

        verticalLayout->addWidget(button_placeOrder);

        button_viewProducts = new QPushButton(centralwidget);
        button_viewProducts->setObjectName(QStringLiteral("button_viewProducts"));
        button_viewProducts->setStyleSheet(QStringLiteral("font: italic 13pt \"Zapfino\";"));

        verticalLayout->addWidget(button_viewProducts);

        button_accountInfo = new QPushButton(centralwidget);
        button_accountInfo->setObjectName(QStringLiteral("button_accountInfo"));
        sizePolicy.setHeightForWidth(button_accountInfo->sizePolicy().hasHeightForWidth());
        button_accountInfo->setSizePolicy(sizePolicy);
        button_accountInfo->setMaximumSize(QSize(167777, 16777215));
        button_accountInfo->setStyleSheet(QStringLiteral("font: italic 13pt \"Zapfino\";"));

        verticalLayout->addWidget(button_accountInfo);

        button_logout = new QPushButton(centralwidget);
        button_logout->setObjectName(QStringLiteral("button_logout"));
        button_logout->setStyleSheet(QStringLiteral("font: italic 13pt \"Zapfino\";"));

        verticalLayout->addWidget(button_logout);


        verticalLayout_2->addLayout(verticalLayout);

        BrochureWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(BrochureWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 631, 22));
        menuMenu = new QMenu(menubar);
        menuMenu->setObjectName(QStringLiteral("menuMenu"));
        BrochureWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(BrochureWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        BrochureWindow->setStatusBar(statusbar);

        menubar->addAction(menuMenu->menuAction());
        menuMenu->addAction(actionHELP);

        retranslateUi(BrochureWindow);

        QMetaObject::connectSlotsByName(BrochureWindow);
    } // setupUi

    void retranslateUi(QMainWindow *BrochureWindow)
    {
        BrochureWindow->setWindowTitle(QApplication::translate("BrochureWindow", "MainWindow", 0));
        actionHELP->setText(QApplication::translate("BrochureWindow", "HELP", 0));
        label->setText(QApplication::translate("BrochureWindow", "Brochure", 0));
        button_placeOrder->setText(QApplication::translate("BrochureWindow", "Place Order", 0));
        button_viewProducts->setText(QApplication::translate("BrochureWindow", "View Products", 0));
        button_accountInfo->setText(QApplication::translate("BrochureWindow", "Account Info", 0));
        button_logout->setText(QApplication::translate("BrochureWindow", "Log out", 0));
        menuMenu->setTitle(QApplication::translate("BrochureWindow", "Menu", 0));
    } // retranslateUi

};

namespace Ui {
    class BrochureWindow: public Ui_BrochureWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BROCHUREWINDOW_H
