#include "LoginWindow.h"
#include "ui_LoginWindow.h"
#include <QString>
#include <QLabel>
#include <QLineEdit>

LoginWindow::LoginWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::LoginWindow)
{

    ui->setupUi(this);

}

LoginWindow::~LoginWindow()
{
    delete ui;
}

/********************************************************
 * Submit button Clicked.
 * -------------------------------------------------------
 *
 *********************************************************/
void LoginWindow::on_submitButton_accepted()
{

    if(   ui->inputName->text() == "admin"
       && ui->inputPassword->text() == "1234")
    {

        emit adminChanged(true);
    }
    else if (  ui->inputName->text() == "customer"
            && ui->inputPassword->text() == "1234")
    {
        emit customerChanged(true);
    }

}

/********************************************************
 * passwordChangedSlot
 * -------------------------------------------------------
 *
 *********************************************************/
 void LoginWindow::textChangedSlot(const QString &newString)
 {

 }


/********************************************************
 * Submit button Clicked.
 * -------------------------------------------------------
 *
 *********************************************************/


/********************************************************
 * Submit button Clicked.
 * -------------------------------------------------------
 *
 *********************************************************/


/********************************************************
 * Submit button Clicked.
 * -------------------------------------------------------
 *
 *********************************************************/


/********************************************************
 * Submit button Clicked.
 * -------------------------------------------------------
 *
 *********************************************************/

