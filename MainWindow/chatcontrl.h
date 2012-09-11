#ifndef CHATCONTRL_H
#define CHATCONTRL_H

#include <QObject>
#include <QSettings>
#include "msgsender.h"
#include "msgholder.h"
#include "chatviewform.h"

class ChatContrl : public QObject
{
    Q_OBJECT
public:
    explicit ChatContrl(QObject *parent = 0);
    ~ChatContrl();

    ChatViewForm* chatView();
    
signals:
    void okToSend(const QString &text);
    void closeRequest();
    
public slots:
    void sendRequest();

private:
    QSettings appSettings;
    MsgSender *Sender;
    MsgHolder *Holder;
    ChatViewForm *viewForm;
};

#endif // CHATCONTRL_H
