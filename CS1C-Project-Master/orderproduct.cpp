#include "orderproduct.h"
#include "ui_orderproduct.h"

OrderProduct::OrderProduct(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::OrderProduct)
{
    ui->setupUi(this);

    connect(this, SIGNAL(helpOrderChanged()), parent, SLOT(changeOrderText()));
}

OrderProduct::~OrderProduct()
{
    delete ui;
}

void OrderProduct::editText()
{
    ui->OrderingAProduct->setReadOnly(true);
}

void OrderProduct::on_OrderingAProduct_textChanged()
{
    emit textChanged();
}
