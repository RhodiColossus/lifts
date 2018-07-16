#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{


    ui->setupUi(this);



    ui->pushlift_1->move(50,600);
    ui->pushlift_2->move(150,600);
    ui-> pushlift_3->move(250,600);

    ui->pushlabel_1->move(400,585+y);
    ui->pushlabel_2->move(400,530+y);
    ui->pushlabel_3->move(400,460+y);
    ui->pushlabel_4->move(400,390+y);
    ui->pushlabel_5->move(400,320+y);
    ui->pushlabel_6->move(400,250+y);
    ui->pushlabel_7->move(400,180+y);
    ui->pushlabel_8->move(400,110+y);
    ui->pushlabel_9->move(400,40+y);
    ui->pushlabel_10->move(400,0);

    ui->pushlabel_1->setFixedSize(40,40);
    ui->pushlabel_2->setFixedSize(40,40);
    ui->pushlabel_3->setFixedSize(40,40);
    ui->pushlabel_4->setFixedSize(40,40);
    ui->pushlabel_5->setFixedSize(40,40);
    ui->pushlabel_6->setFixedSize(40,40);
    ui->pushlabel_7->setFixedSize(40,40);
    ui->pushlabel_8->setFixedSize(40,40);
    ui->pushlabel_9->setFixedSize(40,40);
    ui->pushlabel_10->setFixedSize(40,40);





    ui->pushButton->move(350,0);
    ui->pushButton_2->move(350,20+x);
    ui->pushButton_3->move(350,40+x);
    ui->pushButton_4->move(350,90+x);
    ui->pushButton_5->move(350,110+x);
    ui->pushButton_6->move(350,160+x);
    ui->pushButton_7->move(350,180+x);
    ui->pushButton_8->move(350,230+x);
    ui->pushButton_9->move(350,250+x);
    ui->pushButton_10->move(350,300+x);
    ui->pushButton_11->move(350,320+x);
    ui->pushButton_12->move(350,370+x);
    ui->pushButton_13->move(350,390+x);
    ui->pushButton_14->move(350,440+x);
    ui->pushButton_15->move(350,460+x);
    ui->pushButton_16->move(350,510+x);
    ui->pushButton_17->move(350,530+x);
    ui->pushButton_18->move(350,585+x);

    ui->pushButton_2->setIcon(QIcon(":/new/prefix1/up"));
    ui->pushButton_4->setIcon(QIcon(":/new/prefix1/up"));
    ui->pushButton_6->setIcon(QIcon(":/new/prefix1/up"));
    ui->pushButton_8->setIcon(QIcon(":/new/prefix1/up"));
    ui->pushButton_10->setIcon(QIcon(":/new/prefix1/up"));
    ui->pushButton_12->setIcon(QIcon(":/new/prefix1/up"));
    ui->pushButton_14->setIcon(QIcon(":/new/prefix1/up"));
    ui->pushButton_16->setIcon(QIcon(":/new/prefix1/up"));
    ui->pushButton_18->setIcon(QIcon(":/new/prefix1/up"));

    ui->pushButton_2->setIconSize(QSize(30,20));
    ui->pushButton_4->setIconSize(QSize(30,20));
    ui->pushButton_6->setIconSize(QSize(30,20));
    ui->pushButton_8->setIconSize(QSize(30,20));
    ui->pushButton_10->setIconSize(QSize(30,20));
    ui->pushButton_12->setIconSize(QSize(30,20));
    ui->pushButton_14->setIconSize(QSize(30,20));
    ui->pushButton_16->setIconSize(QSize(30,20));
    ui->pushButton_18->setIconSize(QSize(30,20));






    ui->pushButton->setFixedSize(30,20);
    ui->pushButton_2->setFixedSize(30,20);
    ui->pushButton_3->setFixedSize(30,20);
    ui->pushButton_4->setFixedSize(30,20);
    ui->pushButton_5->setFixedSize(30,20);
    ui->pushButton_6->setFixedSize(30,20);
    ui->pushButton_7->setFixedSize(30,20);
    ui->pushButton_8->setFixedSize(30,20);
    ui->pushButton_9->setFixedSize(30,20);
    ui->pushButton_10->setFixedSize(30,20);
    ui->pushButton_11->setFixedSize(30,20);
    ui->pushButton_12->setFixedSize(30,20);
    ui->pushButton_13->setFixedSize(30,20);
    ui->pushButton_14->setFixedSize(30,20);
    ui->pushButton_15->setFixedSize(30,20);
    ui->pushButton_16->setFixedSize(30,20);
    ui->pushButton_17->setFixedSize(30,20);
    ui->pushButton_18->setFixedSize(30,20);





    ui->pushlift_1->setFixedSize(35,50);
    ui->pushlift_1->setIcon(QIcon(":/new/prefix1/close"));
    ui->pushlift_1->setIconSize(QSize(35,50));

    ui->pushlift_2->setFixedSize(35,50);
    ui->pushlift_2->setIcon(QIcon(":/new/prefix1/close"));
    ui->pushlift_2->setIconSize(QSize(35,50));

    ui->pushlift_3->setFixedSize(35,50);
    ui->pushlift_3->setIcon(QIcon(":/new/prefix1/close"));
    ui->pushlift_3->setIconSize(QSize(35,50));


}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::pushing_one_lift(){
    QPushButton* sq_button = (QPushButton*) sender();
      QRect geo=sq_button->geometry();
    QPropertyAnimation *animation =new QPropertyAnimation(ui->pushlift_1,"geometry");
    animation->setDuration(2000);
    animation->setEasingCurve(QEasingCurve::InOutQuart);
    animation->setEndValue(QRect(geo));
    animation->start(QAbstractAnimation::DeleteWhenStopped);

}

void MainWindow::pushing_two_lift(){
    QPushButton* sq_button = (QPushButton*) sender();
      QRect geo=sq_button->geometry();
    QPropertyAnimation *animation =new QPropertyAnimation(ui->pushlift_2,"geometry");
    animation->setDuration(2000);
    animation->setEasingCurve(QEasingCurve::InOutQuart);
    animation->setEndValue(QRect(geo));
    animation->start(QAbstractAnimation::DeleteWhenStopped);

}

void MainWindow::pushing_three_lift(){
    QPushButton* sq_button = (QPushButton*) sender();
      QRect geo=sq_button->geometry();
    QPropertyAnimation *animation =new QPropertyAnimation(ui->pushlift_3,"geometry");
    animation->setDuration(2000);
    animation->setEasingCurve(QEasingCurve::InOutQuart);
    animation->setEndValue(QRect(geo));
    animation->start(QAbstractAnimation::DeleteWhenStopped);

}
