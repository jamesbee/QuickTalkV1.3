#include <QMainWindow>
#include "chatcontrl.h"

ChatContrl::ChatContrl(QObject *parent) :
    QObject(parent)
{
    viewForm = new ChatViewForm(qobject_cast<QMainWindow*>(parent));
    Sender = new MsgSender(this);
    Holder = new MsgHolder(this);

    connect(viewForm->SendButton,SIGNAL(clicked()),
            this,SLOT(sendRequest()));
    connect(viewForm->CloseButton,SIGNAL(clicked()),
            this,SIGNAL(closeRequest()));
    connect(this,SIGNAL(okToSend(const QString&)),
            Sender,SLOT(SendMsg(const QString&)));
}

ChatContrl::~ChatContrl()
{
    delete Sender;
    delete Holder;
}

ChatViewForm* ChatContrl::chatView()
{
    return this->viewForm;
}


void ChatContrl::sendRequest()
{
    QString text;
    //check if valible contains
    if(viewForm->MsgEditor->toPlainText().length() != 0)
    {
        //目标主机地址是否设置
        //emit okToSend(viewForm->MsgEditor->toPlainText());
        if(appSettings.value("remote-host-address").toString().length() != 0)
        {
            //发送,并清空消息
            text += " " + viewForm->MsgEditor->toHtml();
            viewForm->MsgEditor->setText("");
            emit okToSend(text);
        }
        else
        {
            //设置目标主机地址
        }
    }
}
