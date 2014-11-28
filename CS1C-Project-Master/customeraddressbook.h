#ifndef CUSTOMERADDRESSBOOK_H
#define CUSTOMERADDRESSBOOK_H

#include <QWidget>
#include "customerlistclass.h"
#include "customerclass.h"

enum Mode
{
    NAVIGATION_MODE,
    ADDING_MODE,
    EDITING_MODE
};

namespace Ui {
class CustomerAddressBook;
}

class CustomerAddressBook : public QWidget
{
    Q_OBJECT

public:
    explicit CustomerAddressBook(QWidget *parent = 0);
    ~CustomerAddressBook();
    void updateInterface (Mode currentMode);

private slots:
    void on_addButton_clicked();

    void on_submitButton_clicked();

    void on_cancelButton_clicked();

    void on_nextCustomerButton_clicked();

    void on_prevCustomerButton_clicked();

    void on_editButton_clicked();

    void on_removeButton_clicked();

private:
    Ui::CustomerAddressBook *ui;
    QString oldName;
    QString oldEmail;
    QString oldId;
    QString oldPassword;
    Mode currentMode;


    // TEMP *for testing only*
    CustomerList customerList;

};

#endif // CUSTOMERADDRESSBOOK_H
