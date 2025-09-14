/********************************************************************************
** Form generated from reading UI file 'mycalculator.ui'
**
** Created by: Qt User Interface Compiler version 6.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MYCALCULATOR_H
#define UI_MYCALCULATOR_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MyCalculator
{
public:
    QAction *actionExit;
    QWidget *centralwidget;
    QPlainTextEdit *plainTextEdit;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QPushButton *pushButton_n5;
    QPushButton *pushButton_del2;
    QPushButton *pushButton_del3;
    QPushButton *pushButton_n8;
    QPushButton *pushButton_op5;
    QPushButton *pushButton_n9;
    QPushButton *pushButton_op12;
    QPushButton *pushButton_op1;
    QPushButton *pushButton_del1;
    QPushButton *pushButton_n3;
    QPushButton *pushButton_op9;
    QPushButton *pushButton_op10;
    QPushButton *pushButton_n0;
    QPushButton *pushButton_op4;
    QPushButton *pushButton_op8;
    QPushButton *pushButton_op7;
    QPushButton *pushButton_op6;
    QPushButton *pushButton_n1;
    QPushButton *pushButton_n7;
    QPushButton *pushButton_n6;
    QPushButton *pushButton_n2;
    QPushButton *pushButton_eq;
    QPushButton *pushButton_n4;
    QPushButton *pushButton_n10;
    QMenuBar *menubar;
    QMenu *menuCalculator;
    QMenu *menuAbout;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MyCalculator)
    {
        if (MyCalculator->objectName().isEmpty())
            MyCalculator->setObjectName("MyCalculator");
        MyCalculator->resize(396, 534);
        QPalette palette;
        QBrush brush(QColor(0, 0, 0, 255));
        brush.setStyle(Qt::BrushStyle::SolidPattern);
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::WindowText, brush);
        QBrush brush1(QColor(255, 185, 212, 255));
        brush1.setStyle(Qt::BrushStyle::SolidPattern);
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Button, brush1);
        QBrush brush2(QColor(255, 255, 255, 255));
        brush2.setStyle(Qt::BrushStyle::SolidPattern);
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Light, brush2);
        QBrush brush3(QColor(255, 220, 233, 255));
        brush3.setStyle(Qt::BrushStyle::SolidPattern);
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Midlight, brush3);
        QBrush brush4(QColor(127, 92, 106, 255));
        brush4.setStyle(Qt::BrushStyle::SolidPattern);
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Dark, brush4);
        QBrush brush5(QColor(170, 123, 141, 255));
        brush5.setStyle(Qt::BrushStyle::SolidPattern);
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Mid, brush5);
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Text, brush);
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::BrightText, brush2);
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ButtonText, brush);
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Base, brush2);
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Window, brush1);
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Shadow, brush);
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::AlternateBase, brush3);
        QBrush brush6(QColor(255, 255, 220, 255));
        brush6.setStyle(Qt::BrushStyle::SolidPattern);
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ToolTipBase, brush6);
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ToolTipText, brush);
        QBrush brush7(QColor(0, 0, 0, 127));
        brush7.setStyle(Qt::BrushStyle::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::PlaceholderText, brush7);
#endif
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Accent, brush2);
#endif
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::WindowText, brush);
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Button, brush1);
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Light, brush2);
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Midlight, brush3);
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Dark, brush4);
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Mid, brush5);
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Text, brush);
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::BrightText, brush2);
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ButtonText, brush);
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Base, brush2);
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Window, brush1);
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Shadow, brush);
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::AlternateBase, brush3);
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ToolTipBase, brush6);
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::PlaceholderText, brush7);
#endif
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Accent, brush2);
#endif
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::WindowText, brush4);
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Button, brush1);
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Light, brush2);
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Midlight, brush3);
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Dark, brush4);
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Mid, brush5);
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Text, brush4);
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::BrightText, brush2);
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ButtonText, brush4);
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Base, brush1);
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Window, brush1);
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Shadow, brush);
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::AlternateBase, brush1);
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ToolTipBase, brush6);
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ToolTipText, brush);
        QBrush brush8(QColor(127, 92, 106, 127));
        brush8.setStyle(Qt::BrushStyle::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::PlaceholderText, brush8);
#endif
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Accent, brush2);
#endif
        MyCalculator->setPalette(palette);
        actionExit = new QAction(MyCalculator);
        actionExit->setObjectName("actionExit");
        centralwidget = new QWidget(MyCalculator);
        centralwidget->setObjectName("centralwidget");
        plainTextEdit = new QPlainTextEdit(centralwidget);
        plainTextEdit->setObjectName("plainTextEdit");
        plainTextEdit->setGeometry(QRect(30, 20, 341, 70));
        gridLayoutWidget = new QWidget(centralwidget);
        gridLayoutWidget->setObjectName("gridLayoutWidget");
        gridLayoutWidget->setGeometry(QRect(40, 100, 321, 391));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setSpacing(0);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setSizeConstraint(QLayout::SizeConstraint::SetDefaultConstraint);
        gridLayout->setContentsMargins(0, 0, 0, 0);
        pushButton_n5 = new QPushButton(gridLayoutWidget);
        pushButton_n5->setObjectName("pushButton_n5");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButton_n5->sizePolicy().hasHeightForWidth());
        pushButton_n5->setSizePolicy(sizePolicy);
        pushButton_n5->setMinimumSize(QSize(60, 60));
        pushButton_n5->setMaximumSize(QSize(60, 60));

        gridLayout->addWidget(pushButton_n5, 3, 1, 1, 1);

        pushButton_del2 = new QPushButton(gridLayoutWidget);
        pushButton_del2->setObjectName("pushButton_del2");
        sizePolicy.setHeightForWidth(pushButton_del2->sizePolicy().hasHeightForWidth());
        pushButton_del2->setSizePolicy(sizePolicy);
        pushButton_del2->setMinimumSize(QSize(60, 60));
        pushButton_del2->setMaximumSize(QSize(60, 60));

        gridLayout->addWidget(pushButton_del2, 0, 2, 1, 1);

        pushButton_del3 = new QPushButton(gridLayoutWidget);
        pushButton_del3->setObjectName("pushButton_del3");
        sizePolicy.setHeightForWidth(pushButton_del3->sizePolicy().hasHeightForWidth());
        pushButton_del3->setSizePolicy(sizePolicy);
        pushButton_del3->setMinimumSize(QSize(60, 60));
        pushButton_del3->setMaximumSize(QSize(60, 60));

        gridLayout->addWidget(pushButton_del3, 0, 3, 1, 1);

        pushButton_n8 = new QPushButton(gridLayoutWidget);
        pushButton_n8->setObjectName("pushButton_n8");
        sizePolicy.setHeightForWidth(pushButton_n8->sizePolicy().hasHeightForWidth());
        pushButton_n8->setSizePolicy(sizePolicy);
        pushButton_n8->setMinimumSize(QSize(60, 60));
        pushButton_n8->setMaximumSize(QSize(60, 60));

        gridLayout->addWidget(pushButton_n8, 2, 1, 1, 1);

        pushButton_op5 = new QPushButton(gridLayoutWidget);
        pushButton_op5->setObjectName("pushButton_op5");
        sizePolicy.setHeightForWidth(pushButton_op5->sizePolicy().hasHeightForWidth());
        pushButton_op5->setSizePolicy(sizePolicy);
        pushButton_op5->setMinimumSize(QSize(60, 60));
        pushButton_op5->setMaximumSize(QSize(60, 60));
        pushButton_op5->setSizeIncrement(QSize(0, 0));
        pushButton_op5->setIconSize(QSize(16, 16));

        gridLayout->addWidget(pushButton_op5, 1, 1, 1, 1);

        pushButton_n9 = new QPushButton(gridLayoutWidget);
        pushButton_n9->setObjectName("pushButton_n9");
        pushButton_n9->setMinimumSize(QSize(60, 60));
        pushButton_n9->setMaximumSize(QSize(60, 60));

        gridLayout->addWidget(pushButton_n9, 2, 2, 1, 1);

        pushButton_op12 = new QPushButton(gridLayoutWidget);
        pushButton_op12->setObjectName("pushButton_op12");
        sizePolicy.setHeightForWidth(pushButton_op12->sizePolicy().hasHeightForWidth());
        pushButton_op12->setSizePolicy(sizePolicy);
        pushButton_op12->setMinimumSize(QSize(60, 60));
        pushButton_op12->setMaximumSize(QSize(60, 60));

        gridLayout->addWidget(pushButton_op12, 5, 0, 1, 1);

        pushButton_op1 = new QPushButton(gridLayoutWidget);
        pushButton_op1->setObjectName("pushButton_op1");
        sizePolicy.setHeightForWidth(pushButton_op1->sizePolicy().hasHeightForWidth());
        pushButton_op1->setSizePolicy(sizePolicy);
        pushButton_op1->setMinimumSize(QSize(60, 60));
        pushButton_op1->setMaximumSize(QSize(60, 60));

        gridLayout->addWidget(pushButton_op1, 0, 0, 1, 1);

        pushButton_del1 = new QPushButton(gridLayoutWidget);
        pushButton_del1->setObjectName("pushButton_del1");
        sizePolicy.setHeightForWidth(pushButton_del1->sizePolicy().hasHeightForWidth());
        pushButton_del1->setSizePolicy(sizePolicy);
        pushButton_del1->setMinimumSize(QSize(60, 60));
        pushButton_del1->setMaximumSize(QSize(60, 60));

        gridLayout->addWidget(pushButton_del1, 0, 1, 1, 1);

        pushButton_n3 = new QPushButton(gridLayoutWidget);
        pushButton_n3->setObjectName("pushButton_n3");
        sizePolicy.setHeightForWidth(pushButton_n3->sizePolicy().hasHeightForWidth());
        pushButton_n3->setSizePolicy(sizePolicy);
        pushButton_n3->setMinimumSize(QSize(60, 60));
        pushButton_n3->setMaximumSize(QSize(60, 60));

        gridLayout->addWidget(pushButton_n3, 4, 2, 1, 1);

        pushButton_op9 = new QPushButton(gridLayoutWidget);
        pushButton_op9->setObjectName("pushButton_op9");
        sizePolicy.setHeightForWidth(pushButton_op9->sizePolicy().hasHeightForWidth());
        pushButton_op9->setSizePolicy(sizePolicy);
        pushButton_op9->setMinimumSize(QSize(60, 60));
        pushButton_op9->setMaximumSize(QSize(60, 60));

        gridLayout->addWidget(pushButton_op9, 3, 3, 1, 1);

        pushButton_op10 = new QPushButton(gridLayoutWidget);
        pushButton_op10->setObjectName("pushButton_op10");
        sizePolicy.setHeightForWidth(pushButton_op10->sizePolicy().hasHeightForWidth());
        pushButton_op10->setSizePolicy(sizePolicy);
        pushButton_op10->setMinimumSize(QSize(60, 60));
        pushButton_op10->setMaximumSize(QSize(60, 60));

        gridLayout->addWidget(pushButton_op10, 4, 3, 1, 1);

        pushButton_n0 = new QPushButton(gridLayoutWidget);
        pushButton_n0->setObjectName("pushButton_n0");
        sizePolicy.setHeightForWidth(pushButton_n0->sizePolicy().hasHeightForWidth());
        pushButton_n0->setSizePolicy(sizePolicy);
        pushButton_n0->setMinimumSize(QSize(60, 60));
        pushButton_n0->setMaximumSize(QSize(60, 60));

        gridLayout->addWidget(pushButton_n0, 5, 1, 1, 1);

        pushButton_op4 = new QPushButton(gridLayoutWidget);
        pushButton_op4->setObjectName("pushButton_op4");
        sizePolicy.setHeightForWidth(pushButton_op4->sizePolicy().hasHeightForWidth());
        pushButton_op4->setSizePolicy(sizePolicy);
        pushButton_op4->setMinimumSize(QSize(60, 60));
        pushButton_op4->setMaximumSize(QSize(60, 60));

        gridLayout->addWidget(pushButton_op4, 1, 0, 1, 1);

        pushButton_op8 = new QPushButton(gridLayoutWidget);
        pushButton_op8->setObjectName("pushButton_op8");
        sizePolicy.setHeightForWidth(pushButton_op8->sizePolicy().hasHeightForWidth());
        pushButton_op8->setSizePolicy(sizePolicy);
        pushButton_op8->setMinimumSize(QSize(60, 60));
        pushButton_op8->setMaximumSize(QSize(60, 60));

        gridLayout->addWidget(pushButton_op8, 2, 3, 1, 1);

        pushButton_op7 = new QPushButton(gridLayoutWidget);
        pushButton_op7->setObjectName("pushButton_op7");
        sizePolicy.setHeightForWidth(pushButton_op7->sizePolicy().hasHeightForWidth());
        pushButton_op7->setSizePolicy(sizePolicy);
        pushButton_op7->setMinimumSize(QSize(60, 60));
        pushButton_op7->setMaximumSize(QSize(60, 60));

        gridLayout->addWidget(pushButton_op7, 1, 3, 1, 1);

        pushButton_op6 = new QPushButton(gridLayoutWidget);
        pushButton_op6->setObjectName("pushButton_op6");
        sizePolicy.setHeightForWidth(pushButton_op6->sizePolicy().hasHeightForWidth());
        pushButton_op6->setSizePolicy(sizePolicy);
        pushButton_op6->setMinimumSize(QSize(60, 60));
        pushButton_op6->setMaximumSize(QSize(60, 60));

        gridLayout->addWidget(pushButton_op6, 1, 2, 1, 1);

        pushButton_n1 = new QPushButton(gridLayoutWidget);
        pushButton_n1->setObjectName("pushButton_n1");
        sizePolicy.setHeightForWidth(pushButton_n1->sizePolicy().hasHeightForWidth());
        pushButton_n1->setSizePolicy(sizePolicy);
        pushButton_n1->setMinimumSize(QSize(60, 60));
        pushButton_n1->setMaximumSize(QSize(60, 60));

        gridLayout->addWidget(pushButton_n1, 4, 0, 1, 1);

        pushButton_n7 = new QPushButton(gridLayoutWidget);
        pushButton_n7->setObjectName("pushButton_n7");
        sizePolicy.setHeightForWidth(pushButton_n7->sizePolicy().hasHeightForWidth());
        pushButton_n7->setSizePolicy(sizePolicy);
        pushButton_n7->setMinimumSize(QSize(60, 60));
        pushButton_n7->setMaximumSize(QSize(60, 60));

        gridLayout->addWidget(pushButton_n7, 2, 0, 1, 1);

        pushButton_n6 = new QPushButton(gridLayoutWidget);
        pushButton_n6->setObjectName("pushButton_n6");
        sizePolicy.setHeightForWidth(pushButton_n6->sizePolicy().hasHeightForWidth());
        pushButton_n6->setSizePolicy(sizePolicy);
        pushButton_n6->setMinimumSize(QSize(60, 60));
        pushButton_n6->setMaximumSize(QSize(60, 60));

        gridLayout->addWidget(pushButton_n6, 3, 2, 1, 1);

        pushButton_n2 = new QPushButton(gridLayoutWidget);
        pushButton_n2->setObjectName("pushButton_n2");
        sizePolicy.setHeightForWidth(pushButton_n2->sizePolicy().hasHeightForWidth());
        pushButton_n2->setSizePolicy(sizePolicy);
        pushButton_n2->setMinimumSize(QSize(60, 60));
        pushButton_n2->setMaximumSize(QSize(60, 60));

        gridLayout->addWidget(pushButton_n2, 4, 1, 1, 1);

        pushButton_eq = new QPushButton(gridLayoutWidget);
        pushButton_eq->setObjectName("pushButton_eq");
        sizePolicy.setHeightForWidth(pushButton_eq->sizePolicy().hasHeightForWidth());
        pushButton_eq->setSizePolicy(sizePolicy);
        pushButton_eq->setMinimumSize(QSize(60, 60));
        pushButton_eq->setMaximumSize(QSize(60, 60));

        gridLayout->addWidget(pushButton_eq, 5, 3, 1, 1);

        pushButton_n4 = new QPushButton(gridLayoutWidget);
        pushButton_n4->setObjectName("pushButton_n4");
        sizePolicy.setHeightForWidth(pushButton_n4->sizePolicy().hasHeightForWidth());
        pushButton_n4->setSizePolicy(sizePolicy);
        pushButton_n4->setMinimumSize(QSize(60, 60));
        pushButton_n4->setMaximumSize(QSize(60, 60));

        gridLayout->addWidget(pushButton_n4, 3, 0, 1, 1);

        pushButton_n10 = new QPushButton(gridLayoutWidget);
        pushButton_n10->setObjectName("pushButton_n10");
        sizePolicy.setHeightForWidth(pushButton_n10->sizePolicy().hasHeightForWidth());
        pushButton_n10->setSizePolicy(sizePolicy);
        pushButton_n10->setMinimumSize(QSize(60, 60));
        pushButton_n10->setMaximumSize(QSize(60, 60));

        gridLayout->addWidget(pushButton_n10, 5, 2, 1, 1);

        MyCalculator->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MyCalculator);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 396, 21));
        menuCalculator = new QMenu(menubar);
        menuCalculator->setObjectName("menuCalculator");
        menuAbout = new QMenu(menubar);
        menuAbout->setObjectName("menuAbout");
        MyCalculator->setMenuBar(menubar);
        statusbar = new QStatusBar(MyCalculator);
        statusbar->setObjectName("statusbar");
        MyCalculator->setStatusBar(statusbar);

        menubar->addAction(menuCalculator->menuAction());
        menubar->addAction(menuAbout->menuAction());
        menuCalculator->addAction(actionExit);

        retranslateUi(MyCalculator);

        QMetaObject::connectSlotsByName(MyCalculator);
    } // setupUi

    void retranslateUi(QMainWindow *MyCalculator)
    {
        MyCalculator->setWindowTitle(QCoreApplication::translate("MyCalculator", "MyCalculator", nullptr));
        actionExit->setText(QCoreApplication::translate("MyCalculator", "Exit", nullptr));
        pushButton_n5->setText(QCoreApplication::translate("MyCalculator", "5", nullptr));
        pushButton_del2->setText(QCoreApplication::translate("MyCalculator", "C", nullptr));
        pushButton_del3->setText(QCoreApplication::translate("MyCalculator", "<-", nullptr));
        pushButton_n8->setText(QCoreApplication::translate("MyCalculator", "8", nullptr));
        pushButton_op5->setText(QCoreApplication::translate("MyCalculator", "X^2", nullptr));
        pushButton_n9->setText(QCoreApplication::translate("MyCalculator", "9", nullptr));
        pushButton_op12->setText(QCoreApplication::translate("MyCalculator", "+/-", nullptr));
        pushButton_op1->setText(QCoreApplication::translate("MyCalculator", "%", nullptr));
        pushButton_del1->setText(QCoreApplication::translate("MyCalculator", "CE", nullptr));
        pushButton_n3->setText(QCoreApplication::translate("MyCalculator", "3", nullptr));
        pushButton_op9->setText(QCoreApplication::translate("MyCalculator", "-", nullptr));
        pushButton_op10->setText(QCoreApplication::translate("MyCalculator", "+", nullptr));
        pushButton_n0->setText(QCoreApplication::translate("MyCalculator", "0", nullptr));
        pushButton_op4->setText(QCoreApplication::translate("MyCalculator", "1/x", nullptr));
        pushButton_op8->setText(QCoreApplication::translate("MyCalculator", "*", nullptr));
        pushButton_op7->setText(QCoreApplication::translate("MyCalculator", "*/*", nullptr));
        pushButton_op6->setText(QCoreApplication::translate("MyCalculator", "Square Rt", nullptr));
        pushButton_n1->setText(QCoreApplication::translate("MyCalculator", "1", nullptr));
        pushButton_n7->setText(QCoreApplication::translate("MyCalculator", "7", nullptr));
        pushButton_n6->setText(QCoreApplication::translate("MyCalculator", "6", nullptr));
        pushButton_n2->setText(QCoreApplication::translate("MyCalculator", "2", nullptr));
        pushButton_eq->setText(QCoreApplication::translate("MyCalculator", "=", nullptr));
        pushButton_n4->setText(QCoreApplication::translate("MyCalculator", "4", nullptr));
        pushButton_n10->setText(QCoreApplication::translate("MyCalculator", ".", nullptr));
        menuCalculator->setTitle(QCoreApplication::translate("MyCalculator", "File", nullptr));
        menuAbout->setTitle(QCoreApplication::translate("MyCalculator", "About", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MyCalculator: public Ui_MyCalculator {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYCALCULATOR_H
