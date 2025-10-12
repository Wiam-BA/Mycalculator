/********************************************************************************
** Form generated from reading UI file 'mycalculator.ui'
**
** Created by: Qt User Interface Compiler version 6.8.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MYCALCULATOR_H
#define UI_MYCALCULATOR_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MyCalculator
{
public:
    QAction *actionExit;
    QAction *actionits_a_calculator_duh;
    QWidget *centralwidget;
    QPlainTextEdit *plainTextEdit;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QPushButton *pushButton_n10;
    QPushButton *pushButton_op1;
    QPushButton *pushButton_n3;
    QPushButton *pushButton_eq;
    QPushButton *pushButton_del2;
    QPushButton *pushButton_n4;
    QPushButton *pushButton_n8;
    QPushButton *pushButton_op5;
    QPushButton *pushButton_n7;
    QPushButton *pushButton_del3;
    QPushButton *pushButton_op10;
    QPushButton *pushButton_op8;
    QPushButton *pushButton_op4;
    QPushButton *pushButton_del1;
    QPushButton *pushButton_op12;
    QPushButton *pushButton_n9;
    QPushButton *pushButton_n2;
    QPushButton *pushButton_op6;
    QPushButton *pushButton_n5;
    QPushButton *pushButton_n1;
    QPushButton *pushButton_n6;
    QPushButton *pushButton_n0;
    QPushButton *pushButton_op9;
    QPushButton *pushButton_op7;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MyCalculator)
    {
        if (MyCalculator->objectName().isEmpty())
            MyCalculator->setObjectName("MyCalculator");
        MyCalculator->resize(280, 440);
        MyCalculator->setMinimumSize(QSize(280, 440));
        MyCalculator->setMaximumSize(QSize(280, 440));
        QPalette palette;
        QBrush brush(QColor(0, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(69, 59, 79, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        QBrush brush2(QColor(233, 197, 255, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Light, brush2);
        QBrush brush3(QColor(195, 163, 215, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        QBrush brush4(QColor(79, 65, 87, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Dark, brush4);
        QBrush brush5(QColor(105, 87, 117, 255));
        brush5.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        QBrush brush6(QColor(255, 255, 255, 255));
        brush6.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::BrightText, brush6);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette.setBrush(QPalette::Active, QPalette::Shadow, brush);
        QBrush brush7(QColor(206, 192, 215, 255));
        brush7.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::AlternateBase, brush7);
        QBrush brush8(QColor(255, 255, 220, 255));
        brush8.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::ToolTipBase, brush8);
        palette.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
        QBrush brush9(QColor(0, 0, 0, 127));
        brush9.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Active, QPalette::PlaceholderText, brush9);
#endif
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette.setBrush(QPalette::Active, QPalette::Accent, brush6);
#endif
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::BrightText, brush6);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush7);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush8);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush9);
#endif
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette.setBrush(QPalette::Inactive, QPalette::Accent, brush6);
#endif
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::BrightText, brush6);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        QBrush brush10(QColor(158, 130, 175, 255));
        brush10.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush10);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush8);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
        QBrush brush11(QColor(79, 65, 87, 127));
        brush11.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush11);
#endif
        QBrush brush12(QColor(205, 169, 227, 255));
        brush12.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette.setBrush(QPalette::Disabled, QPalette::Accent, brush12);
#endif
        MyCalculator->setPalette(palette);
        QFont font;
        font.setPointSize(13);
        MyCalculator->setFont(font);
        MyCalculator->setWindowOpacity(0.900000000000000);
        MyCalculator->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border-radius: 5px;        /* Adjust roundness */\n"
