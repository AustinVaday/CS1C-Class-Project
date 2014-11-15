#ifndef NEWACTIVATEDLIST_H
#define NEWACTIVATEDLIST_H

#include <QDialog>

namespace Ui {
class NewActivatedList;
}

class NewActivatedList : public QDialog
{
    Q_OBJECT

public:
    explicit NewActivatedList(QWidget *parent = 0);
    ~NewActivatedList();

private:
    Ui::NewActivatedList *ui;
};

#endif // NEWACTIVATEDLIST_H
