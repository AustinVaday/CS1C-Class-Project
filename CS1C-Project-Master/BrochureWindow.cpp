#include "BrochureWindow.h"
#include "ui_BrochureWindow.h"


BrochureWindow::BrochureWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::BrochureWindow)
{
<<<<<<< HEAD
    vpWindow = new ViewProducts;
    scWindow = new ShoppingCartWindowNew;
    ui->setupUi(this);


=======
    ui->setupUi(this);


    Product robo1("Meowzers", "Robot is disquised as a cat\nvery efficient in difficult terrains\nvery agile & stealthy robot", 5000.00, 666, 111413);
    Product robo2("iRobot 6000", "Can bounce into action after being thrown out of building\nhas a manipulator arm in order to cut wires\nvery durable can keep running after being dropped 100 ft", 100000.99, 342, 122112 );
    Product robo3("Soviet Attackers", "if cold war ever happens again robot is very efficient\nmade special to detect Soviet threats\ncan transmit video and sudio", 500.56, 234, 81285);
    robotList.Enqueue(robo1);
    robotList.Enqueue(robo2);
    robotList.Enqueue(robo3);

    vpWindow = new ViewProducts;



>>>>>>> master
}

BrochureWindow::~BrochureWindow()
{
    delete ui;
    delete vpWindow;
<<<<<<< HEAD
    delete scWindow;

}
void BrochureWindow::on_updated_shopping_list(ProductList & updatedList)
{
    this->shoppingCartList = updatedList;

=======
}
\
void BrochureWindow::on_updated_shopping_list(ProductList &ShoppingCartList)
{
    shoppingCartList = ShoppingCartList;
>>>>>>> master
}

void BrochureWindow::on_actionHELP_triggered()
{
    emit clicked();
}

void BrochureWindow::on_button_viewProducts_clicked()
{
<<<<<<< HEAD

    delete vpWindow;
    vpWindow = new ViewProducts(this, shoppingCartList);
=======
    delete vpWindow;
    vpWindow = new ViewProducts(this, robotList, shoppingCartList);
>>>>>>> master

    vpWindow->show();
}

<<<<<<< HEAD
//void BrochureWindow::on_button_placeOrder_clicked()
//{
//    if (shoppingCartList.isEmpty())
//    {
//        QMessageBox::information(this, "Sorry", "You have no items in the shopping cart!");
//    }
//    else
//    {
//        delete scWindow;
//        scWindow = new ShoppingCartWindowNew(this, shoppingCartList);

//        scWindow->show();
//    }
//}
=======
void BrochureWindow::on_button_logout_clicked()
{
    this->close();
}
>>>>>>> master
