/********************************************************************************
** Form generated from reading UI file 'registerwin.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTERWIN_H
#define UI_REGISTERWIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_RegisterWin
{
public:
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_8;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *nameEdit;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QRadioButton *mrb;
    QRadioButton *wrb;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QDateEdit *birthdayEdit;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_4;
    QLineEdit *addressEdit;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_5;
    QLineEdit *phoneEdit;
    QHBoxLayout *horizontalLayout_6;
    QPushButton *registerButton;
    QPushButton *resetButton;
    QVBoxLayout *verticalLayout_3;
    QLabel *headpic;
    QLineEdit *picFileEdit;
    QHBoxLayout *horizontalLayout_7;
    QPushButton *addpicButton;
    QPushButton *videoButton;
    QPushButton *cameraButton;

    void setupUi(QWidget *RegisterWin)
    {
        if (RegisterWin->objectName().isEmpty())
            RegisterWin->setObjectName(QString::fromUtf8("RegisterWin"));
        RegisterWin->resize(535, 311);
        layoutWidget = new QWidget(RegisterWin);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 10, 511, 291));
        horizontalLayout_8 = new QHBoxLayout(layoutWidget);
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        horizontalLayout_8->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        nameEdit = new QLineEdit(layoutWidget);
        nameEdit->setObjectName(QString::fromUtf8("nameEdit"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(nameEdit->sizePolicy().hasHeightForWidth());
        nameEdit->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(nameEdit);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_2->addWidget(label_2);

        mrb = new QRadioButton(layoutWidget);
        mrb->setObjectName(QString::fromUtf8("mrb"));

        horizontalLayout_2->addWidget(mrb);

        wrb = new QRadioButton(layoutWidget);
        wrb->setObjectName(QString::fromUtf8("wrb"));

        horizontalLayout_2->addWidget(wrb);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_3->addWidget(label_3);

        birthdayEdit = new QDateEdit(layoutWidget);
        birthdayEdit->setObjectName(QString::fromUtf8("birthdayEdit"));
        sizePolicy.setHeightForWidth(birthdayEdit->sizePolicy().hasHeightForWidth());
        birthdayEdit->setSizePolicy(sizePolicy);

        horizontalLayout_3->addWidget(birthdayEdit);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_4->addWidget(label_4);

        addressEdit = new QLineEdit(layoutWidget);
        addressEdit->setObjectName(QString::fromUtf8("addressEdit"));
        sizePolicy.setHeightForWidth(addressEdit->sizePolicy().hasHeightForWidth());
        addressEdit->setSizePolicy(sizePolicy);

        horizontalLayout_4->addWidget(addressEdit);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        horizontalLayout_5->addWidget(label_5);

        phoneEdit = new QLineEdit(layoutWidget);
        phoneEdit->setObjectName(QString::fromUtf8("phoneEdit"));
        sizePolicy.setHeightForWidth(phoneEdit->sizePolicy().hasHeightForWidth());
        phoneEdit->setSizePolicy(sizePolicy);

        horizontalLayout_5->addWidget(phoneEdit);


        verticalLayout->addLayout(horizontalLayout_5);


        verticalLayout_2->addLayout(verticalLayout);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        registerButton = new QPushButton(layoutWidget);
        registerButton->setObjectName(QString::fromUtf8("registerButton"));

        horizontalLayout_6->addWidget(registerButton);

        resetButton = new QPushButton(layoutWidget);
        resetButton->setObjectName(QString::fromUtf8("resetButton"));

        horizontalLayout_6->addWidget(resetButton);


        verticalLayout_2->addLayout(horizontalLayout_6);


        horizontalLayout_8->addLayout(verticalLayout_2);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        headpic = new QLabel(layoutWidget);
        headpic->setObjectName(QString::fromUtf8("headpic"));
        headpic->setStyleSheet(QString::fromUtf8("background-color: rgb(114, 159, 207);"));

        verticalLayout_3->addWidget(headpic);

        picFileEdit = new QLineEdit(layoutWidget);
        picFileEdit->setObjectName(QString::fromUtf8("picFileEdit"));

        verticalLayout_3->addWidget(picFileEdit);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        addpicButton = new QPushButton(layoutWidget);
        addpicButton->setObjectName(QString::fromUtf8("addpicButton"));

        horizontalLayout_7->addWidget(addpicButton);

        videoButton = new QPushButton(layoutWidget);
        videoButton->setObjectName(QString::fromUtf8("videoButton"));

        horizontalLayout_7->addWidget(videoButton);

        cameraButton = new QPushButton(layoutWidget);
        cameraButton->setObjectName(QString::fromUtf8("cameraButton"));

        horizontalLayout_7->addWidget(cameraButton);


        verticalLayout_3->addLayout(horizontalLayout_7);

        verticalLayout_3->setStretch(0, 5);
        verticalLayout_3->setStretch(1, 1);
        verticalLayout_3->setStretch(2, 1);

        horizontalLayout_8->addLayout(verticalLayout_3);

        horizontalLayout_8->setStretch(0, 1);
        horizontalLayout_8->setStretch(1, 1);

        retranslateUi(RegisterWin);

        QMetaObject::connectSlotsByName(RegisterWin);
    } // setupUi

    void retranslateUi(QWidget *RegisterWin)
    {
        RegisterWin->setWindowTitle(QCoreApplication::translate("RegisterWin", "RegisterWin", nullptr));
        label->setText(QCoreApplication::translate("RegisterWin", "\345\247\223\345\220\215", nullptr));
        label_2->setText(QCoreApplication::translate("RegisterWin", "\346\200\247\345\210\253", nullptr));
        mrb->setText(QCoreApplication::translate("RegisterWin", "\347\224\267", nullptr));
        wrb->setText(QCoreApplication::translate("RegisterWin", "\345\245\263", nullptr));
        label_3->setText(QCoreApplication::translate("RegisterWin", "\347\224\237\346\227\245", nullptr));
        label_4->setText(QCoreApplication::translate("RegisterWin", "\345\234\260\345\235\200", nullptr));
        label_5->setText(QCoreApplication::translate("RegisterWin", "\347\224\265\350\257\235", nullptr));
        registerButton->setText(QCoreApplication::translate("RegisterWin", "\346\263\250\345\206\214", nullptr));
        resetButton->setText(QCoreApplication::translate("RegisterWin", "\351\207\215\347\275\256", nullptr));
        headpic->setText(QString());
        addpicButton->setText(QCoreApplication::translate("RegisterWin", "\346\267\273\345\212\240\345\244\264\345\203\217", nullptr));
        videoButton->setText(QCoreApplication::translate("RegisterWin", "\346\211\223\345\274\200\346\221\204\345\203\217\345\244\264", nullptr));
        cameraButton->setText(QCoreApplication::translate("RegisterWin", "\346\213\215\347\205\247", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RegisterWin: public Ui_RegisterWin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTERWIN_H
