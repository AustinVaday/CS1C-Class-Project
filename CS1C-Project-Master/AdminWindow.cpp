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

qDebug() << "Admin window: Output list - Line 14";
qDebug() << list.OutputList();

    /***********************************************************
     * This should be used in all windows except main window!
     ***********************************************************/
    connect(this, SIGNAL(customerListChanged(CustomerList*)), parent, SLOT(updateCustomerList(CustomerList*)));

    customerList = list;


    viewList = new NewActivatedList(this, customerList);

    ui->setupUi(this);
    // ***DEBUG** List is read.
qDebug() << "Admin window: Output customerList - Line 28";

qDebug() << customerList.OutputList();

    // FOR PROJECT MAIN WINDOWx
//    CustomerList activatedList;
//    CustomerList deactivatedList;

//    ReadCustomerFile(activatedList, "ActivatedListFile.txt");

//    ReadCustomerFile(deactivatedList, "DeactivatedListFile.txt");


    // FOR ADMIN WINDOW
    on_user_name_label_linkActivated("Administrator");
}

AdminWindow::~AdminWindow()
{
     customerList.ClearList();

    qDebug() << "AdminWindow -- Destructor Test #1";
    delete viewList;
    qDebug() << "AdminWindow -- Destructor Test #2";
    delete ui;
     qDebug() << "AdminWindow -- Destructor Test #3";
}

void AdminWindow::on_user_name_label_linkActivated(const QString &link)
{

    ui->user_name_label->setText(link);

    QFont font("Arial", 28, QFont::Bold);

    ui->user_name_label->setFont(font);
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

//void AdminWindow::customerListChanged(CustomerList* list)
//{

//}

void AdminWindow::updateCustomerList(CustomerList *list)
{
    customerList = *list;

    // notify the AdminWindow that list has been changed
    emit customerListChanged(&customerList);

    qDebug() << "Emitting in AdminWindow to MainWindow!";
}
