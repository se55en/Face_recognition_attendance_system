#ifndef FACEATTENDANCE_H
#define FACEATTENDANCE_H

#include <QMainWindow>
#include <opencv.hpp>
#include <QTcpSocket>
#include <QTimer>

using namespace cv;

QT_BEGIN_NAMESPACE
namespace Ui { class FaceAttendance; }
QT_END_NAMESPACE

class FaceAttendance : public QMainWindow//Face这个类公有继承QMainWindow这个类
{
    Q_OBJECT

public:
    FaceAttendance(QWidget *parent = nullptr);
    ~FaceAttendance();
    //定时器事件
    void timerEvent(QTimerEvent *e);
public slots:
    void timer_connect();
    void stop_connect();
    void start_connect();

private:
    Ui::FaceAttendance *ui;
    //摄像头
    VideoCapture cap;
    //haar--级联分类器
    cv::CascadeClassifier cascade;
    //创建网络套接字，定时器
    QTcpSocket msocket;
    QTimer mtimer;
};
#endif // FACEATTENDANCE_H
