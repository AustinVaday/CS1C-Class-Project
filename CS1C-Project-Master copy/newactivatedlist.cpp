#include "newactivatedlist.h"
#include "ui_newactivatedlist.h"
#include "customerclass.h"
#include "customerlistclass.h"
#include "Header.h"
#include "ExceptionHandlers.h"
#include <QMessageBox>
#include <QDebug>
#include <QModelIndexList>

NewActivatedList::NewActivatedList(QWidget *parent, CustomerList &list) :
    QDialog(parent),
    ui(new Ui::NewActivatedList)
{
    /***********************************************************
     * This should be used in all windows except main window!
     ***********************************************************/
    connect(this, SIGNAL(customerListChanged(CustomerList*)), parent, SLOT(updateCustomerList(CustomerList*)));

    ui->setupUi(this);

    ui->listWidget->setSelectionMode(QAbstractItemView::MultiSelection );
    ui->deactivatedListWidget->setSelectionMode(QAbstractItemView::MultiSelection );

    customerList = list;

    // Creates new customer address book
    custAddBook = new CustomerAddressBook(this, customerList, 0);

        // Checks if List is empty
    if (customerList.isEmpty())
    {
        ui->addCustomer->show();
    }
    else
    {
        ui->addCustomer->hide();
        DisplayTheList(customerList);
    }
}

void NewActivatedList::DisplayTheList(const CustomerList& list)

{
    ui->listWidget->clear();
    ui->deactivatedListWidget->clear();



    for (int i = 0; i < list.Size(); i++)
    {
        try
        {
            // if the customer has access to brochure, add to
            // activated customer list.
            if(list[i].getAccess())
            {
              ui->listWidget->addItem((list)[i].OutputData());
            }
            else
            {

                ui->deactivatedListWidget->addItem((list)[i].OutputData());
            }
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
int NewActivatedList::UpdateNumDeactivatedCustomers()
{
    int number = 0;
    for (int i = 0; i < customerList.Size(); i++)
    {
        if (!customerList[i].getAccess())
        {
            number++;
        }
    }

    return number;
}

int NewActivatedList::UpdateNumActivatedCustomers()
{
    int number = 0;
    for (int i = 0; i < customerList.Size(); i++)
    {
        if (customerList[i].getAccess())
        {
            number++;
        }
    }

    return number;
}

NewActivatedList::~NewActivatedList()
{

        updateCustomerList(&customerList);
        customerList.ClearList();

        delete custAddBook;

		delete ui;
}


void NewActivatedList::updateCustomerList(CustomerList *list)
{
    customerList = *list;

    DisplayTheList(customerList);

    // notify the AdminWindow that list has been changed
    emit customerListChanged(&customerList);

    // if empty, show the add customer button
    if (customerList.isEmpty())
    {
        ui->addCustomer->show();
    }
    else
    {
        ui->addCustomer->hide();
    }

    qDebug() << "Emitting in NewActivatedList to AdminWindow!";
}

void NewActivatedList::on_addCustomer_clicked()
{

    custAddBook->show();
}


void NewActivatedList::on_addToDeactivatedListButton_clicked()
{
    Customer customer;
    Customer* custPtr;

    QModelIndexList listIndeces = ui->listWidget->selectionModel()->selectedIndexes();

    int rowIndex = ui->listWidget->currentRow() ;


    // if something is selected
    if (rowIndex != -1)
    {

        for (int numRows = 0; numRows < listIndeces.count(); numRows++)
       {

            int i = 0;
            while(ui->listWidget->item(listIndeces[numRows].row())->text() != customerList[i].OutputData() && i < customerList.Size())
            {
                i++;
            }

            customer = customerList[i];
            custPtr  = customerList.ReturnCustomerPtr(customer.getUserName());
            custPtr->setAccountAccess(false);

            if (listIndeces.count() == 1)
            {
                ui->deactivatedListWidget->addItem(ui->deactivatedListWidget->item(rowIndex));
                ui->listWidget->removeItemWidget(ui->deactivatedListWidget->item(rowIndex));
            }
            else
            {

                ui->deactivatedListWidget->addItem(ui->deactivatedListWidget->item(listIndeces[numRows].row()));
                ui->listWidget->removeItemWidget(ui->deactivatedListWidget->item(listIndeces[numRows].row()));
            }
        }
        custPtr = NULL;
        DisplayTheList(customerList);
      emit customerListChanged(&customerList);

    }


}

void NewActivatedList::on_addToActivatedListButton_clicked()
{

        Customer customer;
        Customer* custPtr;

        QModelIndexList listIndeces = ui->deactivatedListWidget->selectionModel()->selectedIndexes();

        int rowIndex = ui->deactivatedListWidget->currentRow() ;

    if (rowIndex != -1)
    {
        for (int numRows = 0; numRows < listIndeces.count(); numRows++)
        {
            int i = 0;
            while(ui->deactivatedListWidget->item(listIndeces[numRows].row())->text() != customerList[i].OutputData() && i < customerList.Size())
            {
                i++;
            }

            customer = customerList[i];
            custPtr  = customerList.ReturnCustomerPtr(customer.getUserName());
            custPtr->setAccountAccess(true);

            if (listIndeces.count() == 1)
            {
                ui->listWidget->addItem(ui->listWidget->item(rowIndex));
                ui->deactivatedListWidget->removeItemWidget(ui->listWidget->item(rowIndex));
            }
            else
            {

                ui->listWidget->addItem(ui->listWidget->item(listIndeces[numRows].row()));
                ui->deactivatedListWidget->removeItemWidget(ui->listWidget->item(listIndeces[numRows].row()));
            }

        }
     }

            custPtr = NULL;


            DisplayTheList(customerList);
            emit customerListChanged(&customerList);
}

void NewActivatedList::on_masterModeButton_clicked()
{
    delete custAddBook;

    custAddBook = new CustomerAddressBook(this, customerList, 0);

    custAddBook->show();
}
