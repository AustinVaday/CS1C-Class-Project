#include "ViewProducts.h"
#include "ui_ViewProducts.h"
#include "shoppingcartwindownew.h"
#include <QMessageBox>

ViewProducts::ViewProducts(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ViewProducts)
{
    ui->setupUi(this);


//    Product robo1("Meowzers", "Robot is disquised as a cat\nvery efficient in difficult terrains\nvery agile & stealthy robot", 5000.00, 666, 111413);
//    ui->text1->insertPlainText(robo1.OutputData());

//    Product robo2("iRobot 6000", "Can bounce into action after being thrown out of building\nhas a manipulator arm in order to cut wires\nvery durable can keep running after being dropped 100 ft", 100000.99, 342, 122112 );
//    ui->text2->insertPlainText(robo2.OutputData());

//    Product robo3("Soviet Attackers", "if cold war ever happens again robot is very efficient\nmade special to detect Soviet threats\ncan transmit video and sudio", 500.56, 234, 81285);
//    ui->text3->insertPlainText(robo3.OutputData());

//    product1 = robo1;
//    product2 = robo2;
//    product3 = robo3;
//    //INititalizes product list with thr three products
//    productList.Enqueue(robo1);
//    productList.Enqueue(robo2);
//    productList.Enqueue(robo3);




}

ViewProducts::ViewProducts(QWidget *parent, ProductList &shoppingCartList):
    QWidget(parent),
    ui(new Ui::ViewProducts)
{
    ui->setupUi(this);

    connect(this, SIGNAL(signal_updated_shopping_list(ProductList&)), parent, SLOT(on_updated_shopping_list(ProductList &)));


    Product robo1("Meowzers", "Robot is disquised as a cat\nvery efficient in difficult terrains\nvery agile & stealthy robot", 5000.00, 666, 111413);
    ui->text1->insertPlainText(robo1.OutputData());

    Product robo2("iRobot 6000", "Can bounce into action after being thrown out of building\nhas a manipulator arm in order to cut wires\nvery durable can keep running after being dropped 100 ft", 100000.99, 342, 122112 );
    ui->text2->insertPlainText(robo2.OutputData());

    Product robo3("Soviet Attackers", "if cold war ever happens again robot is very efficient\nmade special to detect Soviet threats\ncan transmit video and sudio", 500.56, 234, 81285);
    ui->text3->insertPlainText(robo3.OutputData());

    product1 = robo1;
    product2 = robo2;
    product3 = robo3;
    //INititalizes product list with thr three products
    productList.Enqueue(robo1);
    productList.Enqueue(robo2);
    productList.Enqueue(robo3);


    this->shoppingCart = shoppingCartList;
}

ViewProducts::~ViewProducts()
{
    delete ui;
}

void ViewProducts::on_updated_shopping_list(ProductList & updatedList)
{
    this->shoppingCart = updatedList;

    emit signal_updated_shopping_list(shoppingCart);
}


void ViewProducts::on_MaintPlan_clicked()
{
    MaintPlan mWindow;

    mWindow.setModal(true);
    mWindow.exec();
}

void ViewProducts::on_addProductOne_clicked()
{
     shoppingCart.Enqueue(product1);
     emit signal_updated_shopping_list(shoppingCart);

}

void ViewProducts::on_addProductTwo_clicked()
{
    shoppingCart.Enqueue(product2);
    emit signal_updated_shopping_list(shoppingCart);


}

void ViewProducts::on_addProductThree_clicked()
{
    shoppingCart.Enqueue(product3);
    emit signal_updated_shopping_list(shoppingCart);


}

void ViewProducts::on_checkOutButton_clicked()
{

//     emit signal_updated_shopping_list(shoppingCartList);

    if(!shoppingCart.isEmpty())
   {
        scWindow = new ShoppingCartWindowNew(this, shoppingCart);

        scWindow->show();
       // -?>


//     emit signal_updated_shopping_list(shoppingCart);

   }
    else
   {
        QMessageBox::information(this, "Error", "Shopping Cart empty!");
   }

}


void ViewProducts::on_pushButton_clicked()
{
    this->hide();
}
