#include "signupwindow.h"
#include "ui_signupwindow.h"
#include <QDebug>
#include <QMessageBox>
#include "customerlistclass.h"
SignUpWindow::SignUpWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SignUpWindow)
{
    ui->setupUi(this);

    ui->NameEdit->setFocus(Qt::OtherFocusReason);


}

SignUpWindow::~SignUpWindow()
{
    delete ui;
}

void SignUpWindow::on_buttonBox_accepted(Customer& customer, bool & properFields)
{

    QString name = ui->NameEdit->text();
    QString email = ui->EmailEdit->text();
    QString idString = ui->AccountIdEdit->text();
    QString pass = ui->PasswordEdit->text();

    properFields = false;
        if (name.isEmpty())
        {

            QMessageBox::information(this, tr("Empty Field"),
                       tr("Please enter in a name."));

        }
        else if (email.isEmpty())
        {
            QMessageBox::information(this, tr("Empty Field"),
                       tr("Please enter in an email address."));

        }
        else if (idString.isEmpty())
        {
            QMessageBox::information(this, tr("Empty Field"),
                       tr("Please enter in an ID number."));
        }
        else if (pass.isEmpty())
        {
            QMessageBox::information(this, tr("Empty Field"),
                       tr("Please enter in a password."));
        }
        else
         {

            customer.setAccountAccess(false);
            customer.setAccountNum(idString.toLong());
            customer.setEmail(email);
            customer.setPassword(pass);
            customer.setUserName(name);

            properFields = true;

        }
}
