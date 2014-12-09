#include "CustomerPlaceOrder.h"
#include "ui_CustomerPlaceOrder.h"

CustomerPlaceOrder::CustomerPlaceOrder(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::CustomerPlaceOrder)
{
    ui->setupUi(this);
}

CustomerPlaceOrder::~CustomerPlaceOrder()
{
    delete ui;
}
