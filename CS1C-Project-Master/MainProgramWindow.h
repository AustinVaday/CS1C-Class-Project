#ifndef MAINPROGRAMWINDOW_H
#define MAINPROGRAMWINDOW_H

#include <QMainWindow>
#include "adminclass.h"
#include "login.h"
#include "loginhelp.h"
#include "LoginWindow.h"
#include "errorlogin.h"
#include "AdminWindow.h"
#include "ui_mainprogramwindow.h"
#include "WelcomeWidget.h"
#include "newactivatedlist.h"
#include "customerclass.h"
#include "customerlistclass.h"
#include "ui_AdminWindow.h"
#include "Header.h"
#include "helpwindow.h"
#include "BrochureWindow.h"
#include "ProductListClass.h"
#include "ProductClass.h"
#include "ViewProducts.h"
//#include "customerlistclass.h"
#include "ExceptionHandlers.h"
#include "sellpoint.h"
#include "guarantee.h"
#include "guestwindow.h"
#include "maintplan.h"
#include "environments.h"

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
     bool GetAdminLoginState        ();
     bool GetCustomerLoginState  ();
     bool GetGuestLoginState          ();
     bool GetCreateAccountState   ();

     ProductList* getProductList() const;

     QString GetUsername();
     QString GetPassword();


    //  Accessors
     void SetUsername(QString newUsername);
     // Sets user name

     void SetPassword(QString newPassword);
     // Sets users password

void Launcher();

    ~MainProgramWindow();

signals:
    void clicked();

public slots:

    void on_pushButton_Help_clicked();

    void on_exitProgram_clicked();

    void showHelpWindow();
    // displays help window

    void updateCustomerList(CustomerList *list);



private slots:

    void on_pushButton_Login_clicked();

    void on_actionHelp_triggered();

    void on_pushButton_Guest_clicked();

private:
    Ui::MainProgramWindow *ui;

    // PROGRAM SECTION WINDOWS
    AdminWindow *aWindow;
    // Pointer towards the admin window

    // Customer / Brochure Data Memeber Placeholder

    HelpWindow  *hWindow;

    GuestWindow *gWindow;
    // Pointer of type HelpWindow
    //  Used to create a help window for the user

    BrochureWindow*     bWindow;
    ProductList*        lst;
    CustomerList        customerList;

    // SECTION LOGIN BOOLEANS
    //These boolean variables are used to determine what
    //  type of window to launch

    bool adminLogin         = 0;
    bool customerLogin  = 0;
    bool guestLogin      = 0;
    bool createAccount   = 0;

    QString userName;
    QString password;
};

#endif // MAINPROGRAMWINDOW_H
