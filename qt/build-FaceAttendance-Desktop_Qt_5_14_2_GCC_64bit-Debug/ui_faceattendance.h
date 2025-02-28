/********************************************************************************
** Form generated from reading UI file 'faceattendance.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FACEATTENDANCE_H
#define UI_FACEATTENDANCE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FaceAttendance
{
public:
    QWidget *centralwidget;
    QWidget *widget;
    QLabel *video;
    QWidget *widget_2;
    QLabel *titleLb;
    QLabel *headLb;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QWidget *widget_3;
    QHBoxLayout *horizontalLayout;
    QLabel *label_3;
    QSpacerItem *horizontalSpacer;
    QLineEdit *lineEdit;
    QWidget *widget_4;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_4;
    QSpacerItem *horizontalSpacer_2;
    QLineEdit *lineEdit_2;
    QWidget *widget_5;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_5;
    QSpacerItem *horizontalSpacer_3;
    QLineEdit *lineEdit_3;
    QWidget *widget_6;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_6;
    QSpacerItem *horizontalSpacer_4;
    QLineEdit *lineEdit_4;
    QLabel *label;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *FaceAttendance)
    {
        if (FaceAttendance->objectName().isEmpty())
            FaceAttendance->setObjectName(QString::fromUtf8("FaceAttendance"));
        FaceAttendance->resize(800, 480);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(FaceAttendance->sizePolicy().hasHeightForWidth());
        FaceAttendance->setSizePolicy(sizePolicy);
        centralwidget = new QWidget(FaceAttendance);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        widget = new QWidget(centralwidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(0, 0, 480, 480));
        widget->setStyleSheet(QString::fromUtf8(""));
        video = new QLabel(widget);
        video->setObjectName(QString::fromUtf8("video"));
        video->setGeometry(QRect(0, 0, 480, 480));
        widget_2 = new QWidget(centralwidget);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        widget_2->setGeometry(QRect(480, 0, 320, 480));
        widget_2->setStyleSheet(QString::fromUtf8("QWidget{\n"
"	border:1px solid #313236;\n"
"	border-radius:4px;\n"
"	background-color: rgba(37, 40, 49,0.9);\n"
"}\n"
"QWidget#titleLb{\n"
"	font: 24pt \"Ubuntu\";\n"
"	color: rgb(238, 238, 236);\n"
"}\n"
"QWidget#headLb{\n"
"	border-radius:65px;\n"
"}"));
        titleLb = new QLabel(widget_2);
        titleLb->setObjectName(QString::fromUtf8("titleLb"));
        titleLb->setGeometry(QRect(0, 0, 320, 60));
        titleLb->setAlignment(Qt::AlignCenter);
        headLb = new QLabel(widget_2);
        headLb->setObjectName(QString::fromUtf8("headLb"));
        headLb->setGeometry(QRect(90, 70, 130, 130));
        layoutWidget = new QWidget(widget_2);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(20, 200, 275, 220));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        widget_3 = new QWidget(layoutWidget);
        widget_3->setObjectName(QString::fromUtf8("widget_3"));
        widget_3->setEnabled(false);
        widget_3->setStyleSheet(QString::fromUtf8("QWidget{\n"
"	border:1px solid #313236;\n"
"	border-radius:4px;\n"
"	background-color: rgba(37, 40, 49,0.9);\n"
"}\n"
"QLabel{\n"
"	border:none;\n"
"	color: rgb(238, 238, 236);\n"
"	font: 16pt \"Ubuntu\";\n"
"}\n"
"QLineEdit{\n"
"	border:none;\n"
"	color: rgb(238, 238, 236);\n"
"	font: 16pt \"Ubuntu\";\n"
"}"));
        horizontalLayout = new QHBoxLayout(widget_3);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_3 = new QLabel(widget_3);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout->addWidget(label_3);

        horizontalSpacer = new QSpacerItem(10, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        lineEdit = new QLineEdit(widget_3);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setEnabled(false);
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(lineEdit->sizePolicy().hasHeightForWidth());
        lineEdit->setSizePolicy(sizePolicy1);

        horizontalLayout->addWidget(lineEdit);


        verticalLayout->addWidget(widget_3);

        widget_4 = new QWidget(layoutWidget);
        widget_4->setObjectName(QString::fromUtf8("widget_4"));
        widget_4->setEnabled(false);
        widget_4->setStyleSheet(QString::fromUtf8("QWidget{\n"
"	border:1px solid #313236;\n"
"	border-radius:4px;\n"
"	background-color: rgba(37, 40, 49,0.9);\n"
"}\n"
"QLabel{\n"
"	border:none;\n"
"	color: rgb(238, 238, 236);\n"
"	font: 16pt \"Ubuntu\";\n"
"}\n"
"QLineEdit{\n"
"	border:none;\n"
"	color: rgb(238, 238, 236);\n"
"	font: 16pt \"Ubuntu\";\n"
"}"));
        horizontalLayout_2 = new QHBoxLayout(widget_4);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_4 = new QLabel(widget_4);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_2->addWidget(label_4);

        horizontalSpacer_2 = new QSpacerItem(10, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        lineEdit_2 = new QLineEdit(widget_4);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        sizePolicy1.setHeightForWidth(lineEdit_2->sizePolicy().hasHeightForWidth());
        lineEdit_2->setSizePolicy(sizePolicy1);

        horizontalLayout_2->addWidget(lineEdit_2);


        verticalLayout->addWidget(widget_4);

        widget_5 = new QWidget(layoutWidget);
        widget_5->setObjectName(QString::fromUtf8("widget_5"));
        widget_5->setEnabled(false);
        widget_5->setStyleSheet(QString::fromUtf8("QWidget{\n"
"	border:1px solid #313236;\n"
"	border-radius:4px;\n"
"	background-color: rgba(37, 40, 49,0.9);\n"
"}\n"
"QLabel{\n"
"	border:none;\n"
"	color: rgb(238, 238, 236);\n"
"	font: 16pt \"Ubuntu\";\n"
"}\n"
"QLineEdit{\n"
"	border:none;\n"
"	color: rgb(238, 238, 236);\n"
"	font: 16pt \"Ubuntu\";\n"
"}"));
        horizontalLayout_3 = new QHBoxLayout(widget_5);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_5 = new QLabel(widget_5);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        horizontalLayout_3->addWidget(label_5);

        horizontalSpacer_3 = new QSpacerItem(10, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);

        lineEdit_3 = new QLineEdit(widget_5);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));
        sizePolicy1.setHeightForWidth(lineEdit_3->sizePolicy().hasHeightForWidth());
        lineEdit_3->setSizePolicy(sizePolicy1);

        horizontalLayout_3->addWidget(lineEdit_3);


        verticalLayout->addWidget(widget_5);

        widget_6 = new QWidget(layoutWidget);
        widget_6->setObjectName(QString::fromUtf8("widget_6"));
        widget_6->setEnabled(false);
        widget_6->setStyleSheet(QString::fromUtf8("QWidget{\n"
"	border:1px solid #313236;\n"
"	border-radius:4px;\n"
"	background-color: rgba(37, 40, 49,0.9);\n"
"}\n"
"QLabel{\n"
"	border:none;\n"
"	color: rgb(238, 238, 236);\n"
"	font: 16pt \"Ubuntu\";\n"
"}\n"
"QLineEdit{\n"
"	border:none;\n"
"	color: rgb(238, 238, 236);\n"
"	font: 16pt \"Ubuntu\";\n"
"}"));
        horizontalLayout_4 = new QHBoxLayout(widget_6);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_6 = new QLabel(widget_6);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        horizontalLayout_4->addWidget(label_6);

        horizontalSpacer_4 = new QSpacerItem(10, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_4);

        lineEdit_4 = new QLineEdit(widget_6);
        lineEdit_4->setObjectName(QString::fromUtf8("lineEdit_4"));
        sizePolicy1.setHeightForWidth(lineEdit_4->sizePolicy().hasHeightForWidth());
        lineEdit_4->setSizePolicy(sizePolicy1);

        horizontalLayout_4->addWidget(lineEdit_4);


        verticalLayout->addWidget(widget_6);

        label = new QLabel(widget_2);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(0, 0, 320, 480));
        label->setStyleSheet(QString::fromUtf8("background-color: rgb(138, 226, 52);"));
        FaceAttendance->setCentralWidget(centralwidget);
        menubar = new QMenuBar(FaceAttendance);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 22));
        FaceAttendance->setMenuBar(menubar);
        statusbar = new QStatusBar(FaceAttendance);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        FaceAttendance->setStatusBar(statusbar);

        retranslateUi(FaceAttendance);

        QMetaObject::connectSlotsByName(FaceAttendance);
    } // setupUi

    void retranslateUi(QMainWindow *FaceAttendance)
    {
        FaceAttendance->setWindowTitle(QCoreApplication::translate("FaceAttendance", "FaceAttendance", nullptr));
        video->setText(QString());
        titleLb->setText(QCoreApplication::translate("FaceAttendance", "\344\272\272\350\204\270\350\257\206\345\210\253\350\200\203\345\213\244\347\263\273\347\273\237", nullptr));
        headLb->setText(QCoreApplication::translate("FaceAttendance", "TextLabel", nullptr));
        label_3->setText(QCoreApplication::translate("FaceAttendance", "\345\267\245\345\217\267", nullptr));
        lineEdit->setText(QCoreApplication::translate("FaceAttendance", "2022210382", nullptr));
        label_4->setText(QCoreApplication::translate("FaceAttendance", "\345\247\223\345\220\215", nullptr));
        lineEdit_2->setText(QCoreApplication::translate("FaceAttendance", "2022210382", nullptr));
        label_5->setText(QCoreApplication::translate("FaceAttendance", "\351\203\250\351\227\250", nullptr));
        lineEdit_3->setText(QCoreApplication::translate("FaceAttendance", "2022210382", nullptr));
        label_6->setText(QCoreApplication::translate("FaceAttendance", "\346\227\266\351\227\264", nullptr));
        lineEdit_4->setText(QCoreApplication::translate("FaceAttendance", "2022210382", nullptr));
        label->setText(QCoreApplication::translate("FaceAttendance", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FaceAttendance: public Ui_FaceAttendance {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FACEATTENDANCE_H
