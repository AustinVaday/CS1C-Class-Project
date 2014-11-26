#include "Header.h"
#include <QFile>
#include <QTextStream>
#include <QLabel>
#include <QDebug>
void ReadCustomerFile(CustomerList& list, QString fileName)
{
    QFile file(fileName);

    QTextStream in(&file);
    QString line;
    long numberLine;
    Customer *customer;

//    qDebug() << "Hi2";
    qDebug() << file.exists();

    //open the file
    file.open(QIODevice::ReadOnly | QIODevice::Text);

//    qDebug() << "Hi3";

    while (!in.atEnd() )
    {
        customer = new Customer;

        line = in.readLine();
        customer->setUserName(line);

        line = in.readLine();
        customer->setEmail(line);

        line = in.readLine();
        numberLine = line.toLong();
        customer->setAccountNum(numberLine);

        line = in.readLine();
        customer->setPassword(line);

        line = in.readLine();

        list.Enqueue(*customer);

    }


    file.close();


}
