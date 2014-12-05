#include "customeraddressbook.h"
#include "ui_customeraddressbook.h"


CustomerAddressBook::CustomerAddressBook(QWidget *parent, CustomerList &list, int listNum):
    QDialog(parent),
    ui(new Ui::CustomerAddressBook)
{
    customerList = list;
    Customer  customer;

    // CONNECT THE EDIT, REMOVE, AND SUBMIT BUTTONS
    /***********************************************************
     * This should be used in all windows except main window!
     ***********************************************************/
    connect(this, SIGNAL(customerListChanged(CustomerList*)), parent, SLOT(updateCustomerList(CustomerList*)));

   ui->setupUi(this);

    // name title
    setWindowTitle(tr("List of Customers"));

    // set read only text on construct
    ui->NameEdit->setReadOnly(true);
    ui->EmailEdit->setReadOnly(true);
    ui->AccountIdEdit->setReadOnly(true);
    ui->PasswordEdit->setReadOnly(true);
    ui->ActivatedCustomer->setEnabled(false);

    ui->addButton->show();
    ui->submitButton->hide();
    ui->cancelButton->hide();

    //disable the next and previous buttons
    if (list.isEmpty())
    {
        ui->nextCustomerButton->setEnabled(false);
        ui->prevCustomerButton->setEnabled(false);

        // disable the edit and remove buttons
        ui->editButton->setEnabled(false);
        ui->removeButton->setEnabled(false);
    }
   else
    {
        // set the current display to whatever was clicked!!
        if (listNum >= 0 && listNum <= customerList.Size())
        {
            // both lists start at 0
           customer = customerList[listNum];

           SetCurrentDisplay(&customer);
        }

    }

}

CustomerAddressBook::~CustomerAddressBook()
{
qDebug() << "Debugging: CustomerAddressBook - Deconstructors\n";

    customerList.ClearList();
    delete ui;
}

void CustomerAddressBook::updateInterface (Mode mode)
{
    currentMode = mode;
    switch(currentMode)
    {
    case ADDING_MODE:
    case EDITING_MODE:
        qDebug() << "Line 74 customerAddressBook.cpp";

        // set read only text on construct
        ui->NameEdit->setReadOnly(false);
        ui->EmailEdit->setReadOnly(false);
        ui->AccountIdEdit->setReadOnly(false);
        ui->PasswordEdit->setReadOnly(false);

        if (currentMode == EDITING_MODE)
        {
            ui->ActivatedCustomer->setEnabled(true);
        }
        else
        {
            ui->ActivatedCustomer->hide();
        }

        ui->NameEdit->setFocus(Qt::OtherFocusReason);

        ui->addButton->setEnabled(false);
        ui->editButton->setEnabled(false);
        ui->removeButton->setEnabled(false);

        //disable the next and previous buttons
        ui->nextCustomerButton->setEnabled(false);
        ui->prevCustomerButton->setEnabled(false);

        // disable the edit and remove buttons
        ui->submitButton->show();
        ui->cancelButton->show();

        qDebug() << "Line 96 customerAddressBook.cpp";

        break;

    case NAVIGATION_MODE:

        ui->ActivatedCustomer->show();
        if (customerList.isEmpty())
        {
            ui->NameEdit->clear();
            ui->EmailEdit->clear();
            ui->AccountIdEdit->clear();
            ui->PasswordEdit->clear();
            ui->ActivatedCustomer->setChecked(false);
        }

        // set read only text on construct
        ui->NameEdit->setReadOnly(true);
        ui->EmailEdit->setReadOnly(true);
        ui->AccountIdEdit->setReadOnly(true);
        ui->PasswordEdit->setReadOnly(true);
        ui->ActivatedCustomer->setEnabled(false);


        int number = customerList.Size();

        // enables
        ui->editButton->setEnabled(number>=1);
        ui->removeButton->setEnabled(number>=1);
        ui->nextCustomerButton->setEnabled(number>1);
        ui->prevCustomerButton->setEnabled(number>1);


//        ui->ActivatedCustomer->(false);


        ui->addButton->setEnabled(true);

        ui->submitButton->hide();
        ui->cancelButton->hide();
        break;
    }
}

void CustomerAddressBook::importList(CustomerList list)
{
    customerList = list;
}

void CustomerAddressBook::SetCurrentDisplay(Customer* someCustomer)
{
    // update the fields with next customer!
    ui->NameEdit->setText(someCustomer->getUserName());
    ui->EmailEdit->setText(someCustomer->getEmail());
    ui->AccountIdEdit->setText(QString::number(someCustomer->getAccountNum()));
    ui->PasswordEdit->setText(someCustomer->getPassword());
    if(someCustomer->getAccess())
    {
        ui->ActivatedCustomer->setChecked(true);
    }
    else
    {
        ui->ActivatedCustomer->setChecked(false);
    }
}

