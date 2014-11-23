#include "newactivatedlist.h"
#include "ui_newactivatedlist.h"
#include "customerclass.h"
#include "customerlistclass.h"
#include "Header.h"
#include "ExceptionHandlers.h"
#include <QMessageBox>
#include <QDebug>

NewActivatedList::NewActivatedList(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::NewActivatedList)
{
    ui->setupUi(this);

    // when a list widget item is clicked, will call the function.
    connect(ui->listWidget,SIGNAL(itemClicked(QListWidgetItem*)),this,SLOT(on_listItem_clicked(QListWidgetItem*)));

    // for MAIN
    CustomerList activatedList;
//    CustomerList deactivatedList;

    ReadCustomerFile(activatedList, ":/ActivatedListFile.txt");

    customerList = activatedList;

    custAddBook = new CustomerAddressBook(0, activatedList);

//    ReadCustomerFile(deactivatedList, "://DeactivatedListFile.txt");

    ui->listWidget->setSortingEnabled(true);

    for (int i = 0; i < activatedList.Size(); i++)
    {
        try
        {
            // no longer returns a string
            ui->listWidget->addItem(activatedList[i].OutputData());


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

NewActivatedList::~NewActivatedList()
{
    delete ui;
    delete custAddBook;
}

void NewActivatedList::on_listItem_clicked(QListWidgetItem* item)
{
   QMessageBox::information(this,"Hello!","You clicked\n \""+item->text()+"\"");

   custAddBook->setModal(true);
   custAddBook->exec();

//    custAddBook->showNormal();

//    custAddBook->activateWindow();


//    custAddBook->show();
}
