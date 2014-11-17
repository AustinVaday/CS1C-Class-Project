#include "loginerror.h"
#include "ui_loginerror.h"

LoginError::LoginError(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::LoginError)
{
    ui->setupUi(this);
}

LoginError::~LoginError()
{
    delete ui;
}
