#include "msgsender.h"
#include <QDebug>

MsgSender::MsgSender(QObject *parent) :
    QObject(parent)
{
}

void MsgSender::SendMsg(const QString &text)
{
    qDebug()<<"send : "<<text;
}
