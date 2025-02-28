#include "faceattendance.h"
#include "ui_faceattendance.h"

//程序启动时运行
FaceAttendance::FaceAttendance(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::FaceAttendance)
{
    ui->setupUi(this);
    //打开摄像头
    cap.open("/dev/video0");//dev/video
    //启动定时器事件
    startTimer(10);

    //导入级联分类器文件
    cascade.load("../../library/opencv-4.5.2/data/haarcascades/haarcascade_frontalface_alt2.xml");
    //home/seven/Attendance/library/opencv-4.5.2/data/haarcascades/haarcascade_frontalface_alt2.xml
    //home/seven/Attendance/library/opencv-4.5.2/data/haarcascades_cuda/haarcascade_frontalface_alt2.xml
    
    //QTcpSocket断开连接发送disconnected信号，连接成功发送connected信号
    connect(&msocket, &QTcpSocket::disconnected, this, &FaceAttendance::start_connect);
    connect(&msocket, &QTcpSocket::connected, this, &FaceAttendance::stop_connect);

    //定时连接服务器
    connect(&mtimer, &QTimer::timeout, this, &FaceAttendance::timer_connect);
    mtimer.start(5000);//每5秒启动一次连接

}

FaceAttendance::~FaceAttendance()
{
    delete ui;
}

void FaceAttendance::timerEvent(QTimerEvent *e)
{
    //采集数据
    Mat srcImage;
    if(cap.grab())
    {
        cap.read(srcImage);//读取一帧数据
    }
    //检测人脸数据
    std::vector<Rect> faceRects;
    cascade.detectMultiScale(srcImage, faceRects);//数据返回faceRects里
    if(faceRects.size()>0)//识别到人脸
    {
        //把Mat数据转化为QbyteArray，JPG格式
        std::vector<uchar> buf;
        cv::imencode(".jpg", srcImage, buf);//编码数据存在buf里
        QByteArray byte((const char*)buf.data(), buf.size());//把buf数据强转为QByteArray类型
        //准备发送
        quint64 datasize = byte.size();
        QByteArray sendData;
        QDataStream stream(&sendData, QIODevice::WriteOnly);//stream与sendData关联
        stream.setVersion(QDataStream::Qt_5_14);
        stream<<datasize<<byte;
        //发送
        msocket.write(sendData);

        Rect rect = faceRects.at(0);//第一个人脸矩形框
        rectangle(srcImage, rect, Scalar(255,0,0));//绘制矩形框,颜色BGR
    }

    if(srcImage.data == nullptr)return;
    //把opencv的Mat数据转为qt里的数据
    cvtColor(srcImage, srcImage, COLOR_BGR2RGB);
    QImage image(srcImage.data, srcImage.cols, srcImage.rows, srcImage.step1(), QImage::Format_RGB888);
    QPixmap mmp = QPixmap::fromImage(image);
    ui->video->setPixmap(mmp);
}

void FaceAttendance::timer_connect()
{
    //连接服务器
    msocket.connectToHost("192.168.88.130", 9999);
    qDebug()<<"正在连接";
}

void FaceAttendance::stop_connect()
{
    mtimer.stop();
    qDebug()<<"成功连接";
}

void FaceAttendance::start_connect()
{
    mtimer.start(5000);//启动定时器
    qDebug()<<"断开连接";
}

