#include "ProductClass.h"
#include "ui_ProductClass.h"

ProductClass::ProductClass(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ProductClass)
{
    ui->setupUi(this);
}

ProductClass::~ProductClass()
{
    delete ui;
}
