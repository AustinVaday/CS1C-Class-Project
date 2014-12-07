#include "AdminWindow.h"
#include "newactivatedlist.h"
#include "customerclass.h"
#include "customerlistclass.h"
#include "ui_AdminWindow.h"
#include "Header.h"
#include "customeraddressbook.h"

AdminWindow::AdminWindow(QWidget *parent, CustomerList &list) :
    QMainWindow(parent),
    ui(new Ui::AdminWindow)
{

    /***********************************************************
     * This should be used in all windows except main window!
     ***********************************************************/
    connect(this, SIGNAL(customerListChanged(CustomerList*)), parent, SLOT(updateCustomerList(CustomerList*)));

    customerList = list;

    viewList = new NewActivatedList(this, customerList);

    ui->setupUi(this);

    ui->graphicsView->setStyleSheet("background-image: url(:/Resources/guest.jpg)");





  }

AdminWindow::~AdminWindow()
{
     customerList.ClearList();
//    delete messageView;
    qDebug() << "AdminWindow -- Destructor Test #1";
    delete viewList;
    qDebug() << "AdminWindow -- Destructor Test #2";
    delete ui;
     qDebug() << "AdminWindow -- Destructor Test #3";
}

void AdminWindow::on_back_button_clicked()
{
    this->hide();
}
void AdminWindow::on_view_activated_customers_clicked()
{
//    QWidget *viewActivatedCustomers = new QWidget;

//    viewActivatedCustomers->show();





    viewList->show();

//    CustomerList customerList2;
//    Customer Bob("Bob", "a", 0, "a");
//    customerList2.Enqueue(Bob);
//    CustomerAddressBook* custAddBook = new CustomerAddressBook(0, customerList2);
//    custAddBook->setModal(true);
//    custAddBook->exec();

//    CustomerAddressBook *custAddBook = new CustomerAddressBook();

//    custAddBook->showNormal();

//    custAddBook->activateWindow();

//    custAddBook->show();
}






void AdminWindow::on_modify_help_options_clicked()
{
    emit clicked();
}

void AdminWindow::on_actionHelp_triggered()
{
    emit clicked();
}

void AdminWindow::on_search_customer_clicked()
{

}

void AdminWindow::updateCustomerList(CustomerList *list)
{
    customerList = *list;

    // notify the AdminWindow that list has been changed
    emit customerListChanged(&customerList);

    qDebug() << "Emitting in AdminWindow to MainWindow!";
}

