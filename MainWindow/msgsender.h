#ifndef MSGSENDER_H
#define MSGSENDER_H

#include <QObject>
#include <QUdpSocket>

class MsgSender : public QObject
{
    Q_OBJECT
public:
    explicit MsgSender(QObject *parent = 0);
    
signals:
    
public slots:
    void SendMsg(const QString& text);
    
private:
    QUdpSocket MrSender;
};

#endif // MSGSENDER_H