void CustomerAddressBook::on_addButton_clicked()
{

    // store old information into variables
    // (in case they submition)
    oldName = ui->NameEdit->text();
    oldEmail= ui->EmailEdit->text();
    oldId = ui->AccountIdEdit->text();
    oldPassword = ui->PasswordEdit->text();
    oldIsActivated = ui->ActivatedCustomer->isChecked();

    //disable the next and previous buttons
    ui->nextCustomerButton->setEnabled(false);
    ui->prevCustomerButton->setEnabled(false);

    // clear the fields, prepare for new entry
    ui->NameEdit->clear();
    ui->EmailEdit->clear();
    ui->AccountIdEdit->clear();
    ui->PasswordEdit->clear();
    ui->ActivatedCustomer->setChecked(false);

    qDebug() << "CustomerAddressBook.cpp -- on_addButton_clicked() -- line 176";
    updateInterface(ADDING_MODE);
    qDebug() << "CustomerAddressBook.cpp -- on_addButton_clicked() -- line 178";


}

void CustomerAddressBook::on_submitButton_clicked()
{
    // store new contact details in variables
    QString name     = ui->NameEdit->text();
    QString email    = ui->EmailEdit->text();
    QString idString = ui->AccountIdEdit->text();
    QString pass     = ui->PasswordEdit->text();
    bool  activationStatus = false;
    if(ui->ActivatedCustomer->isChecked())
    {
        activationStatus = true;
    }

    qDebug() << "ActivationStatus you entered is: " << activationStatus;


    if (currentMode == ADDING_MODE)
    {

        Customer customer (name, email, idString.toLong(), pass);
        customer.setAccountAccess(activationStatus);

        // check if any field is empty
        if (name.isEmpty())
        {

            QMessageBox::information(this, tr("Empty Field"),
                       tr("Please enter in a name."));
            on_cancelButton_clicked();


        }
        else if (email.isEmpty())
        {
            QMessageBox::information(this, tr("Empty Field"),
                       tr("Please enter in an email address."));
            on_cancelButton_clicked();

        }
        else if (idString.isEmpty())
        {
            QMessageBox::information(this, tr("Empty Field"),
                       tr("Please enter in an ID number."));
            on_cancelButton_clicked();

        }
        else if (pass.isEmpty())
        {
            QMessageBox::information(this, tr("Empty Field"),
                       tr("Please enter in a password."));
            on_cancelButton_clicked();

        }
        else
         {


            // check if the customer is not taken
           if (!customerList.isExist(customer) && !customerList.isExistSameName(name))
           {


               customerList.Enqueue(customer);


               QMessageBox::information(this, tr("Add Successful"),
                tr("\"%1\" has been added to the customer list.").arg(name));

               // SIGNALS & SLOTS
               emit customerListChanged(&customerList);

            }
           else if (customerList.isExistSameName(name))
           {
               QMessageBox::information(this, tr("Add Unsuccessful"),
                tr("Please enter in another name, \"%1\" is already in your customer list.").arg(name));
               on_cancelButton_clicked();

           }
           else
            {

               QMessageBox::information(this, tr("Add Unsuccessful"),
                tr("\"%1\" is already in your customer list.").arg(name));

               on_cancelButton_clicked();

            }

  }
            //Restore the buttons to their normal state.
            ui->addButton->setEnabled(true);
            ui->submitButton->hide();
            ui->cancelButton->hide();

            // if list greater than one, enable the next and prev buttons
            int sizeList = customerList.Size();
            ui->nextCustomerButton->setEnabled(sizeList>1);
            ui->prevCustomerButton->setEnabled(sizeList>1);

            // set read only text on construct
            ui->NameEdit->setReadOnly(true);
            ui->EmailEdit->setReadOnly(true);
            ui->AccountIdEdit->setReadOnly(true);
            ui->PasswordEdit->setReadOnly(true);
            ui->ActivatedCustomer->setEnabled(false);




    }
    else if (currentMode == EDITING_MODE)
    {
        qDebug() << "ooo4";
        bool change = false;

        Customer newCust (name, email, idString.toLong(), pass);
        newCust.setAccountAccess(activationStatus);

        try
        {
         Customer* customerPtr = customerList.ReturnCustomerPtr(oldName);
         customerPtr->setAccountAccess(oldIsActivated);

         if (oldName != name || oldEmail != email || oldId != idString || oldPassword != pass || oldIsActivated != activationStatus)
         {

             change = true;

         }

         // check if any field is empty
         if (name.isEmpty())
         {

             QMessageBox::information(this, tr("Empty Field"),
                        tr("Please enter in a name."));
             on_cancelButton_clicked();


         }
         else if (email.isEmpty())
         {
             QMessageBox::information(this, tr("Empty Field"),
                        tr("Please enter in an email address."));
             on_cancelButton_clicked();

         }
         else if (idString.isEmpty())
         {
             QMessageBox::information(this, tr("Empty Field"),
                        tr("Please enter in an ID number."));
             on_cancelButton_clicked();

         }
         else if (pass.isEmpty())
         {
             QMessageBox::information(this, tr("Empty Field"),
                        tr("Please enter in a password."));
             on_cancelButton_clicked();

         }
         else if (!change)
         {
             QMessageBox::information(this, tr("Edit Unsuccessful"),
               tr("No changes were made."));
             on_cancelButton_clicked();

         }
         else if (customerList.isExist(newCust))
         {
             QMessageBox::information(this, tr("Edit Unsuccessful"),
               tr("Sorry, \"%1\" is already in your address book.").arg(name));
             on_cancelButton_clicked();

         }
         else
         {
             QMessageBox::information(this, tr("Edit Successful"),
               tr("\"%1\" has been edited in your address book.").arg(oldName));

             // change any updates!!
                            qDebug() << "customerAddressBook.cpp line 350";
              customerPtr->setUserName(name);
                            qDebug() << "customerAddressBook.cpp line 352";
              customerPtr->setEmail(email);
                           qDebug() << "customerAddressBook.cpp line 354";
              customerPtr->setAccountNum(idString.toLong());
                          qDebug() << "customerAddressBook.cpp line 356";
              customerPtr->setPassword(pass);
                         qDebug() << "customerAddressBook.cpp line 358";
              customerPtr->setAccountAccess(activationStatus);
                          qDebug() << "customerAddressBook.cpp line 360";

              // SIGNALS & SLOTS
              emit customerListChanged(&customerList);

         }

         customerPtr = NULL;

        }
        catch (...)
        {
            QMessageBox::information(this, tr("Edit Unsuccessful"),
              tr("Sorry, \"%1\" an exception/error has occured.").arg(name));
            on_cancelButton_clicked();

        }

    }

//    // SIGNALS & SLOTS
//    emit customerListChanged(&customerList);
    updateInterface(NAVIGATION_MODE);

}

