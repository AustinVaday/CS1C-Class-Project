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
    void DisplayTheList(CustomerList &list);

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
