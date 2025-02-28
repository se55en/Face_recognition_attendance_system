#include "qfaceobject.h"

QFaceObject::QFaceObject(QObject *parent) : QObject(parent)
{
    //初始化
    seeta::ModelSetting FDmode("/home/seven/Attendance/library/SeetaFace/bin/model/fd_2_00.dat", seeta::ModelSetting::CPU, 0);
    seeta::ModelSetting PDmode("/home/seven/Attendance/library/SeetaFace/bin/model/pd_2_00_pts5.dat", seeta::ModelSetting::CPU, 0);
    seeta::ModelSetting FRmode("/home/seven/Attendance/library/SeetaFace/bin/model/fr_2_10.dat", seeta::ModelSetting::CPU, 0);
    this->p_engine = new seeta::FaceEngine(FDmode, PDmode, FRmode);//传入训练好的模型给引擎
    //导入已有的人脸数据库
    this->p_engine->Load("./face.db");
}

QFaceObject::~QFaceObject()
{
    delete p_engine;
}

int64_t QFaceObject::face_register(cv::Mat &faceImage)//注册成功返回id,失败返回-1
{
    //把opencv的mat数据转为seetaface的数据
    SeetaImageData sImage;
    sImage.data = faceImage.data;
    sImage.width = faceImage.cols;
    sImage.height = faceImage.rows;
    sImage.channels = faceImage.channels();
    int64_t faceID = this->p_engine->Register(sImage);
    if(faceID >= 0)//注册成功
    {
        p_engine->Save("./face.db");
    }
    return faceID;
}

int QFaceObject::face_query(cv::Mat &faceImage)//返回查询的id,查询失败返回-1
{
    //把opencv的mat数据转为seetaface的数据
    SeetaImageData sImage;
    sImage.data = faceImage.data;
    sImage.width = faceImage.cols;
    sImage.height = faceImage.rows;
    sImage.channels = faceImage.channels();
    float similarity = 0;//可信度
    int64_t faceID = this->p_engine->Query(sImage, &similarity);//运算时间长
    return faceID;
}
