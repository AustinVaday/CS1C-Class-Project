#include "MainProgramWindow.h"


MainProgramWindow::MainProgramWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainProgramWindow)
{
    lst = new ProductList;

    // Initialize
    hWindow = new HelpWindow;
    aWindow = new AdminWindow;
    bWindow = new BrochureWindow;

    // Hard Code product list ATM
    Product Robo1("KillerKat","Super awesome megafreakazoid bomb "
                   "diffusor", 15000.00, 2344, 112214);

    Product Robo2("Edward the Monstorous",
                  "If there was a robot dog to dismantle a bomb, this"
                  "would be it!", 20000.00, 1449, 111414);

    Product Robo3("R.Bot Jr.", "Comes in all sizes! Kids of all ages!",
                  550.00, 9414, 122414);


    lst->Enqueue(Robo1);

    lst->Enqueue(Robo2);

    lst->Enqueue(Robo3);

    connect(aWindow, SIGNAL(clicked()), this, SLOT(on_pushButton_Help_clicked()));

    connect(bWindow, SIGNAL(clicked()), this, SLOT(on_pushButton_Help_clicked()));


    ui->setupUi(this);



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
     Admin testAdmin("admin","admin1234@gmail.com", 1234, "password");

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
