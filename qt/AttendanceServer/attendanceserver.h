#ifndef ATTENDANCESERVER_H
#define ATTENDANCESERVER_H

#include "qfaceobject.h"

#include <QMainWindow>
#include <QTcpSocket>
#include <QTcpServer>

QT_BEGIN_NAMESPACE
namespace Ui { class AttendanceServer; }
QT_END_NAMESPACE

class AttendanceServer : public QMainWindow
{
    Q_OBJECT

public:
    AttendanceServer(QWidget *parent = nullptr);
    ~AttendanceServer();

protected slots:
    void accept_client();
    void read_data();
private:
    Ui::AttendanceServer *ui;
    QTcpServer mserver;
    QTcpSocket *psocket;
    qint64 datasize;

    QFaceObject fobj;
};
#endif // ATTENDANCESERVER_H