void CustomerAddressBook::on_cancelButton_clicked()
{
    // reset all old data
    ui->NameEdit->setText(oldName);
    ui->EmailEdit->setText(oldEmail);
    ui->AccountIdEdit->setText(oldId);
    ui->PasswordEdit->setText(oldPassword);
    if (oldIsActivated)
    {
        ui->ActivatedCustomer->setChecked(true);
    }
    else
    {
        ui->ActivatedCustomer->setChecked(false);
    }

//    // set read only text on construct
//    ui->NameEdit->setReadOnly(true);
//    ui->EmailEdit->setReadOnly(true);
//    ui->AccountIdEdit->setReadOnly(true);
//    ui->PasswordEdit->setReadOnly(true);

//    ui->addButton->setEnabled(true);
//    ui->submitButton->hide();
//    ui->cancelButton->hide();

//    // if list greater than one, enable the next and prev buttons
//    int sizeList = customerList.Size();
//    ui->nextCustomerButton->setEnabled(sizeList>1);
//    ui->prevCustomerButton->setEnabled(sizeList>1);

    updateInterface(NAVIGATION_MODE);
}

void CustomerAddressBook::on_nextCustomerButton_clicked()
{
    // get the next element, if out of range... re-loop...
    QString name = ui->NameEdit->text();
    Customer someCustomer;

    try
    {
        int index = customerList.FindCustomerLocation(name);

        if (!customerList.isEmpty() && customerList.Size() != 1)
         {
            // if index is the last one, start from beginning of list.
            if ((index+1) == customerList.Size())
            {


                someCustomer = customerList[0];
                ui->warningLabel->setText("You've reached the end of the list, re-starting from the beginning!");
            }
            else
            {
                // get next customer!

                someCustomer = customerList[++index];
                // LOL. not: *(customerList)[++index];



                ui->warningLabel->setText("");

            }
//            // update the fields with next customer!
//            ui->NameEdit->setText(someCustomer->getUserName());
//            ui->EmailEdit->setText(someCustomer->getEmail());
//            ui->AccountIdEdit->setText(QString::number(someCustomer->getAccountNum()));
//            ui->PasswordEdit->setText(someCustomer->getPassword());

              SetCurrentDisplay(&someCustomer);

        }
        else
        {
            qDebug() << "11";
//            ui->nextCustomerButton->setEnabled(false);
//            ui->prevCustomerButton->setEnabled(false);
        }
    }
    catch(...)
    {
        qDebug() << "12";
//        ui->nextCustomerButton->setEnabled(false);
//        ui->prevCustomerButton->setEnabled(false);
    }
}

