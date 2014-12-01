#ifndef NEWACTIVATEDLIST_H
#define NEWACTIVATEDLIST_H

//#include <QDialog>
#include <QListWidgetItem>
// #include <QObject>
#include "customeraddressbook.h"
#include "customerlistclass.h"

namespace Ui {
class NewActivatedList;
}

class NewActivatedList : public QDialog
{
    Q_OBJECT

public:
    explicit NewActivatedList(QWidget *parent = 0);
    NewActivatedList(QWidget *parent, CustomerList &list);

    ~NewActivatedList();
<<<<<<< HEAD
<<<<<<< HEAD
    void DisplayTheList(CustomerList &list);
=======
    void DisplayTheList(const CustomerList& list);
>>>>>>> master
=======
    void DisplayTheList(const CustomerList& list);
>>>>>>> 7957c7d46b1f8d9bc0bd846639c2c42a42baa98f

signals:

    void customerListChanged(CustomerList* list);

public slots:
    void on_listItem_clicked(QListWidgetItem* item);
    void updateCustomerList(CustomerList *list);


private slots:
    void on_addCustomer_clicked();

private:
    Ui::NewActivatedList *ui;
    CustomerList customerList;
    CustomerAddressBook *custAddBook;
};

#endif // NEWACTIVATEDLIST_H
