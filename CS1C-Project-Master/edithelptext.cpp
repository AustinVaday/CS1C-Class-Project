#include "edithelptext.h"
#include "ui_edithelptext.h"

EditHelpText::EditHelpText(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::EditHelpText)
{
    ui->setupUi(this);
}

EditHelpText::~EditHelpText()
{
    delete ui;
}
