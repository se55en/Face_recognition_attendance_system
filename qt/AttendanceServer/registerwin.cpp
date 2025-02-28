#include "registerwin.h"
#include "ui_registerwin.h"
#include <QFileDialog>
#include <qfaceobject.h>
#include <QSqlTableModel>
#include <QSqlRecord>
#include <QMessageBox>
#include <QDebug>

RegisterWin::RegisterWin(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::RegisterWin)
{
    ui->setupUi(this);
}

RegisterWin::~RegisterWin()
{
    delete ui;
}

void RegisterWin::timerEvent(QTimerEvent *e)
{
    //获取摄像头数据并显示
    if(!cap.isOpened()) return;
    cap>>image;

    if(image.data == nullptr) return;

    //把opencv的Mat数据转为qt里的数据
    cv::cvtColor(image, image, cv::COLOR_BGR2RGB);
    QImage qimage(image.data, image.cols, image.rows, image.step1(), QImage::Format_RGB888);
    QPixmap mmp = QPixmap::fromImage(qimage);
    mmp = mmp.scaledToWidth(ui->headpic->width());
    //mmp = mmp.scaledToHeight(ui->headpic->height());
    ui->headpic->setPixmap(mmp);
}



void RegisterWin::on_resetButton_clicked()
{
    //清除数据
    ui->nameEdit->clear();
    ui->birthdayEdit->setDate(QDate::currentDate());
    ui->addressEdit->clear();
    ui->phoneEdit->clear();
    ui->picFileEdit->clear();
}

void RegisterWin::on_addpicButton_clicked()
{
    //通过文件对话框，选择图片路径
    QString filepath = QFileDialog::getOpenFileName(this);
    ui->picFileEdit->setText(filepath);
    //显示图片
    QPixmap mmp(filepath);
    mmp = mmp.scaledToWidth(ui->headpic->width());
    ui->headpic->setPixmap(mmp);
}

void RegisterWin::on_registerButton_clicked()
{
    //1、通过照片，注册得到faceid
    QFaceObject faceobj;
    cv::Mat image = cv::imread(ui->picFileEdit->text().toUtf8().data());
    int64_t faceID = faceobj.face_register(image);
    qDebug()<<faceID;
    //把头像保存在固定路径下
    QString headfile = QString("./data/%1.jpg").arg(QString(ui->nameEdit->text().toUtf8().toBase64()));
    cv::imwrite(headfile.toUtf8().data(), image);

    //2、把个人信息存储到数据库
    QSqlTableModel model;
    model.setTable("employee");//设置表名
    //记录数据
    QSqlRecord record = model.record();
    record.setValue("name", ui->nameEdit->text());
    record.setValue("sex", ui->wrb->isChecked()?"女":"男");
    record.setValue("birthday", ui->birthdayEdit->text());
    record.setValue("address", ui->addressEdit->text());
    record.setValue("phone", ui->phoneEdit->text());
    record.setValue("faceID", (int)faceID);
    record.setValue("headfile", headfile);
    //把记录插入表格
    bool ret = model.insertRecord(0, record);
    if(ret)
    {
        QMessageBox::information(this, "注册提示", "注册成功");
        //数据真正写入数据库
        model.submitAll();
    }
    else
    {
        QMessageBox::information(this, "注册提示", "注册失败");
    }

}

void RegisterWin::on_videoButton_clicked()
{
    if(ui->videoButton->text() == "打开摄像头")
    {
        //打开摄像头
        if(cap.open("/dev/video0"))
        {
            //启动定时器采集数据
            timerID = startTimer(10);
            ui->videoButton->setText("关闭摄像头");
        }
    }
    else
    {
        killTimer(timerID);
        cap.release();
        ui->videoButton->setText("打开摄像头");
    }
}

void RegisterWin::on_cameraButton_clicked()
{
    killTimer(timerID);
    cap.release();
    ui->videoButton->setText("打开摄像头");
    //把头像保存在固定路径下
    QString headfile = QString("./data/%1.jpg").arg(QString(ui->nameEdit->text().toUtf8().toBase64()));
    cv::imwrite(headfile.toUtf8().data(), image);
    ui->picFileEdit->setText(headfile);
}
