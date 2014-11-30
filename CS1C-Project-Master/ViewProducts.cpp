#include "ViewProducts.h"
#include "ui_ViewProducts.h"

ViewProducts::ViewProducts(QWidget *parent, ProductList *lst) :
    QWidget(parent),
    ui(new Ui::ViewProducts)
{


    ui->setupUi(this);
}

ViewProducts::~ViewProducts()
{
    delete ui;
}
