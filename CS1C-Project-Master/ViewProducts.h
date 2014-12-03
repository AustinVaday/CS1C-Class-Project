#ifndef VIEWPRODUCTS_H
#define VIEWPRODUCTS_H

#include <QWidget>
#include "ProductClass.h"
#include "ProductListClass.h"
#include "ImageViewer.h"
#include "maintplan.h"

namespace Ui {
class ViewProducts;
}

class ViewProducts : public QWidget
{
    Q_OBJECT

public:
    explicit ViewProducts(QWidget *parent = 0);



    ~ViewProducts();


private slots:


    void on_MaintPlan_clicked();

private:
    Ui::ViewProducts *ui;
    ImageViewer* image1;

};

#endif // VIEWPRODUCTS_H
