#ifndef CONTACTUS_H
#define CONTACTUS_H

#include <QDialog>

namespace Ui {
class ContactUs;
}

class ContactUs : public QDialog
{
    Q_OBJECT

public:
    explicit ContactUs(QWidget *parent = 0);
    ~ContactUs();

private slots:
    void on_sendButton_clicked();

private:
    Ui::ContactUs *ui;
};

#endif // CONTACTUS_H
