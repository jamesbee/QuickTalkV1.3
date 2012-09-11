#ifndef CHATVIEWFORM_H
#define CHATVIEWFORM_H

#include <QWidget>
#include <QMainWindow>
#include <QTextEdit>
#include <QPushButton>
#include <QSettings>

namespace Ui {
class ChatViewForm;
}

class ChatViewForm : public QWidget
{
    Q_OBJECT
    
public:
    explicit ChatViewForm(QMainWindow *parent = 0);
    ~ChatViewForm();

    QTextEdit* MsgEditor;
    QPushButton *SendButton;
    QPushButton *CloseButton;

signals:

public slots:
    void appendHoldMsg(const QString& text);
    
private:
    Ui::ChatViewForm *ui;

    QSettings appSettings;
};

#endif // CHATVIEWFORM_H
