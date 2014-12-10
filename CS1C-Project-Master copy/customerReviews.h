#ifndef CUSTOMERREVIEWS_H
#define CUSTOMERREVIEWS_H

#include <QWidget>
#include <QTextBrowser>
namespace Ui {
class customerReviews;
}

class customerReviews : public QWidget
{
    Q_OBJECT

public:
	explicit customerReviews(QWidget *parent = 0);
	~customerReviews();

	void setCustomerReviews(QString input);
	QString getCustomerReviews() const;
    void clearRadioButtons();

signals:
    void returnString(QString returnString);

private slots:
    void on_write_clicked();

    void on_veryInterested_clicked();

    void on_somewhatInterested_clicked();

    void on_notInterested_clicked();

    void on_neverCallAgain_clicked();


private:
	Ui::customerReviews *ui;
	QString* reviews;

};

#endif // CUSTOMERREVIEWS_H
