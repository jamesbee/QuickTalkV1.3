#include "configehostdialog.h"
#include "ui_configehostdialog.h"

ConfigeHostDialog::ConfigeHostDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ConfigeHostDialog)
{
    ui->setupUi(this);
}

ConfigeHostDialog::~ConfigeHostDialog()
{
    delete ui;
}
