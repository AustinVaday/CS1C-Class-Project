#include "ViewProducts.h"
#include "ui_ViewProducts.h"
#include <QMessageBox>


ViewProducts::ViewProducts(QWidget *parent):
    QWidget(parent),
    ui(new Ui::ViewProducts)
{
    ui->setupUi(this);

	scWindow = new ShoppingCartWindowNew;

}


ViewProducts::ViewProducts(QWidget *parent, ProductList &robotList, ProductList &shoppingCart)
 :
    QWidget(parent),
    ui(new Ui::ViewProducts)
{

	scWindow = new ShoppingCartWindowNew;
	connect(this, SIGNAL(signal_updated_shopping_list(ProductList&)), parent, SLOT(on_updated_shopping_list(ProductList &)));
		roboList = robotList;
ui->setupUi(this);
		Product robo1("Meowzers", "Robot is disquised as a cat\nvery efficient in difficult terrains\nvery agile & stealthy robot", 5000.00, 666, 111413);
	Product robo2("iRobot 6000", "Can bounce into action after being thrown out of building\nhas a manipulator arm in order to cut wires\nvery durable can keep running after being dropped 100 ft", 100000.99, 342, 122112 );
	Product robo3("Soviet Attackers", "if cold war ever happens again robot is very efficient\nmade special to detect Soviet threats\ncan transmit video and sudio", 500.56, 234, 81285);
	roboList.Enqueue(robo1);
	roboList.Enqueue(robo2);
	roboList.Enqueue(robo3);

	ui->text1->insertPlainText(roboList[0]);

	ui->text2->insertPlainText(roboList[1]);

	ui->text3->insertPlainText(roboList[2]);

	ui->text3->insertPlainText(robo3.OutputData());


}



// Anthony's Constructor, Check out cart
ViewProducts::ViewProducts(QWidget *parent, ProductList &shoppingCartList):
QWidget(parent),
ui(new Ui::ViewProducts)

{
	ui->setupUi(this);

	connect(this, SIGNAL(signal_updated_shopping_list(ProductList&)), parent, SLOT(on_updated_shopping_list(ProductList&)));

	this->shoppingCart = shoppingCartList;
}

ViewProducts::~ViewProducts()
{
	delete ui;
	delete scWindow;
}


void ViewProducts::on_updated_shopping_list(ProductList &updateList)
{
	this->shoppingCart = updateList;
	emit signal_updated_shopping_list(shoppingCart);
}

void ViewProducts::on_MaintPlan_clicked()
{
    MaintPlan mWindow;

    mWindow.setModal(true);
    mWindow.exec();
}


//Product Buttons ok
void ViewProducts::on_product_One_clicked()
{

	shoppingCart.Enqueue(roboList.ReturnProduct(0));

	emit signal_updated_shopping_list(shoppingCart);


}
void ViewProducts::on_product_Two_clicked()
{
	shoppingCart.Enqueue(roboList.ReturnProduct(1));

	emit signal_updated_shopping_list(shoppingCart);
}

void ViewProducts::on_product_Three_clicked()
{
	shoppingCart.Enqueue(roboList.ReturnProduct(2));

	emit signal_updated_shopping_list(shoppingCart);
}

void ViewProducts::on_checkout_button_clicked()
{

	if (shoppingCart.isEmpty())
    {
        QMessageBox::information(this,"Error" ,"Nothing in cart");

	}
    else
    {

//		emit signal_updated_shopping_list(shoppingCart);
//		scWindow.show();
			scWindow = new ShoppingCartWindowNew(this, shoppingCart);

			scWindow->show();
		}

}

// This method is for when the customer decides to go back to the previous window
void ViewProducts::on_backButton_clicked()
{
	this->hide();
}
