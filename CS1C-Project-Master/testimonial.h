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
    Testimonial(QWidget *parent, QString &inputStr);
    ~Testimonial();

private slots:
    void on_write_clicked();



private:
    Ui::Testimonial *ui;
    QString* testimonial;

};

#endif // TESTIMONIAL_H
