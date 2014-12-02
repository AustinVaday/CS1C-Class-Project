#include "ViewProducts.h"
#include "ui_ViewProducts.h"

ViewProducts::ViewProducts(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ViewProducts)
{
    ui->setupUi(this);

    Product robo1("Meowzers", "Meows every five seconds", 5000.00, 342, 111413);
    ui->text1->insertPlainText(robo1.OutputData());

    Product robo2("Flower Bomb", "Blows up with daisies to\n spread world peace", 100000.99, 666, 122112 );
    ui->text2->insertPlainText(robo2.OutputData());

    Product robo3("Soviet Bomb", "Old bomb from Soviet\n Russia comes with complimentary bottle of vodka", 500.56, 234, 81285);
    ui->text3->insertPlainText(robo3.OutputData());
}

ViewProducts::~ViewProducts()
{
    delete ui;
}


