#include "customerclass.h"

Customer::Customer()
{
}


Customer::Customer(QString userName,
         QString email,
         long 	accountNum,
         QString password)
{
    User::setUserName(userName);
    User::setEmail(email);
    User::setAccountNum(accountNum);
    User::setPassword(password);
//    activate = false;

}

//Customer::Customer()
//{
//
//}
