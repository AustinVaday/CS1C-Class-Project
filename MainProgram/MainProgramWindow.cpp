#include "MainProgramWindow.h"


MainProgramWindow::MainProgramWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainProgramWindow)
{
    Admin testAdmin("admin","admin1234@gmail.com", 1234, "password");
    aWindow = new AdminWindow;

    ui->setupUi(this);


    // Shows the main program buttons when first logging in

}

MainProgramWindow::~MainProgramWindow()
{
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
    AdminWindow * newWindow;

    newWindow = new AdminWindow;

    newWindow->show();
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
