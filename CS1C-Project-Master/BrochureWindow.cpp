#include "BrochureWindow.h"
#include "ui_BrochureWindow.h"


BrochureWindow::BrochureWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::BrochureWindow)
{
    vpWindow = new ViewProducts;
    scWindow = new ShoppingCartWindowNew;
    ui->setupUi(this);


}

BrochureWindow::~BrochureWindow()
{
    delete ui;
    delete vpWindow;
    delete scWindow;

}
void BrochureWindow::on_updated_shopping_list(ProductList & updatedList)
{
    this->shoppingCartList = updatedList;

}

void BrochureWindow::on_actionHELP_triggered()
{
    emit clicked();
}

void BrochureWindow::on_button_viewProducts_clicked()
{

    delete vpWindow;
    vpWindow = new ViewProducts(this, shoppingCartList);

    vpWindow->show();
}

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