"    /*border: 1px solid #444;     Optional border */\n"
"    background-color: #A98FC0;  /* Your color */\n"
"   /* padding: 5px;*/\n"
"   margin: 1px;\n"
"}\n"
"QPushButton:hover {\n"
"    background-color: #B79DD1;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: #9272A8;\n"
"}\n"
"\n"
"QMainWindow {\n"
"    background-color:rgb(69, 59, 79);\n"
"}"));
        actionExit = new QAction(MyCalculator);
        actionExit->setObjectName("actionExit");
        actionits_a_calculator_duh = new QAction(MyCalculator);
        actionits_a_calculator_duh->setObjectName("actionits_a_calculator_duh");
        centralwidget = new QWidget(MyCalculator);
        centralwidget->setObjectName("centralwidget");
        plainTextEdit = new QPlainTextEdit(centralwidget);
        plainTextEdit->setObjectName("plainTextEdit");
        plainTextEdit->setGeometry(QRect(0, 30, 281, 51));
        plainTextEdit->setStyleSheet(QString::fromUtf8("QPlainTextEdit {\n"
"    background-color: rgb(69, 59, 79);\n"
"    color: rgb(255, 255, 255);\n"
"    font-size: 22px;\n"
"    text-align: right; \n"
"    border: 2px solid transparent;\n"
"  /*  border-radius: 10px;\n"
"    padding: 8px; */\n"
"}"));
        gridLayoutWidget = new QWidget(centralwidget);
        gridLayoutWidget->setObjectName("gridLayoutWidget");
        gridLayoutWidget->setGeometry(QRect(0, 80, 282, 362));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setSpacing(0);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setSizeConstraint(QLayout::SizeConstraint::SetDefaultConstraint);
        gridLayout->setContentsMargins(0, 0, 0, 0);
        pushButton_n10 = new QPushButton(gridLayoutWidget);
        pushButton_n10->setObjectName("pushButton_n10");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButton_n10->sizePolicy().hasHeightForWidth());
        pushButton_n10->setSizePolicy(sizePolicy);
        pushButton_n10->setMinimumSize(QSize(70, 60));
        pushButton_n10->setMaximumSize(QSize(60, 60));
        QFont font1;
        font1.setPointSize(12);
        font1.setBold(true);
        pushButton_n10->setFont(font1);
        pushButton_n10->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"color: rgb(255, 255, 255)\n"
"}"));

        gridLayout->addWidget(pushButton_n10, 5, 2, 1, 1);

        pushButton_op1 = new QPushButton(gridLayoutWidget);
        pushButton_op1->setObjectName("pushButton_op1");
        sizePolicy.setHeightForWidth(pushButton_op1->sizePolicy().hasHeightForWidth());
        pushButton_op1->setSizePolicy(sizePolicy);
        pushButton_op1->setMinimumSize(QSize(70, 60));
        pushButton_op1->setMaximumSize(QSize(60, 60));
        QFont font2;
        font2.setPointSize(15);
        font2.setBold(true);
        pushButton_op1->setFont(font2);
        pushButton_op1->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        pushButton_op1->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: rgb(130, 110, 148);  /* Your color */\n"
"   /* padding: 5px;*/\n"
"color: rgb(255, 255, 255)\n"
"}\n"
"QPushButton:hover {\n"
"    background-color: rgb(149, 127, 170);\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: rgb(110, 93, 125);\n"
"}"));
        pushButton_op1->setIconSize(QSize(50, 50));
        pushButton_op1->setAutoDefault(false);

        gridLayout->addWidget(pushButton_op1, 0, 0, 1, 1);

        pushButton_n3 = new QPushButton(gridLayoutWidget);
        pushButton_n3->setObjectName("pushButton_n3");
        sizePolicy.setHeightForWidth(pushButton_n3->sizePolicy().hasHeightForWidth());
        pushButton_n3->setSizePolicy(sizePolicy);
        pushButton_n3->setMinimumSize(QSize(70, 60));
        pushButton_n3->setMaximumSize(QSize(60, 60));
        pushButton_n3->setFont(font1);
        pushButton_n3->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"color: rgb(255, 255, 255)\n"
"}"));

        gridLayout->addWidget(pushButton_n3, 4, 2, 1, 1);

        pushButton_eq = new QPushButton(gridLayoutWidget);
        pushButton_eq->setObjectName("pushButton_eq");
        sizePolicy.setHeightForWidth(pushButton_eq->sizePolicy().hasHeightForWidth());
        pushButton_eq->setSizePolicy(sizePolicy);
        pushButton_eq->setMinimumSize(QSize(70, 60));
        pushButton_eq->setMaximumSize(QSize(60, 60));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Segoe UI")});
        font3.setPointSize(1);
        font3.setBold(false);
        font3.setItalic(false);
        pushButton_eq->setFont(font3);
        pushButton_eq->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: rgb(226, 179, 84);  /* Your color */\n"
