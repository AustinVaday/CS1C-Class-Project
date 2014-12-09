#include "ViewProducts.h"
#include "ui_ViewProducts.h"

ViewProducts::ViewProducts(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ViewProducts)
{
    ui->setupUi(this);

    Product robo1("Meowzers", "Robot is disquised as a cat\nvery efficient in difficult terrains\nvery agile & stealthy robot", 5000.00, 666, 111413);
    ui->text1->insertPlainText(robo1.OutputData());

    Product robo2("iRobot 6000", "Can bounce into action after being thrown out of building\nhas a manipulator arm in order to cut wires\nvery durable can keep running after being dropped 100 ft", 100000.99, 342, 122112 );
    ui->text2->insertPlainText(robo2.OutputData());

    Product robo3("Soviet Attackers", "if cold war ever happens again robot is very efficient\nmade special to detect Soviet threats\ncan transmit video and audio", 500.56, 234, 81285);
    ui->text3->insertPlainText(robo3.OutputData());
}

ViewProducts::~ViewProducts()
{
    delete ui;
}



void ViewProducts::on_MaintPlan_clicked()
{
    MaintPlan mWindow;

    mWindow.setModal(true);
    mWindow.exec();
}


void ViewProducts::on_pushButton_clicked()
{
    QString mystring = "Here are recent customer testimonials!\n";
    testWindow->setTestimonial(mystring);
    testWindow->show();


}

void ViewProducts::updateTestimonial(QString newTestimonial)
{
    customerTestimonial = newTestimonial;
}
