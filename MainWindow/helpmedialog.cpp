#include "helpmedialog.h"
#include "ui_helpmedialog.h"

HelpMeDialog::HelpMeDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::HelpMeDialog)
{
    ui->setupUi(this);
}

HelpMeDialog::~HelpMeDialog()
{
    delete ui;
}
