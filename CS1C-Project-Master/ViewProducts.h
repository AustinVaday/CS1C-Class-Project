#ifndef VIEWPRODUCTS_H
#define VIEWPRODUCTS_H

#include <QWidget>
#include "ProductClass.h"
#include "ProductListClass.h"

namespace Ui {
class ViewProducts;
}

class ViewProducts : public QWidget
{
    Q_OBJECT

public:
    explicit ViewProducts(QWidget *parent = 0, ProductList*& lst = 0);
    ~ViewProducts();

signals:


private:
    Ui::ViewProducts *ui;
};

#endif // VIEWPRODUCTS_H
