#ifndef NEWACTIVATEDLIST_H
#define NEWACTIVATEDLIST_H

#include <QDialog>
#include <QListWidgetItem>
 #include <QObject>
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
    ~NewActivatedList();

public slots:
    void on_listItem_clicked(QListWidgetItem* item);


private:
    Ui::NewActivatedList *ui;
    CustomerList customerList;
    CustomerAddressBook *custAddBook;
};

#endif // NEWACTIVATEDLIST_H