void CustomerAddressBook::on_prevCustomerButton_clicked()
{
    // get the next element, if out of range... re-loop...

    QString name = ui->NameEdit->text();
    Customer someCustomer;
    int index = customerList.FindCustomerLocation(name);


    if (!customerList.isEmpty() && customerList.Size() != 1)
    {
        // if index is the first one, start from end of list.
        if (index == 0)
        {

            someCustomer = customerList[customerList.Size() - 1];
            ui->warningLabel->setText("You've reached the beginning of the list, re-starting from the end!");
        }
        else
        {
            // get next customer!
            someCustomer = customerList[--index];
            ui->warningLabel->setText("");
        }

        // update the fields with next customer!
        SetCurrentDisplay(&someCustomer);

    }
    else
    {
        ui->nextCustomerButton->setEnabled(false);
        ui->prevCustomerButton->setEnabled(false);
    }
}

void CustomerAddressBook::on_editButton_clicked()
{
    // store old information into variables
    // (in case they cancel edit)
    oldName = ui->NameEdit->text();
    oldEmail= ui->EmailEdit->text();
    oldId = ui->AccountIdEdit->text();
    oldPassword = ui->PasswordEdit->text();
    oldIsActivated = ui->ActivatedCustomer->isChecked();

    updateInterface(EDITING_MODE);

//    customerList.SortList(customerList.GetHead());



}

void CustomerAddressBook::on_removeButton_clicked()
{
    QString name = ui->NameEdit->text();
    QString email = ui->EmailEdit->text();
    QString idString = ui->AccountIdEdit->text();
    QString pass = ui->PasswordEdit->text();
    bool  activationStatus = false;
    if(ui->ActivatedCustomer->isChecked())
    {
        activationStatus = true;
    }

    Customer customer (name, email, idString.toLong(), pass);
    customer.setAccountAccess(activationStatus);

    if (customerList.isExist(customer))
    {
        if (customer.getAccess())
        {
            QMessageBox::information(this, "Remove Insuccessful", "Sorry, you can only delete deactivated customers.\n If you wish to delete this customer, please deactivate it first. ");
        }
        else
        {
            int button = QMessageBox::question(this,
            tr("Confirm Remove"),
            tr("Are you sure you want to remove \"%1\"?").arg(name),
            QMessageBox::Yes | QMessageBox::No);

            if (button == QMessageBox::Yes)
            {

                on_prevCustomerButton_clicked();

                customerList.RemoveCustomer(customer);


                QMessageBox::information(this, tr("Remove Successful"),
                                 tr("\"%1\" has been removed from your address book.").arg(name));

                emit customerListChanged(&customerList);

            }
        }
    }

    updateInterface(NAVIGATION_MODE);
}

void CustomerAddressBook::on_searchButton_clicked()
{
    QString name;

    // could do the same with Dialog box...
    Find *searchName = new Find();
    Customer *someCustomer;
    searchName->setModal(true);
    searchName->exec();

    name = searchName->return_searched_name();

    try
    {
        customerList.FindCustomer(name);

        QMessageBox::information(this, tr("Success!"),
                         tr("\"%1\" was found!").arg(name));

        someCustomer = customerList.ReturnCustomerPtr(name);

        SetCurrentDisplay(someCustomer);

        updateInterface(NAVIGATION_MODE);
    }
    catch (...)
    {

        if (name != "")
        {
            QMessageBox::information(this, tr("Sorry"),
                             tr("\"%1\" was not found").arg(name));
        }


    }

}

void CustomerAddressBook::on_ActivatedCustomer_clicked()
{
    QString name = ui->NameEdit->text();

    Customer *custPtr = customerList.ReturnCustomerPtr(name);

    custPtr->setAccountAccess(true);

    custPtr = NULL;

}


// XTRA DOCUMENTATION!!!!!!!



    /*              ^                        ^                      ^           ^
 should be child widget of admin.        |                  || this      slot in parent class and this connect(  ) should be in
              should be in header of both parent and child  ||              constructor of admin window
              I haven't see

                class. eg: public signal:
                                emit listChanged();  <--- I am not sure if I have seen any signals so far with pass parameters.

    Consider:
        in parent class of admin window having a method that receives the object
        void AdminWindow::updateCustomerList( customer )
                    {
                        updateList(); \/ \/ \/ \/ consider having admin window modify the list and this window only collect data
                                                    then returns the object to the admin class.
                    }

 */

//         connect(this, SIGNAL(customerListChanged(CustomerList*)), parent, SLOT()



//void CustomerAddressBook::on_ActivatedCustomer_clicked()
//{
//    QString name = ui->NameEdit->text();

//    Customer *custPtr = customerList.ReturnCustomerPtr(name);

//    custPtr->SetActivationStatus(true);
//}

//void CustomerAddressBook::on_DeactivatedCustomer_clicked()
//{

//}
