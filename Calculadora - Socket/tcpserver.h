#ifndef TCPSERVER_H
#define TCPSERVER_H

#include <QObject>
#include <QDebug>
#include <QTcpServer>
#include <QTcpSocket>

class TCPServer : public QObject
{
    Q_OBJECT
public:
    TCPServer(QObject *parent = 0);

public slots:
    void nConnection();

private:
    QTcpServer *server;
};

#endif // TCPSERVER_H
