#include "loginhelp.h"
#include "ui_loginhelp.h"

LoginHelp::LoginHelp(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::LoginHelp)
{
    ui->setupUi(this);
}

LoginHelp::~LoginHelp()
{
    delete ui;
}
