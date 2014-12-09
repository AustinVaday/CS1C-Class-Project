#ifndef TESTIMONIAL_H
#define TESTIMONIAL_H

#include <QWidget>
#include <QTextBrowser>
namespace Ui {
class Testimonial;
}

class Testimonial : public QWidget
{
    Q_OBJECT

public:
    explicit Testimonial(QWidget *parent = 0);
    ~Testimonial();

    void setTestimonial(QString input);
    QString getTestimonial() const;

signals:
    void returnString(QString returnString);

private slots:
    void on_write_clicked();

private:
    Ui::Testimonial *ui;
    QString* testimonial;

};

#endif // TESTIMONIAL_H
