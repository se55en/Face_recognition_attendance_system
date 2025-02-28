#include "attendanceserver.h"
#include "ui_attendanceserver.h"

AttendanceServer::AttendanceServer(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::AttendanceServer)
{
    ui->setupUi(this);
    //QTcpServer当有客户端连接会发送newConnection
    connect(&mserver, &QTcpServer::newConnection, this, &AttendanceServer::accept_client);
    mserver.listen(QHostAddress::Any, 9999);//监听任意地址
    
    datasize = 0;
}

AttendanceServer::~AttendanceServer()
{
    delete ui;
}

void AttendanceServer::accept_client()
{
    //获取客户端套接字
    psocket = mserver.nextPendingConnection();
    //当客户端有数据到达会发送readyRead信号
    connect(psocket, &QTcpSocket::readyRead, this, &AttendanceServer::read_data);
}

void AttendanceServer::read_data()
{
    QDataStream stream(psocket);
    stream.setVersion(QDataStream::Qt_5_14);
    
    if(datasize == 0)
    {
        if(psocket->bytesAvailable() < (qint64)sizeof(datasize)) return;
        //采集数据长度
        stream>>datasize;
    }
    
    if(psocket->bytesAvailable() < datasize) return;
    QByteArray data;
    stream >> data;
    datasize = 0;
    if(data.size() == 0) return;
    
    //显示图片
    QPixmap mmp;
    mmp.loadFromData(data, "jpg");
    mmp = mmp.scaled(ui->picLb->size());
    ui->picLb->setPixmap(mmp);

    //识别人脸
    //把字节流数据解码为Mat格式
    cv::Mat faceImage;
    std::vector<uchar> decode;
    decode.resize(data.size());
    memcpy(decode.data(), data.data(), data.size());
    faceImage = cv::imdecode(decode, cv::IMREAD_COLOR);
    int faceid = fobj.face_query(faceImage);
    qDebug()<<"--------"<<faceid;
}
