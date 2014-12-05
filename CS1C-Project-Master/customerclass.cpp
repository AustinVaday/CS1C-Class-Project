#include "customerclass.h"

Customer::Customer()
{

}

Customer::Customer(QString userName,
                   QString customerAddress,
                   QString initInterest,
                   QString key,
                   QString password,
                   QString email,
                   long    accountNum)
{
    User::setUserName(userName);
    User::setEmail(email);
    User::setAccountNum(accountNum);
    User::setPassword(password);

    address     = customerAddress;
    interest    = initInterest;
    keyCustomer = key;
}

bool Customer::operator >(const Customer& otherCustomer) const
{
    return this->getUserName() > otherCustomer.getUserName();
}

bool Customer::operator <(const Customer& otherCustomer) const
{
    return this->getUserName() < otherCustomer.getUserName();
}

QString Customer::getAddress() const
{
    return address;
}

QString Customer::getInterest() const
{
    return interest;
}

QString Customer::getKey() const
{
    return keyCustomer;
}

void Customer::setAddress(QString newAddress)
{
    address = newAddress;
}

void Customer::setInterest(QString newInterest)
{
    interest = newInterest;
}

void Customer::setKey(QString key)
{
    keyCustomer = key;
}