"   /* padding: 5px;*/\n"
"color: transparent;\n"
"font: 1pt \"Segoe UI\";\n"
"}\n"
"QPushButton:hover {\n"
"    background-color: rgb(255, 202, 95);\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: rgb(189, 149, 70);\n"
"}"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/myassests/equal-svgrepo-com.svg"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        pushButton_eq->setIcon(icon);
        pushButton_eq->setIconSize(QSize(20, 20));

        gridLayout->addWidget(pushButton_eq, 5, 3, 1, 1);

        pushButton_del2 = new QPushButton(gridLayoutWidget);
        pushButton_del2->setObjectName("pushButton_del2");
        sizePolicy.setHeightForWidth(pushButton_del2->sizePolicy().hasHeightForWidth());
        pushButton_del2->setSizePolicy(sizePolicy);
        pushButton_del2->setMinimumSize(QSize(70, 60));
        pushButton_del2->setMaximumSize(QSize(60, 60));
        pushButton_del2->setFont(font1);
        pushButton_del2->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: rgb(130, 110, 148);  /* Your color */\n"
"   /* padding: 5px;*/\n"
"color: rgb(255, 255, 255)\n"
"}\n"
"QPushButton:hover {\n"
"    background-color: rgb(149, 127, 170);\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: rgb(110, 93, 125);\n"
"}"));

        gridLayout->addWidget(pushButton_del2, 0, 2, 1, 1);

        pushButton_n4 = new QPushButton(gridLayoutWidget);
        pushButton_n4->setObjectName("pushButton_n4");
        sizePolicy.setHeightForWidth(pushButton_n4->sizePolicy().hasHeightForWidth());
        pushButton_n4->setSizePolicy(sizePolicy);
        pushButton_n4->setMinimumSize(QSize(70, 60));
        pushButton_n4->setMaximumSize(QSize(60, 60));
        pushButton_n4->setFont(font1);
        pushButton_n4->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"color: rgb(255, 255, 255)\n"
"}"));

        gridLayout->addWidget(pushButton_n4, 3, 0, 1, 1);

        pushButton_n8 = new QPushButton(gridLayoutWidget);
        pushButton_n8->setObjectName("pushButton_n8");
        sizePolicy.setHeightForWidth(pushButton_n8->sizePolicy().hasHeightForWidth());
        pushButton_n8->setSizePolicy(sizePolicy);
        pushButton_n8->setMinimumSize(QSize(70, 60));
        pushButton_n8->setMaximumSize(QSize(60, 60));
        pushButton_n8->setFont(font1);
        pushButton_n8->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"color: rgb(255, 255, 255)\n"
"}"));

        gridLayout->addWidget(pushButton_n8, 2, 1, 1, 1);

        pushButton_op5 = new QPushButton(gridLayoutWidget);
        pushButton_op5->setObjectName("pushButton_op5");
        sizePolicy.setHeightForWidth(pushButton_op5->sizePolicy().hasHeightForWidth());
        pushButton_op5->setSizePolicy(sizePolicy);
        pushButton_op5->setMinimumSize(QSize(70, 60));
        pushButton_op5->setMaximumSize(QSize(60, 60));
        pushButton_op5->setSizeIncrement(QSize(0, 0));
        pushButton_op5->setFont(font3);
        pushButton_op5->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: rgb(130, 110, 148);  /* Your color */\n"
