/********************************************************************************
** Form generated from reading UI file 'attendanceserver.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ATTENDANCESERVER_H
#define UI_ATTENDANCESERVER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AttendanceServer
{
public:
    QWidget *centralwidget;
    QLabel *picLb;

    void setupUi(QMainWindow *AttendanceServer)
    {
        if (AttendanceServer->objectName().isEmpty())
            AttendanceServer->setObjectName(QString::fromUtf8("AttendanceServer"));
        AttendanceServer->resize(550, 380);
        centralwidget = new QWidget(AttendanceServer);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        picLb = new QLabel(centralwidget);
        picLb->setObjectName(QString::fromUtf8("picLb"));
        picLb->setGeometry(QRect(10, 30, 331, 331));
        picLb->setStyleSheet(QString::fromUtf8("background-color: rgb(46, 52, 54);"));
        AttendanceServer->setCentralWidget(centralwidget);

        retranslateUi(AttendanceServer);

        QMetaObject::connectSlotsByName(AttendanceServer);
    } // setupUi

    void retranslateUi(QMainWindow *AttendanceServer)
    {
        AttendanceServer->setWindowTitle(QCoreApplication::translate("AttendanceServer", "AttendanceServer", nullptr));
        picLb->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class AttendanceServer: public Ui_AttendanceServer {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ATTENDANCESERVER_H
