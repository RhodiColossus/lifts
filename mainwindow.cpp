#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->pushLift_1->move(50,420);
    ui->pushLift_2->move(150,420);
    ui->pushLift_3->move(250,420);

    ui->pushLift_1->setFixedSize(35,50);
    ui->pushLift_1->setIcon(QIcon(":/new/prefix1/close"));
    ui->pushLift_1->setIconSize(QSize(35,50));

    ui->pushLift_2->setFixedSize(35,50);
    ui->pushLift_2->setIcon(QIcon(":/new/prefix1/close"));
    ui->pushLift_2->setIconSize(QSize(35,50));

    ui->pushLift_3->setFixedSize(35,50);
    ui->pushLift_3->setIcon(QIcon(":/new/prefix1/close"));
    ui->pushLift_3->setIconSize(QSize(35,50));


}

MainWindow::~MainWindow()
{
    delete ui;
}
