#include "testimonial.h"
#include "ui_testimonial.h"
#include <QIcon>

Testimonial::Testimonial(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Testimonial)
{
    ui->setupUi(this);
    testimonial = new QString;

    ui->custTest->setAcceptRichText(true);
    ui->custTest->setText(*testimonial);
    ui->custTest->setReadOnly(true);

    ui->submitForm->setAcceptRichText(true);
    ui->submitForm->setReadOnly(false);
}


Testimonial::~Testimonial()
{
    emit returnString(*testimonial);
    delete ui;
    delete testimonial;
}

void Testimonial::on_write_clicked()
{
    QString name;

    *testimonial += '\n' + ui->submitForm->toPlainText();
    name = ui->nameLine->text();
    ui->nameLine->clear();
    ui->custTest->clear();
    ui->submitForm->clear();
    ui->custTest->setReadOnly(false);
    *testimonial += "\n- " + name;
    ui->custTest->setText(*testimonial);
    ui->custTest->setReadOnly(true);
}

void Testimonial::setTestimonial(QString input)
{
    if(testimonial != 0)
    {
        *testimonial = input;
    }
}

QString Testimonial::getTestimonial() const
{
    QString returnStr;
    returnStr.clear();
    if(testimonial != 0)
    {
        returnStr = *testimonial;
    }

    return returnStr;
}
