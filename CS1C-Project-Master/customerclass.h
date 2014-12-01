#ifndef CUSTOMERCLASS_H
#define CUSTOMERCLASS_H
#include "userclass.h"
#include <QString>

class Customer : public User
{
    public:
        Customer();
        // default constructor

        Customer(QString userName,
                 QString email,
                 long 	accountNum,
                 QString password);
        // Nondefault constructor

        bool operator >(const Customer& otherCustomer) const;
        bool operator <(const Customer& otherCustomer) const;


        // Accessors
        // Product viewPricesAndPackages(Product currentProductLine) const;
        // Returns the
        // Might want to reconsider this method with what annie is doing
        //	if the interface class

        // Product orderRobots(Product currentProductLine);
        // Prompts user to input which product the want, it will be process
        //	and stored into the the user's purchase history and be recorded
        //	into the transaction history of the software for the
        //	administrator to utilize

//        bool requestBrochure() const;


    private:
        //none

};


#endif // CUSTOMERCLASS_H
