#ifndef CUSTOMERCLASS_H
#define CUSTOMERCLASS_H
#include "userclass.h"
#include <QString>
#include <AddressClass.h>
#include <QTextStream>

class Customer : public User
{

    public:
        Customer();
        // default constructor

        Customer(QString userName,
                 QString customerAddress,
                 QString initInterest,
                 QString key,
                 QString password,
                 QString email,
                 long    accountNum,
                 bool    activated);
        // Nondefault constructor

        bool operator >(const Customer& otherCustomer) const;
        // Overloading comparison operator greater than

        bool operator <(const Customer& otherCustomer) const;
        // Overloading comparison operator less than

        // ACCESSORS

        QString getAddress()  const;
        QString getKey()      const;
        QString getInterest() const;

        // ACCESSORS
        void setInterest(QString interest);
        void setAddress(QString newAddress);
        void setKey(QString key);

    private:
        QString address;
        QString interest;
        QString keyCustomer;

};


#endif // CUSTOMERCLASS_H
