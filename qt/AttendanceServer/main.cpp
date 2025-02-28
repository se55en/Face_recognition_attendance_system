#include "attendanceserver.h"

#include <QApplication>
#include <QSqlDatabase>
#include <QSqlError>
#include <QSqlQuery>

#include "registerwin.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    //连接数据库
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    //成员信息数据库
    db.setDatabaseName("server.db");//设置数据库名称
    if(!db.open())//打开数据库
    {
        qDebug()<<db.lastError().text();//输出最后一行信息
        return -1;
    }
    //创建员工信息表格
    QString createsql = "create table if not exists employee(employeeID integer primary key autoincrement, name varchar(256), "
                        "sex varchar(32), birthday text, address text, phone text, faceID integer unique, headfile text)";
    QSqlQuery query;
    if(!query.exec(createsql))
    {
        qDebug()<<query.lastError().text();//输出最后一行信息
        return -1;
    }
    //考勤表
    createsql = "create table if not exists attendance(attendanceID integer primary key autoincrement, employeeID integer, "
                "attendance TimeStamp NOT NULL DEFAULT(datetime('now', 'localtime')))";
    if(!query.exec(createsql))
    {
        qDebug()<<query.lastError().text();//输出最后一行信息
        return -1;
    }

    RegisterWin ww;
    ww.show();
    AttendanceServer w;
    w.show();
    return a.exec();
}
