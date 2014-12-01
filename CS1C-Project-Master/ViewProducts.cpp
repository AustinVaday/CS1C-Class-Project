#include "ViewProducts.h"
#include "ui_ViewProducts.h"

ViewProducts::ViewProducts(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ViewProducts)
{
    ui->setupUi(this);
   // QPixmap pic(":/../Resources/cat robot.jpg");
   // ui->textBrowser->setSource(":/../Resources/cat robot.jpg");
   // ui->textBrowser->source();

    Product robo1("Meowzers", "Meows every five seconds", 5000.00, 342, 111413);
    ui->textBrowser->insertPlainText(robo1.OutputData());

    Product robo2("Flower Bomb", "Blows up with daisies to spread world peace", 100000.99, 666, 122112 );
    ui->textBrowser->insertPlainText(robo2.OutputData());

    Product robo3("Soviet Bomb", "Old bomb from Soviet Russia comes with complimentary bottle of vodka", 500.56, 234, 81285);
    ui->textBrowser->insertPlainText(robo3.OutputData());
}

ViewProducts::~ViewProducts()
{
    delete ui;
}

