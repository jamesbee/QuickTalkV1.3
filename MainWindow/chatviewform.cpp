#include "chatviewform.h"
#include "ui_chatviewform.h"

ChatViewForm::ChatViewForm(QMainWindow *parent) :
    QWidget(parent),
    ui(new Ui::ChatViewForm)
{
    ui->setupUi(this);

    MsgEditor = ui->editMsgBox;
    SendButton = ui->SendButton;
    CloseButton = ui->CloseButton;
}

ChatViewForm::~ChatViewForm()
{
    delete ui;
}

void ChatViewForm::appendHoldMsg(const QString &text)
{

}
