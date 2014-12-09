#include "login.h"
#include "ui_login.h"

Login::Login(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Login)
{
    ui->setupUi(this);

    ui->lineEdit_username->setFocus();
    
    
//    try
//    {
//    customer. find(asdasd)
//    }
//    catch
//    {
//      }// returns the text in password line edit
//    while(index < customerList.GetSize() && found)
//    {
//    if (ui->lineEdit_password->text() == mycustomerList[index].getpassword
//            && ui->lineEdit_username->text() == mucustomerlist[index].getusername
//            && my customer.access == true)
//    {
        
//        found = true;
//        //got that part. yeah you got to find the customer first
//        //woah woah woah hold on. First i would have to check if the customer exists.
           
//    }
//    else
//     {
//        index++;
//    }
//    }
    
//    if(found)
//    {
//        customerList
//    }

    
//    so i can check this string against a space? or another string?
    
    ui->lineEdit_username->text();
}

Login::~Login()
{
    delete ui;
}



void Login::on_buttonBox_loginPress_accepted(QString& user, QString& password)
{
    user     = ui->lineEdit_username->text();

    qDebug() << "first Test" << user;

    password     = ui->lineEdit_password->text();
}

//void Login::on_pushButton_login_clicked(QString& user, QString& password)
//{
//        user     = ui->lineEdit_username->text();
//        user     = ui->lineEdit_username->text();

//}

bool Login::on_buttonBox_loginPress_rejected()
{
    return true;
}
