#ifndef PRODUCTCLASS_H
#define PRODUCTCLASS_H

#include <QWidget>

namespace Ui {
class ProductClass;
}

class ProductClass : public QWidget
{
    Q_OBJECT

public:
    explicit ProductClass(QWidget *parent = 0);
    ~ProductClass();

private:
    Ui::ProductClass *ui;
};

#endif // PRODUCTCLASS_H
