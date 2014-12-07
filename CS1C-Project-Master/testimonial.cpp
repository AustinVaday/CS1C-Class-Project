#include "testimonial.h"
#include "ui_testimonial.h"

Testimonial::Testimonial(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Testimonial)
{
    ui->setupUi(this);
}

Testimonial::~Testimonial()
{
    delete ui;
}
