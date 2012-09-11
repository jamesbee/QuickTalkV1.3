#ifndef HELPMEDIALOG_H
#define HELPMEDIALOG_H

#include <QDialog>

namespace Ui {
class HelpMeDialog;
}

class HelpMeDialog : public QDialog
{
    Q_OBJECT
    
public:
    explicit HelpMeDialog(QWidget *parent = 0);
    ~HelpMeDialog();
    
private:
    Ui::HelpMeDialog *ui;
};

#endif // HELPMEDIALOG_H
