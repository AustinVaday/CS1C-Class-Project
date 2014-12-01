#include "MainProgramWindow.h"


MainProgramWindow::MainProgramWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainProgramWindow)
{

    ui->setupUi(this);

    // Debug construct
qDebug() << "Reading List!";

    //Create the customer list...
    ReadCustomerFile(customerList, ":/ActivatedListFile.txt");

// Debug construct
qDebug() << "Deconstructed!";


    // TEMPORARY DISPLAY!!
    ui->tempDisplay->setText(customerList.OutputList());


    // Hard code of admin login
    Admin testAdmin("","admin1234@gmail.com", 1234, "");

// Debuggin
qDebug() << "Admin window: Output List, Line 22";
qDebug() << customerList.OutputList();

    // Initialize
    hWindow = new HelpWindow;
    aWindow = new AdminWindow(this, customerList);
    bWindow = new BrochureWindow;

    // ***DEBUG** List is read.
qDebug() << customerList.OutputList() << "Main Program Window: "
" customerList.OutputList - Line 27";

    connect(aWindow, SIGNAL(clicked()), this, SLOT(on_pushButton_Help_clicked()));

    connect(bWindow, SIGNAL(clicked()), this, SLOT(on_pushButton_Help_clicked()));


    // Shows the main program buttons when first logging in

}

MainProgramWindow::~MainProgramWindow()
{
       customerList.ClearList();
qDebug() << "MainProgramWindow -- Destructor Test #1";
    delete aWindow;

qDebug() << "MainProgramWindow -- Destructor Test #2";

    delete bWindow;

qDebug() << "MainProgramWindow -- Destructor Test #3";

    delete hWindow;
qDebug() << "MainProgramWindow -- Destructor Test #4";

    delete ui;
qDebug() << "MainProgramWindow -- Destructor Test #5";


}

void MainProgramWindow::on_pushButton_Login_clicked()
{
    Admin testAdmin("admin","admin1234@gmail.com", 1234, "password");

    bool       validInput = false;
    int        customerLocation;
    QString    tempName;
    QString    tempPassword;
    Login      loginWindow;
    ErrorLogin errorWindow;


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
        try
        {
            customerLocation =  customerList.FindCustomerLocation(tempName);

        }
        catch(...)
        {
            QMessageBox::information(this, tr("Not Found"),
                       tr("Enter it again."));
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


//    qDebug() << "TESTING" << tempName << tempPassword;
//        loginWindow.exec();

//    loginWindow.close();



}

void MainProgramWindow::Launcher()
{
    if(adminLogin)
    {
        hWindow->editText();
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
    customerList = *list;

    // TEMPORARY DISPLAY!!
    ui->tempDisplay->clear();
    ui->tempDisplay->setText(customerList.OutputList());



    qDebug() << "List has finally reached the MainProgramWindow!";
}
