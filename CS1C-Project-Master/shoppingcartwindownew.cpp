#include "shoppingcartwindownew.h"
#include "ui_shoppingcartwindownew.h"
#include <QMessageBox>
#include "ExceptionHandlers.h"
ShoppingCartWindowNew::ShoppingCartWindowNew(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ShoppingCartWindowNew)
{
    ui->setupUi(this);
}

ShoppingCartWindowNew::ShoppingCartWindowNew(QWidget *parent, ProductList &ShoppingCartList) :
    QDialog(parent),
    ui(new Ui::ShoppingCartWindowNew)
{
    ui->setupUi(this);
    connect(this, SIGNAL(signal_updated_shopping_list(ProductList&)), parent, SLOT(on_updated_shopping_list(ProductList &)));

    ui->listWidget->setSelectionMode(QAbstractItemView::MultiSelection );

    //The product class does not have a method that does this. Only the constructor s=takes these prameters in
   Product robo1("Meowzers", "Robot is disquised as a cat\nvery efficient in difficult terrains\nvery agile & stealthy robot", 5000.00, 666, 111413);
   Product robo2("iRobot 6000", "Can bounce into action after being thrown out of building\nhas a manipulator arm in order to cut wires\nvery durable can keep running after being dropped 100 ft", 100000.99, 342, 122112 );
   Product  robo3("Soviet Attackers", "if cold war ever happens again robot is very efficient\nmade special to detect Soviet threats\ncan transmit video and sudio", 500.56, 234, 81285);
    this->robotList.Enqueue(robo1);
    this->robotList.Enqueue(robo2);
    this->robotList.Enqueue(robo3);



    shoppingCartList = ShoppingCartList;




    qDebug()<< "Outputting the current shopping Cart List: " << endl;
    qDebug() << shoppingCartList.OutputList();

//    qDebug() << "Hi";

    DisplayTheList();

}

void ShoppingCartWindowNew::DisplayTheList()

{
    ui->listWidget->clear();


qDebug() << "Inside 'DisplayTheList'";
    for (int i = 0; i< shoppingCartList.Size(); i++)
    {
        try
        {

              ui->listWidget->addItem((shoppingCartList)[i]);

        }
        catch(const NotFound&)
        {
            //Outputs error message
            QMessageBox messageBox;
            messageBox.critical(0,"Error","**List index was not found**");
            messageBox.setFixedSize(500,200);
        }
        catch(const OutOfRange&)
        {
            //Outputs error message
            QMessageBox messageBox;
            messageBox.critical(0,"Error","**List index is out of range**");
            messageBox.setFixedSize(500,200);
        }
        catch(const EmptyList&)
        {
            //Outputs error message
            QMessageBox messageBox;
            messageBox.critical(0,"Error","**List is empty, cannot perform operations**");
            messageBox.setFixedSize(500,200);
        }
    }


}

ShoppingCartWindowNew::~ShoppingCartWindowNew()
{
    delete ui;
}

void ShoppingCartWindowNew::on_remove_button_clicked()
{

   if(!shoppingCartList.isEmpty())
  {



//        Product product1; = shoppingCartList.FindProduct("Meowzers");
//        Product product2; = shoppingCartList.FindProduct("iRobot 6000");
//        Product product3 = shoppingCartList.FindProduct("Soviet Attackers");



       Product robo1("Meowzers", "Robot is disquised as a cat\nvery efficient in difficult terrains\nvery agile & stealthy robot", 5000.00, 666, 111413);
       Product robo2("iRobot 6000", "Can bounce into action after being thrown out of building\nhas a manipulator arm in order to cut wires\nvery durable can keep running after being dropped 100 ft", 100000.99, 342, 122112 );
       Product  robo3("Soviet Attackers", "if cold war ever happens again robot is very efficient\nmade special to detect Soviet threats\ncan transmit video and sudio", 500.56, 234, 81285);
       Product product1 = robo1;
       Product product2 = robo2;
       Product product3 = robo3;
//        QModelIndexList listIndeces = ui->listWidget->selectionModel()->selectedIndexes();

        int rowIndex = ui->listWidget->currentRow();



    //    Test stub
        qDebug() << "This is the rowindex: " << rowIndex;


        // if something is selected
        if (rowIndex != -1)
        {
            qDebug() << "Withing if statement";

            int i = 0;

            // tries to find the location of the item IN THE LIST
            while (ui->listWidget->item(rowIndex)->text() != shoppingCartList[i])
            {
               QMessageBox::information(this, "DEBUG", "In loop");
                i++;

                qDebug() << "Within if loop: " << i << endl;

            }
            qDebug() << "After while loop";

            qDebug() << endl << "Test 1";
            QString errorString = shoppingCartList[i];
            QMessageBox::information(this, "DEBUG", errorString);
            if (shoppingCartList[i] == product1.OutputData())
            {


                qDebug() << endl <<  "Test 2";
                try
                {
                    shoppingCartList.RemoveProduct(product1);

                }
                catch(NotFound)
                {
                    qDebug()<< "Anthony is awesome and this is the error we were looking for: 0" << endl;
                }
                catch(...)
                {

                }

                emit signal_updated_shopping_list(shoppingCartList);
            }

            else if (shoppingCartList[i] == product2.OutputData())
            {
                qDebug() << endl <<  "Test 3";


                try
                {
                    shoppingCartList.RemoveProduct(product2);

                }
                catch(NotFound)
                {
                    qDebug()<< "Anthony is awesome and this is the error we were looking for: 0" << endl;
                }
                catch(...)
                {
                }
                emit signal_updated_shopping_list(shoppingCartList);

            }

            else if (shoppingCartList[i] == product3.OutputData())
            {
                qDebug() << endl <<  "Test 3";
                //all this code is correct. Sorry Ill leave you besorry

                try
                {
                    shoppingCartList.RemoveProduct(product3);
                }
                catch(NotFound)
                {
                    qDebug()<< "Anthony is awesome and this is the error we were looking for: 0" << endl;
                }
                catch(...)
                {
                }
                emit signal_updated_shopping_list(shoppingCartList);

                 qDebug() << endl <<  "Test 4";


                 // removes the widget that is highlighted
                 ui->listWidget->removeItemWidget(ui->listWidget->item(rowIndex));
            }

            else
            {
                 qDebug() << endl <<  "Test 5";
            }

        }


        DisplayTheList();
  }
}

void ShoppingCartWindowNew::on_checkout_button_clicked()
{

   float totalSum = shoppingCartList.CalculateSum();
   QString stringSum = QString::number(totalSum);

   QString message =  "Total price for the products you purchased is $";
   message += stringSum;


   if(!shoppingCartList.isEmpty())
   {
        checkoutWindow = new ProceedToCheckout(0, shoppingCartList, message);
        checkoutWindow->show();



       shoppingCartList.ClearList();

    }
   else
    {
       QMessageBox::information(0, "Error", "Shopping Cart is empty. Press back to continue");
    }
       DisplayTheList();



}

void ShoppingCartWindowNew::on_back_button_clicked()
{
//    emit signal_updated_shopping_list(shoppingCartList);
    this->hide();
}
