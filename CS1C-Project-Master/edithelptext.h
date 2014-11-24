#ifndef EDITHELPTEXT_H
#define EDITHELPTEXT_H

#include <QWidget>

namespace Ui {
class EditHelpText;
}

class EditHelpText : public QWidget
{
    Q_OBJECT

public:
    explicit EditHelpText(QWidget *parent = 0);
	~EditHelpText();

private:
    Ui::EditHelpText *ui;
};

#endif // EDITHELPTEXT_H
