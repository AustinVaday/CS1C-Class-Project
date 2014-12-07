#include "testimonial.h"
#include "ui_testimonial.h"

Testimonial::Testimonial(QWidget *parent, QString &inputStr) :
    QWidget(parent),
    ui(new Ui::Testimonial)
{
    ui->setupUi(this);
    testimonial = new QString;

    *testimonial = inputStr;

    ui->custTest->setAcceptRichText(true);
    ui->custTest->setText(*testimonial);
    ui->custTest->setReadOnly(true);

    ui->submitForm->setAcceptRichText(true);
    ui->submitForm->setReadOnly(false);
}


Testimonial::~Testimonial()
{
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
