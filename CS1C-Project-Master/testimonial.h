#ifndef TESTIMONIAL_H
#define TESTIMONIAL_H

#include <QWidget>

namespace Ui {
class Testimonial;
}

class Testimonial : public QWidget
{
    Q_OBJECT

public:
    explicit Testimonial(QWidget *parent = 0);
    ~Testimonial();

private:
    Ui::Testimonial *ui;
};

#endif // TESTIMONIAL_H
