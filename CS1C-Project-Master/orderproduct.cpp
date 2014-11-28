#include "orderproduct.h"
#include "ui_orderproduct.h"

OrderProduct::OrderProduct(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::OrderProduct)
{
    ui->setupUi(this);
}

OrderProduct::~OrderProduct()
{
    delete ui;
}

void OrderProduct::editText()
{
    ui->OrderingAProduct->setReadOnly(true);
}
