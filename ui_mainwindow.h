/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QScrollBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QScrollBar *horizontalScrollBar;
    QLabel *label;
    QScrollBar *horizontalScrollBar_2;
    QLabel *label_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        horizontalScrollBar = new QScrollBar(centralwidget);
        horizontalScrollBar->setObjectName(QString::fromUtf8("horizontalScrollBar"));
        horizontalScrollBar->setGeometry(QRect(20, 20, 341, 41));
        horizontalScrollBar->setStyleSheet(QString::fromUtf8("QScrollBar::horizontal\n"
"{\n"
"	background-color:rgb(0,255,0);\n"
"	margin:5px 50px 5px 50px;\n"
"	border:1px transparent;\n"
"	border-radius:15px;\n"
"}\n"
"QScrollBar::handle::horizontal\n"
"{\n"
"	background-color:rgb(255,0,0);\n"
"	border-radius:10px;\n"
"}\n"
"QScrollBar::sub-line::horizontal\n"
"{\n"
"	margin:0px 3px 0px 0px;\n"
"	height:40px;\n"
"	width:40px;\n"
"	subcontrol-position:left;\n"
"	subcontrol-origin:margin;\n"
"}\n"
"QScrollBar::sub-line::horizontal:hover, QScrollBar::sub-line::horizontal:on\n"
"{\n"
"	margin:0px 3px 0px 0px;\n"
"	height:40px;\n"
"	width:40px;\n"
"	subcontrol-position:left;\n"
"	subcontrol-origin:margin;\n"
"	background-color:rgb(255,0,0);\n"
"}\n"
"QScrollBar::add-line::horizontal\n"
"{\n"
"	margin:0px 3px 0px 0px;\n"
"	height:40px;\n"
"	width:40px;\n"
"	subcontrol-position:right;\n"
"	subcontrol-origin:margin;\n"
"}\n"
"QScrollBar::add-line::horizontal:hover, QScrollBar::add-line::horizontal:on\n"
"{\n"
"	margin:0px 3px 0px 0px;\n"
"	height:40px;\n"
"	width:40px;\n"
"	s"
                        "ubcontrol-position:right;\n"
"	subcontrol-origin:margin;\n"
"	background-color:rgb(255,0,0);\n"
"}\n"
"QScrollBar::add-page:horizontal,QScrollBar::sub-page:horizontal\n"
"{\n"
"	background:none;\n"
"}\n"
""));
        horizontalScrollBar->setMaximum(500);
        horizontalScrollBar->setSingleStep(5);
        horizontalScrollBar->setPageStep(100);
        horizontalScrollBar->setOrientation(Qt::Horizontal);
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(380, 20, 49, 41));
        QFont font;
        font.setPointSize(15);
        font.setBold(true);
        label->setFont(font);
        horizontalScrollBar_2 = new QScrollBar(centralwidget);
        horizontalScrollBar_2->setObjectName(QString::fromUtf8("horizontalScrollBar_2"));
        horizontalScrollBar_2->setGeometry(QRect(20, 110, 341, 41));
        horizontalScrollBar_2->setStyleSheet(QString::fromUtf8("QScrollBar::horizontal\n"
"{\n"
"	background-color:rgb(0,255,0);\n"
"	margin:5px 50px 5px 50px;\n"
"	border:1px transparent;\n"
"	border-radius:15px;\n"
"}\n"
"QScrollBar::handle::horizontal\n"
"{\n"
"	background-color:rgb(255,0,0);\n"
"	border-radius:10px;\n"
"}\n"
"QScrollBar::sub-line::horizontal\n"
"{\n"
"	margin:0px 3px 0px 0px;\n"
"	height:40px;\n"
"	width:40px;\n"
"	subcontrol-position:left;\n"
"	subcontrol-origin:margin;\n"
"}\n"
"QScrollBar::sub-line::horizontal:hover, QScrollBar::sub-line::horizontal:on\n"
"{\n"
"	margin:0px 3px 0px 0px;\n"
"	height:40px;\n"
"	width:40px;\n"
"	subcontrol-position:left;\n"
"	subcontrol-origin:margin;\n"
"	background-color:rgb(255,0,0);\n"
"}\n"
"QScrollBar::add-line::horizontal\n"
"{\n"
"	margin:0px 3px 0px 0px;\n"
"	height:40px;\n"
"	width:40px;\n"
"	subcontrol-position:right;\n"
"	subcontrol-origin:margin;\n"
"}\n"
"QScrollBar::add-line::horizontal:hover, QScrollBar::add-line::horizontal:on\n"
"{\n"
"	margin:0px 3px 0px 0px;\n"
"	height:40px;\n"
"	width:40px;\n"
"	s"
                        "ubcontrol-position:right;\n"
"	subcontrol-origin:margin;\n"
"	background-color:rgb(255,0,0);\n"
"}\n"
"QScrollBar::add-page:horizontal,QScrollBar::sub-page:horizontal\n"
"{\n"
"	background:none;\n"
"}\n"
""));
        horizontalScrollBar_2->setMaximum(500);
        horizontalScrollBar_2->setSingleStep(5);
        horizontalScrollBar_2->setPageStep(100);
        horizontalScrollBar_2->setOrientation(Qt::Horizontal);
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(380, 100, 49, 41));
        label_2->setFont(font);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);
        QObject::connect(horizontalScrollBar, SIGNAL(valueChanged(int)), horizontalScrollBar_2, SLOT(setValue(int)));
        QObject::connect(horizontalScrollBar_2, SIGNAL(valueChanged(int)), horizontalScrollBar, SLOT(setValue(int)));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
