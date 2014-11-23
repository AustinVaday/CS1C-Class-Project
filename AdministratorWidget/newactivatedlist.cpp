#include "newactivatedlist.h"
#include "ui_newactivatedlist.h"
#include "customerclass.h"
#include "customerlistclass.h"
#include "Header.h"
#include "ExceptionHandlers.h"
#include <QMessageBox>
NewActivatedList::NewActivatedList(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::NewActivatedList)
{
    ui->setupUi(this);

    // for MAIN
    CustomerList activatedList;
//    CustomerList deactivatedList;

    ReadCustomerFile(activatedList, ":/ActivatedListFile.txt");

//    ReadCustomerFile(deactivatedList, "://DeactivatedListFile.txt");


    for (int i = 0; i < activatedList.Size(); i++)
    {
        try
        {
            ui->listWidget->addItem(activatedList[i]);
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
}