"   /* padding: 5px;*/\n"
"/*color: transparent;*/\n"
"  color: transparent;\n"
"font: 1pt \"Segoe UI\";\n"
"}\n"
"QPushButton:hover {\n"
"    background-color: rgb(149, 127, 170);\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: rgb(110, 93, 125);\n"
"}"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/myassests/superscript-svgrepo-com.svg"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        pushButton_op5->setIcon(icon1);
        pushButton_op5->setIconSize(QSize(22, 22));

        gridLayout->addWidget(pushButton_op5, 1, 1, 1, 1);

        pushButton_n7 = new QPushButton(gridLayoutWidget);
        pushButton_n7->setObjectName("pushButton_n7");
        sizePolicy.setHeightForWidth(pushButton_n7->sizePolicy().hasHeightForWidth());
        pushButton_n7->setSizePolicy(sizePolicy);
        pushButton_n7->setMinimumSize(QSize(70, 60));
        pushButton_n7->setMaximumSize(QSize(60, 60));
        pushButton_n7->setFont(font1);
        pushButton_n7->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"color: rgb(255, 255, 255)\n"
"}"));

        gridLayout->addWidget(pushButton_n7, 2, 0, 1, 1);

        pushButton_del3 = new QPushButton(gridLayoutWidget);
        pushButton_del3->setObjectName("pushButton_del3");
        sizePolicy.setHeightForWidth(pushButton_del3->sizePolicy().hasHeightForWidth());
        pushButton_del3->setSizePolicy(sizePolicy);
        pushButton_del3->setMinimumSize(QSize(70, 60));
        pushButton_del3->setMaximumSize(QSize(60, 60));
        pushButton_del3->setFont(font3);
        pushButton_del3->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: rgb(130, 110, 148);  /* Your color */\n"
"   /* padding: 5px;*/\n"
"/*color: rgb(255, 255, 255)*/\n"
"color: transparent;\n"
"font: 1pt \"Segoe UI\";\n"
"}\n"
"QPushButton:hover {\n"
"    background-color: rgb(149, 127, 170);\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: rgb(110, 93, 125);\n"
"}"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/myassests/arrow-big-left-svgrepo-com.svg"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        pushButton_del3->setIcon(icon2);
        pushButton_del3->setIconSize(QSize(20, 20));

        gridLayout->addWidget(pushButton_del3, 0, 3, 1, 1);

        pushButton_op10 = new QPushButton(gridLayoutWidget);
        pushButton_op10->setObjectName("pushButton_op10");
        sizePolicy.setHeightForWidth(pushButton_op10->sizePolicy().hasHeightForWidth());
        pushButton_op10->setSizePolicy(sizePolicy);
        pushButton_op10->setMinimumSize(QSize(70, 60));
        pushButton_op10->setMaximumSize(QSize(60, 60));
        QFont font4;
        font4.setPointSize(16);
        font4.setBold(true);
        pushButton_op10->setFont(font4);
        pushButton_op10->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: rgb(130, 110, 148);  /* Your color */\n"
"   /* padding: 5px;*/\n"
"color: rgb(255, 255, 255)\n"
"}\n"
"QPushButton:hover {\n"
"    background-color: rgb(149, 127, 170);\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: rgb(110, 93, 125);\n"
"}"));

        gridLayout->addWidget(pushButton_op10, 4, 3, 1, 1);

        pushButton_op8 = new QPushButton(gridLayoutWidget);
        pushButton_op8->setObjectName("pushButton_op8");
        sizePolicy.setHeightForWidth(pushButton_op8->sizePolicy().hasHeightForWidth());
        pushButton_op8->setSizePolicy(sizePolicy);
        pushButton_op8->setMinimumSize(QSize(70, 60));
        pushButton_op8->setMaximumSize(QSize(60, 60));
        pushButton_op8->setFont(font1);
        pushButton_op8->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: rgb(130, 110, 148);  /* Your color */\n"
"   /* padding: 5px;*/\n"
"color: rgb(255, 255, 255)\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: rgb(149, 127, 170);\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: rgb(110, 93, 125);\n"
"}"));

        gridLayout->addWidget(pushButton_op8, 2, 3, 1, 1);

        pushButton_op4 = new QPushButton(gridLayoutWidget);
        pushButton_op4->setObjectName("pushButton_op4");
        sizePolicy.setHeightForWidth(pushButton_op4->sizePolicy().hasHeightForWidth());
        pushButton_op4->setSizePolicy(sizePolicy);
        pushButton_op4->setMinimumSize(QSize(70, 60));
        pushButton_op4->setMaximumSize(QSize(60, 60));
        pushButton_op4->setFont(font1);
        pushButton_op4->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: rgb(130, 110, 148);  /* Your color */\n"
