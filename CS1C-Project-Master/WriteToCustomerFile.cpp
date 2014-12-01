#include "Header.h"

void WriteToCustomerFile(CustomerList& list, QString fileName)
{

    QFile file(fileName);
    QTextStream out(&file);
    QString line;
    long numberLine;
    Customer *customer;
    int index = 0;
//    qDebug() << file.exists();

    qDebug () << "**WriteToCustomerFile** Line 16";
    //open the file
    file.open(QIODevice::WriteOnly|QIODevice::Text);
    qDebug () << "**WriteToCustomerFile** Line 19: " << file.isOpen();

    for  (int index = 0;  index < list.Size(); index++)
    {
        out << list[index].getUserName() << endl;
        out << list[index].getEmail() << endl;
        out << list[index].getAccountNum() << endl;
        out << list[index].getPassword() << endl;

        out << endl;
        qDebug () << "**WriteToCustomerFile** Line 29 ";

    }


    file.close();
}
