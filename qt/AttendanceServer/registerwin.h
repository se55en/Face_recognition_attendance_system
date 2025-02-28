#ifndef REGISTERWIN_H
#define REGISTERWIN_H

#include <QWidget>
#include <opencv.hpp>

namespace Ui {
class RegisterWin;
}

class RegisterWin : public QWidget
{
    Q_OBJECT

public:
    explicit RegisterWin(QWidget *parent = nullptr);
    ~RegisterWin();
    void timerEvent(QTimerEvent *e);

private slots:
    void on_resetButton_clicked();

    void on_addpicButton_clicked();

    void on_registerButton_clicked();

    void on_videoButton_clicked();

    void on_cameraButton_clicked();

private:
    Ui::RegisterWin *ui;
    int timerID;
    cv::VideoCapture cap;
    cv::Mat image;
};

#endif // REGISTERWIN_H