"   /* padding: 5px;*/\n"
"color: rgb(255, 255, 255)\n"
"}\n"
"QPushButton:hover {\n"
"    background-color: rgb(149, 127, 170);\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: rgb(110, 93, 125);\n"
"}"));

        gridLayout->addWidget(pushButton_op4, 1, 0, 1, 1);

        pushButton_del1 = new QPushButton(gridLayoutWidget);
        pushButton_del1->setObjectName("pushButton_del1");
        sizePolicy.setHeightForWidth(pushButton_del1->sizePolicy().hasHeightForWidth());
        pushButton_del1->setSizePolicy(sizePolicy);
        pushButton_del1->setMinimumSize(QSize(70, 60));
        pushButton_del1->setMaximumSize(QSize(60, 60));
        pushButton_del1->setFont(font1);
        pushButton_del1->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: rgb(130, 110, 148);  /* Your color */\n"
"   /* padding: 5px;*/\n"
"color: rgb(255, 255, 255)\n"
"}\n"
"QPushButton:hover {\n"
"    background-color: rgb(149, 127, 170);\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: rgb(110, 93, 125);\n"
"}"));

        gridLayout->addWidget(pushButton_del1, 0, 1, 1, 1);

        pushButton_op12 = new QPushButton(gridLayoutWidget);
        pushButton_op12->setObjectName("pushButton_op12");
        sizePolicy.setHeightForWidth(pushButton_op12->sizePolicy().hasHeightForWidth());
        pushButton_op12->setSizePolicy(sizePolicy);
        pushButton_op12->setMinimumSize(QSize(70, 60));
        pushButton_op12->setMaximumSize(QSize(60, 60));
        pushButton_op12->setFont(font3);
        pushButton_op12->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"color: transparent;\n"
"font: 1pt \"Segoe UI\";\n"
"}"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/myassests/mathematical-basic-signs-of-plus-and-minus-with-a-slash-svgrepo-com.svg"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        pushButton_op12->setIcon(icon3);
        pushButton_op12->setIconSize(QSize(20, 20));

        gridLayout->addWidget(pushButton_op12, 5, 0, 1, 1);

        pushButton_n9 = new QPushButton(gridLayoutWidget);
        pushButton_n9->setObjectName("pushButton_n9");
        pushButton_n9->setMinimumSize(QSize(70, 60));
        pushButton_n9->setMaximumSize(QSize(60, 60));
        pushButton_n9->setFont(font1);
        pushButton_n9->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"color: rgb(255, 255, 255)\n"
"}"));

        gridLayout->addWidget(pushButton_n9, 2, 2, 1, 1);

        pushButton_n2 = new QPushButton(gridLayoutWidget);
        pushButton_n2->setObjectName("pushButton_n2");
        sizePolicy.setHeightForWidth(pushButton_n2->sizePolicy().hasHeightForWidth());
        pushButton_n2->setSizePolicy(sizePolicy);
        pushButton_n2->setMinimumSize(QSize(70, 60));
        pushButton_n2->setMaximumSize(QSize(60, 60));
        pushButton_n2->setFont(font1);
        pushButton_n2->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"color: rgb(255, 255, 255)\n"
"}"));

        gridLayout->addWidget(pushButton_n2, 4, 1, 1, 1);

        pushButton_op6 = new QPushButton(gridLayoutWidget);
        pushButton_op6->setObjectName("pushButton_op6");
        sizePolicy.setHeightForWidth(pushButton_op6->sizePolicy().hasHeightForWidth());
        pushButton_op6->setSizePolicy(sizePolicy);
        pushButton_op6->setMinimumSize(QSize(70, 60));
        pushButton_op6->setMaximumSize(QSize(60, 60));
        pushButton_op6->setFont(font3);
        pushButton_op6->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: rgb(130, 110, 148);  /* Your color */\n"
