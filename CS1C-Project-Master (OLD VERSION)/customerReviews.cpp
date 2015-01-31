#include "customerReviews.h"
#include "ui_customerReviews.h"
#include <QIcon>

customerReviews::customerReviews(QWidget *parent) :
    QWidget(parent),
	ui(new Ui::customerReviews)
{
	/* AUSTIN VADAY EDITED THIS WHOLE CLASS */

    ui->setupUi(this);
	reviews = new QString;

    ui->custTest->setAcceptRichText(true);
	ui->custTest->setText(*reviews);
    ui->custTest->setReadOnly(true);

    ui->submitForm->setAcceptRichText(true);
    ui->submitForm->setReadOnly(false);
}


customerReviews::~customerReviews()
{
	emit returnString(*reviews);
    delete ui;
	delete reviews;
}

void customerReviews::on_write_clicked()
{
    QString name;
    QString interestRating;

    /* CHANGED THIS CODE */
    if (!ui->submitForm->toPlainText().isEmpty())
    {
		*reviews += '\n' + ui->submitForm->toPlainText();
        name = ui->nameLine->text();

        if (name.isEmpty())
        {
            name = "Anonymous";
        }
        ui->nameLine->clear();
        ui->custTest->clear();
        ui->submitForm->clear();
        this->clearRadioButtons(); /*ADDED BY AUSTIN */

        /*ADDED BY AUSTIN */
        if (ui->veryInterested->isChecked())
        {
            interestRating = "Very Interested";
        }
        else if (ui->somewhatInterested->isChecked())
        {
            interestRating = "Somewhat Interested";
        }
        else if (ui->notInterested->isChecked())
        {
            interestRating = "Not Interested";

        }
        else if (ui->neverCallAgain->isChecked())
        {
            interestRating = "Never Call Again";
        }
        // else if nothing checked
        else
        {
            interestRating = "None Selected";
        }

        ui->custTest->setReadOnly(false);
		*reviews += "\nInterest rating: " + interestRating;


		*reviews += "\n- " + name;
		ui->custTest->setText(*reviews);
        ui->custTest->setReadOnly(true);
    }

}

void customerReviews::setCustomerReviews(QString input)
{
	if(reviews != 0)
    {
		*reviews = input;
    }
}

QString customerReviews::getCustomerReviews() const
{
    QString returnStr;
    returnStr.clear();
	if(reviews != 0)
    {
		returnStr = *reviews;
    }

    return returnStr;
}

void customerReviews::on_veryInterested_clicked()
{
    ui->veryInterested->setChecked(true);
    ui->somewhatInterested->setChecked(false);
    ui->notInterested->setChecked(false);
    ui->neverCallAgain->setChecked(false);
}

void customerReviews::on_somewhatInterested_clicked()
{
    ui->veryInterested->setChecked(false);
    ui->somewhatInterested->setChecked(true);
    ui->notInterested->setChecked(false);
    ui->neverCallAgain->setChecked(false);
}

void customerReviews::on_notInterested_clicked()
{
    ui->veryInterested->setChecked(false);
    ui->somewhatInterested->setChecked(false);
    ui->notInterested->setChecked(true);
    ui->neverCallAgain->setChecked(false);
}

void customerReviews::on_neverCallAgain_clicked()
{
    ui->veryInterested->setChecked(false);
    ui->somewhatInterested->setChecked(false);
    ui->notInterested->setChecked(false);
    ui->neverCallAgain->setChecked(true);
}

void customerReviews::clearRadioButtons()
{
    ui->veryInterested->setChecked(false);
    ui->somewhatInterested->setChecked(false);
    ui->notInterested->setChecked(false);
    ui->neverCallAgain->setChecked(false);
}
