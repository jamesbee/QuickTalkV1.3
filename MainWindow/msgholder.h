#ifndef MSGHOLDER_H
#define MSGHOLDER_H

#include <QObject>

class MsgHolder : public QObject
{
    Q_OBJECT
public:
    explicit MsgHolder(QObject *parent = 0);
    
signals:
    void MsgArrived(const QString& text);
    
public slots:
    void ReadMsg();
    
};

#endif // MSGHOLDER_H