"   /* padding: 5px;*/\n"
"color: transparent;\n"
"font: 1pt \"Segoe UI\";\n"
"\n"
"}\n"
"QPushButton:hover {\n"
"    background-color: rgb(149, 127, 170);\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: rgb(110, 93, 125);\n"
"}"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/myassests/square-root-of-x-mathematical-signs-svgrepo-com.svg"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        pushButton_op6->setIcon(icon4);
        pushButton_op6->setIconSize(QSize(23, 23));

        gridLayout->addWidget(pushButton_op6, 1, 2, 1, 1);

        pushButton_n5 = new QPushButton(gridLayoutWidget);
        pushButton_n5->setObjectName("pushButton_n5");
        sizePolicy.setHeightForWidth(pushButton_n5->sizePolicy().hasHeightForWidth());
        pushButton_n5->setSizePolicy(sizePolicy);
        pushButton_n5->setMinimumSize(QSize(70, 60));
        pushButton_n5->setMaximumSize(QSize(60, 60));
        pushButton_n5->setFont(font1);
        pushButton_n5->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"color: rgb(255, 255, 255)\n"
"}"));

        gridLayout->addWidget(pushButton_n5, 3, 1, 1, 1);

        pushButton_n1 = new QPushButton(gridLayoutWidget);
        pushButton_n1->setObjectName("pushButton_n1");
        sizePolicy.setHeightForWidth(pushButton_n1->sizePolicy().hasHeightForWidth());
        pushButton_n1->setSizePolicy(sizePolicy);
        pushButton_n1->setMinimumSize(QSize(70, 60));
        pushButton_n1->setMaximumSize(QSize(60, 60));
        pushButton_n1->setFont(font1);
        pushButton_n1->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"color: rgb(255, 255, 255)\n"
"}"));

        gridLayout->addWidget(pushButton_n1, 4, 0, 1, 1);

        pushButton_n6 = new QPushButton(gridLayoutWidget);
        pushButton_n6->setObjectName("pushButton_n6");
        sizePolicy.setHeightForWidth(pushButton_n6->sizePolicy().hasHeightForWidth());
        pushButton_n6->setSizePolicy(sizePolicy);
        pushButton_n6->setMinimumSize(QSize(70, 60));
        pushButton_n6->setMaximumSize(QSize(60, 60));
        pushButton_n6->setFont(font1);
        pushButton_n6->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"color: rgb(255, 255, 255)\n"
"}"));

        gridLayout->addWidget(pushButton_n6, 3, 2, 1, 1);

        pushButton_n0 = new QPushButton(gridLayoutWidget);
        pushButton_n0->setObjectName("pushButton_n0");
        sizePolicy.setHeightForWidth(pushButton_n0->sizePolicy().hasHeightForWidth());
        pushButton_n0->setSizePolicy(sizePolicy);
        pushButton_n0->setMinimumSize(QSize(70, 60));
        pushButton_n0->setMaximumSize(QSize(60, 60));
        pushButton_n0->setFont(font1);
        pushButton_n0->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"color: rgb(255, 255, 255)\n"
"}"));

        gridLayout->addWidget(pushButton_n0, 5, 1, 1, 1);

        pushButton_op9 = new QPushButton(gridLayoutWidget);
        pushButton_op9->setObjectName("pushButton_op9");
        sizePolicy.setHeightForWidth(pushButton_op9->sizePolicy().hasHeightForWidth());
        pushButton_op9->setSizePolicy(sizePolicy);
        pushButton_op9->setMinimumSize(QSize(70, 60));
        pushButton_op9->setMaximumSize(QSize(60, 60));
        pushButton_op9->setFont(font3);
        pushButton_op9->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: rgb(130, 110, 148);  /* Your color */\n"
"   /* padding: 5px;*/\n"
"/*color: rgb(255, 255, 255)*/\n"
"color: transparent;\n"
"font: 1pt \"Segoe UI\";\n"
"}\n"
"QPushButton:hover {\n"
"    background-color: rgb(149, 127, 170);\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: rgb(110, 93, 125);\n"
"}"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/myassests/minus-svgrepo-com.svg"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        pushButton_op9->setIcon(icon5);
        pushButton_op9->setIconSize(QSize(20, 20));

        gridLayout->addWidget(pushButton_op9, 3, 3, 1, 1);

        pushButton_op7 = new QPushButton(gridLayoutWidget);
        pushButton_op7->setObjectName("pushButton_op7");
        sizePolicy.setHeightForWidth(pushButton_op7->sizePolicy().hasHeightForWidth());
        pushButton_op7->setSizePolicy(sizePolicy);
        pushButton_op7->setMinimumSize(QSize(70, 60));
        pushButton_op7->setMaximumSize(QSize(60, 60));
        pushButton_op7->setFont(font3);
        pushButton_op7->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: rgb(130, 110, 148);  /* Your color */\n"
