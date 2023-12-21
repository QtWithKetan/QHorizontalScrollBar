#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    ui->horizontalScrollBar->setMinimum(0);
    ui->horizontalScrollBar->setMaximum(500);
    ui->horizontalScrollBar->setPageStep(50);
    ui->horizontalScrollBar->setSingleStep(5);

    ui->horizontalScrollBar_2->setMinimum(0);
    ui->horizontalScrollBar_2->setMaximum(500);
    ui->horizontalScrollBar_2->setPageStep(50);
    ui->horizontalScrollBar_2->setSingleStep(5);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_horizontalScrollBar_valueChanged(int value)
{
    qDebug() << value;
    ui->label->setText(QString::number(value));
}


void MainWindow::on_horizontalScrollBar_2_valueChanged(int value)
{
    qDebug() << value;
    ui->label_2->setText(QString::number(value));
}

