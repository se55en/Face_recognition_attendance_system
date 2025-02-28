#include "faceattendance.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);//调用程序对象
    FaceAttendance w;
    w.show();
    return a.exec();//保持程序，不让程序终止，类似死循环
}
