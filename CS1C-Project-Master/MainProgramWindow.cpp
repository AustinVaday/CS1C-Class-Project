#include "MainProgramWindow.h"


MainProgramWindow::MainProgramWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainProgramWindow)
{

    ui->setupUi(this);

    //Create the customer list...
    ReadCustomerFile(customerList, ":/ActivatedListFile.txt");

    // TEMPORARY DISPLAY!!
    ui->tempDisplay->setText(customerList.OutputList());


    // Hard code of admin login
    Admin testAdmin("","admin1234@gmail.com", 1234, "");

    // Initialize
    hWindow = new HelpWindow;
    aWindow = new AdminWindow(this, customerList);
    bWindow = new BrochureWindow;

    connect(aWindow, SIGNAL(clicked()), this, SLOT(on_pushButton_Help_clicked()));

    connect(bWindow, SIGNAL(clicked()), this, SLOT(on_pushButton_Help_clicked()));


    // Shows the main program buttons when first logging in

}

MainProgramWindow::~MainProgramWindow()
{

    if(adminLogin)
    {
        delete aWindow;
    }
    if(customerLogin)
    {
        delete bWindow;
    }

    delete hWindow;

    delete ui;

}

void MainProgramWindow::on_pushButton_Login_clicked()
{
     Admin testAdmin("","admin1234@gmail.com", 1234, "");

    bool validInput = false;
    QString tempName;
    QString tempPassword;
    Login loginWindow;
    ErrorLogin errorWindow;


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

    if(tempName == "Customer" && tempPassword == "1234")
    {
        validInput = true;
        SetCustomerLogin(true);
    }

        if(!loginWindow.on_buttonBox_loginPress_rejected())
        {
            errorWindow.setModal(true);
            errorWindow.exec();
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

void MainProgramWindow::showHelpWindow()
{
    hWindow->show();
}


void MainProgramWindow::on_actionHelp_triggered()
{
    hWindow->show();
}

void MainProgramWindow::updateCustomerList(CustomerList *list)
{
    // TEMPORARY DISPLAY!!
    ui->tempDisplay->clear();
    ui->tempDisplay->setText(customerList.OutputList());


    customerList = *list;

    qDebug() << "List has finally reached the MainProgramWindow!";
}
