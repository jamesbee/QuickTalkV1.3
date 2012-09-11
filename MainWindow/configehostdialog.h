#ifndef CONFIGEHOSTDIALOG_H
#define CONFIGEHOSTDIALOG_H

#include <QDialog>

namespace Ui {
class ConfigeHostDialog;
}

class ConfigeHostDialog : public QDialog
{
    Q_OBJECT
    
public:
    explicit ConfigeHostDialog(QWidget *parent = 0);
    ~ConfigeHostDialog();
    
private:
    Ui::ConfigeHostDialog *ui;
};

#endif // CONFIGEHOSTDIALOG_H
