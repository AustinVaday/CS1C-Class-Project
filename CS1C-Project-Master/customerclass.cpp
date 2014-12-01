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




bool Customer::operator >(const Customer& otherCustomer) const
{
    return this->getUserName() > otherCustomer.getUserName();
}
bool Customer::operator <(const Customer& otherCustomer) const
{
    return this->getUserName() < otherCustomer.getUserName();
}

//Customer::Customer()
//{
//
//}
