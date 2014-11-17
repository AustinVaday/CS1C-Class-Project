#include "helpwindow.h"
#include "ui_helpwindow.h"
#include "firstdialog.h"
#include "orderproduct.h"
#include "requestbrochure.h"
#include "loginhelp.h"
#include "navigatingapp.h"

HelpWindow::HelpWindow(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::HelpWindow)
{
    ui->setupUi(this);
}

HelpWindow::~HelpWindow()
{
    delete ui;
}

void HelpWindow::on_CreatingAnAccount_clicked()
{
    FirstDialog button;

    button.setModal(true);
    button.exec();
}



void HelpWindow::on_HowToOrderAProduct_clicked()
{
    OrderProduct buttonPush;

    buttonPush.setModal(true);
    buttonPush.exec();

}


void HelpWindow::on_RequestingABrochure_clicked()
{
    RequestBrochure buttonPush;

    buttonPush.setModal(true);
    buttonPush.exec();
}

void HelpWindow::on_LoginHelp_clicked()
{
    LoginHelp buttonPush;

    buttonPush.setModal(true);
    buttonPush.exec();
}

void HelpWindow::on_NavigatingApp_clicked()
{
    NavigatingApp buttonPush;

    buttonPush.setModal(true);
    buttonPush.exec();

}
