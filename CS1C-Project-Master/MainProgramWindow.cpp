#include "MainProgramWindow.h"

MainProgramWindow::MainProgramWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainProgramWindow),
     adminLogin(false),
     customerLogin(false),
     guestLogin(false),
     createAccount(false)
{
    // DECLARATIONS
    adminLogin    = 0;
    customerLogin = 0;
    guestLogin    = 0;
    createAccount = 0;


    ui->setupUi(this);
    // Debug construct
qDebug() << "MainProgramWindow - Reading List! - Line 19";

    if(!databaseCreated)
    {
        if(!CreateDatabase())
        {
            qWarning("Missing Data");
        }
        else
        {
            databaseCreated = true;
        }
    }

    // TEMPORARY DISPLAY!!
    ui->tempDisplay->setText(customerList.OutputList());


    // Hard code of admin login
    Admin testAdmin("","admin1234@gmail.com", 1234, "");

// Debuggin
qDebug() << "Admin window: Output List, Line 36";
qDebug() << customerList.OutputList();

    // Initialize
    hWindow = new HelpWindow;
    aWindow = new AdminWindow(this, customerList);
    bWindow = new BrochureWindow;
    gWindow = new GuestWindow;
    sWindow = new SignUpWindow;
    cWindow = new ContactUs(this);

    // ***DEBUG** List is read.
qDebug() << customerList.OutputList() << "Main Program Window: "
" customerList.OutputList - Line 27";

    connect(aWindow, SIGNAL(clicked()), this, SLOT(on_pushButton_Help_clicked()));

    connect(bWindow, SIGNAL(clicked()), this, SLOT(on_pushButton_Help_clicked()));


    // Shows the main program buttons when first logging in

}

MainProgramWindow::~MainProgramWindow()
{
        if(!robotList.isEmpty())
        {
            robotList.WriteToFile();
            robotList.ClearList();
        }

        if(!customerList.isEmpty())
        {
            customerList.WriteToFile();
            customerList.ClearList();
        }
qDebug() << "Deconstructor Write to test file.";



        delete aWindow;
        delete bWindow;
        delete hWindow;
        delete gWindow;
        delete sWindow;
        delete cWindow;
        delete ui;
}

void MainProgramWindow::on_pushButton_Login_clicked()
{


    Admin testAdmin("admin","admin1234@gmail.com", 1234, "password");

    int        customerLocation;

    bool validInput = false;


    QString    tempName;
    QString    tempPassword;
    Login      loginWindow;
    ErrorLogin errorWindow;
    Customer tempCustomer;


        customerLocation = 0;
        loginWindow.setModal(true);

        loginWindow.exec();

        loginWindow.on_buttonBox_loginPress_accepted(tempName, tempPassword);

        SetUsername(tempName);
        SetPassword(tempPassword);


        if(testAdmin.checkAdmin(tempName, tempPassword ))
        {
            validInput = true;
            SetAdminLogin(true);
        }
        else
        {
           tempCustomer =  customerList.VerifyCustomer(tempName, tempPassword);

           if(tempCustomer.getUserName() != " ")
           {
               validInput = true;
               SetCustomerLogin(true);
           }
        }


    if(!loginWindow.on_buttonBox_loginPress_rejected())
    {
        errorWindow.setModal(true);
        errorWindow.exec();
        errorWindow.show();
    }

    if(validInput)
    {
        Launcher();
    }

}

// Launches Window depending which button is clicked
void MainProgramWindow::Launcher()
{
    if(adminLogin)
    {
        aWindow->show();
    }
    else if(customerLogin)
    {
        bWindow->show();
    }

}


void MainProgramWindow::on_exitProgram_clicked()
{
    QApplication::quit();
}

//S E T ~ A N D ~ G E T ~ M E T H O D S

void MainProgramWindow::SetAdminLogin(bool state)
{
    adminLogin = state;
}

 void MainProgramWindow::SetCustomerLogin  (bool state)
 {
    customerLogin = state;
 }

  void MainProgramWindow::SetGuestLogin  (bool state)
 {
    guestLogin = state;
 }

  void MainProgramWindow::SetCreateAccount  (bool state)
 {
    createAccount = state;
 }