"   /* padding: 5px;*/\n"
"color: transparent;\n"
"font: 1pt \"Segoe UI\";\n"
"}\n"
"QPushButton:hover {\n"
"    background-color: rgb(149, 127, 170);\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: rgb(110, 93, 125);\n"
"}"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/myassests/divide-svgrepo-com.svg"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        pushButton_op7->setIcon(icon6);
        pushButton_op7->setIconSize(QSize(20, 20));

        gridLayout->addWidget(pushButton_op7, 1, 3, 1, 1);

        MyCalculator->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MyCalculator);
        statusbar->setObjectName("statusbar");
        MyCalculator->setStatusBar(statusbar);

        retranslateUi(MyCalculator);

        QMetaObject::connectSlotsByName(MyCalculator);
    } // setupUi

    void retranslateUi(QMainWindow *MyCalculator)
    {
        MyCalculator->setWindowTitle(QCoreApplication::translate("MyCalculator", "MyCalculator", nullptr));
        actionExit->setText(QCoreApplication::translate("MyCalculator", "Exit", nullptr));
        actionits_a_calculator_duh->setText(QCoreApplication::translate("MyCalculator", "I mean its a calculator duh", nullptr));
        plainTextEdit->setPlainText(QCoreApplication::translate("MyCalculator", "0", nullptr));
        pushButton_n10->setText(QCoreApplication::translate("MyCalculator", ".", nullptr));
        pushButton_op1->setText(QCoreApplication::translate("MyCalculator", "%", nullptr));
        pushButton_n3->setText(QCoreApplication::translate("MyCalculator", "3", nullptr));
        pushButton_eq->setText(QString());
        pushButton_del2->setText(QCoreApplication::translate("MyCalculator", "C", nullptr));
        pushButton_n4->setText(QCoreApplication::translate("MyCalculator", "4", nullptr));
        pushButton_n8->setText(QCoreApplication::translate("MyCalculator", "8", nullptr));
        pushButton_op5->setText(QCoreApplication::translate("MyCalculator", "^", nullptr));
        pushButton_n7->setText(QCoreApplication::translate("MyCalculator", "7", nullptr));
        pushButton_del3->setText(QString());
        pushButton_op10->setText(QCoreApplication::translate("MyCalculator", "+", nullptr));
        pushButton_op8->setText(QCoreApplication::translate("MyCalculator", "x", nullptr));
        pushButton_op4->setText(QCoreApplication::translate("MyCalculator", "1/x", nullptr));
        pushButton_del1->setText(QCoreApplication::translate("MyCalculator", "CE", nullptr));
        pushButton_op12->setText(QCoreApplication::translate("MyCalculator", "+/-", nullptr));
        pushButton_n9->setText(QCoreApplication::translate("MyCalculator", "9", nullptr));
        pushButton_n2->setText(QCoreApplication::translate("MyCalculator", "2", nullptr));
        pushButton_op6->setText(QCoreApplication::translate("MyCalculator", "r", nullptr));
        pushButton_n5->setText(QCoreApplication::translate("MyCalculator", "5", nullptr));
        pushButton_n1->setText(QCoreApplication::translate("MyCalculator", "1", nullptr));
        pushButton_n6->setText(QCoreApplication::translate("MyCalculator", "6", nullptr));
        pushButton_n0->setText(QCoreApplication::translate("MyCalculator", "0", nullptr));
        pushButton_op9->setText(QCoreApplication::translate("MyCalculator", "-", nullptr));
        pushButton_op7->setText(QCoreApplication::translate("MyCalculator", "*/*", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MyCalculator: public Ui_MyCalculator {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYCALCULATOR_H
