#ifndef MAINPROGRAMWINDOW_H
#define MAINPROGRAMWINDOW_H

#include <QMainWindow>
#include <adminclass.h>

#include <errorlogin.h>
#include "AdminWindow.h"
#include "Login.h"
#include "ui_mainprogramwindow.h"
#include "WelcomeWidget.h"
#include "newactivatedlist.h"
#include "customerclass.h"
#include "customerlistclass.h"
#include "ui_AdminWindow.h"
#include "Header.h"
#include "AdminWindow.h"


//
#include <QDebug>

namespace Ui {
class MainProgramWindow;
}

class MainProgramWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainProgramWindow(QWidget *parent = 0);

    /***************************************************************************
     * These set methods are used to set the state of the private boolean
     * variables. The boolean variables are our new approach to launching a
     * specific widgets/windows. For example, if adminLogin is true, launch an
     * AdminWindow. If customerLogin is true, launch a CustomerWindow and so on.
     * This approach will allow the Login window practice encapsulation.
     ***************************************************************************/
    void SetAdminLogin     (bool state);
    void SetCustomerLogin  (bool state);
    void SetGuestLogin     (bool state);
    void SetCreateAccount  (bool state);

    /***************************************************************************
     * These get methods will be used to detemine what type of window to launch
     *
     * (read documentation above)
     ***************************************************************************/
     bool GetAdminLoginState     ();
     bool GetCustomerLoginState  ();
     bool GetGuestLoginState     ();
     bool GetCreateAccountState();


     QString GetUsername();
     QString GetPassword();

     void SetUsername(QString newUsername);
     void SetPassword(QString newPassword);


void Launcher();


    ~MainProgramWindow();

signals:

private slots:

    void on_pushButton_Login_clicked();
    void on_exitProgram_clicked();

private:
    Ui::MainProgramWindow *ui;

    // PROGRAM SECTION WINDOWS
    AdminWindow *aWindow;

    // SECTION LOGIN BOOLEANS
    //These boolean variables are used to determine what type of window to
    // launch
    bool adminLogin      = false;
    bool customerLogin   = false ;
    bool guestLogin      = false;
    bool createAccount = false;

    QString userName;
    QString password;
};

#endif // MAINPROGRAMWINDOW_H