// G E T ~ M E T H O D S

 bool MainProgramWindow::GetAdminLoginState()
 {
    return adminLogin;
 }

 bool MainProgramWindow::GetCustomerLoginState()
 {
    return customerLogin;
 }

 bool MainProgramWindow::GetGuestLoginState()
 {
    return guestLogin;
 }

  bool MainProgramWindow::GetCreateAccountState()
 {
    return createAccount;
 }


QString MainProgramWindow::GetUsername()
{
    return userName;
}

QString MainProgramWindow::GetPassword()
{
    return password;
}



void MainProgramWindow::SetUsername(QString newUserName)
{
    userName = newUserName;
}

void MainProgramWindow::SetPassword(QString newPassword)
{
    password = newPassword;
}

void MainProgramWindow::on_pushButton_Help_clicked()
{
    showHelpWindow();
}

// Help Button Clicked
void MainProgramWindow::showHelpWindow()
{
    hWindow->show();
}

// Menu Bar Help Option
void MainProgramWindow::on_actionHelp_triggered()
{
    hWindow->show();
}

void MainProgramWindow::updateCustomerList(CustomerList *list)
{

    // if adminwindow is not open, update it's customer list.
    if (!aWindow->isVisible())
    {
//        delete aWindow; /* CRASHES THE PROGRAM FOR SOME REASON!?!?! */

        aWindow = new AdminWindow(this, customerList);
    }

    customerList = *list;

    // TEMPORARY DISPLAY!!
    ui->tempDisplay->clear();
    ui->tempDisplay->setText(customerList.OutputList());

    customerList.WriteToFile();

    qDebug() << "List has finally reached the MainProgramWindow!";
}

void MainProgramWindow::on_pushButton_Guest_clicked()
{
    gWindow->show();
}


/*******************************************************************************
 *  CreateDatabase
 * -----------------------------------------------------------------------------
 * Instantiates the default database for each customer. Database will be update
 *  when a full execution cycle occurs, e.g. run executable, modify data,
 *  terminate program and repeat.
 * --------------------------------------------------------------------------
 * Returns boolean
 ************************************************************************/
bool MainProgramWindow::CreateDatabase()
{
    QMessageBox writeFail;
    bool writeSuccess;
    writeSuccess = false;

    // Sets writeFail Window Title
    writeFail.setWindowTitle("*** > WARNING < ***");

    if(this->robotList.ReadFile())
    {
qDebug() << "CreateDatabase Product Write";
        writeSuccess = true;
    }
    else
    {
        writeFail.setText("Failed to initialize Product Database!");
        writeFail.setModal(true);
        writeFail.exec();
        writeSuccess = false;
    }

    if(this->customerList.ReadFile())
    {
        qDebug() << "CreateDatabase Customer Write";
        writeSuccess = true;
    }
    else
    {
        writeFail.setText("Failed to initialize Customer Database!");
        writeFail.setModal(true);
        writeFail.exec();
        writeSuccess = false;
    }

    return writeSuccess;
}
void MainProgramWindow::on_pushButton_RequestBrochure_clicked()
{
        Customer customer;
        bool properFields = false;
        sWindow->setModal(true);


        int submitSuccess = sWindow->exec();

        if (submitSuccess)
        {
            sWindow->on_buttonBox_accepted(customer, properFields);

            if (properFields)
            {
                 // check if the customer is not taken
                 if (!customerList.isExist(customer) && !customerList.isExistSameName(customer.getUserName()))
                 {


                     customerList.Enqueue(customer);

                     updateCustomerList(&customerList);

                     QMessageBox::information(this, tr("Registration Successful"),
                      tr("\"%1\", you will be notified shortly whether you have been accepted or rejected.").arg(customer.getUserName()));

                     // SIGNALS & SLOTS
    //                 emit customerListChanged(&customerList);

                  }
                 else if (customerList.isExistSameName(customer.getUserName()))
                 {
                     QMessageBox::information(this, tr("Registration Unsuccessful"),
                      tr("Please enter in another name, \"%1\" is already taken").arg(customer.getUserName()));
                 }
                 else
                  {

                     QMessageBox::information(this, tr("Registration Unsuccessful"),
                      tr("\"%1\" is already in your customer list.").arg(customer.getUserName()));

                  }
                }
                qDebug() << customer.OutputData();
        }


}

void MainProgramWindow::on_actionContactUS_triggered()
{
    cWindow->show();
}
