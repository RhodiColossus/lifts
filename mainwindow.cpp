#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    pushlift_1=new QPushButton;
    pushlift_2=new QPushButton;
    pushlift_3=new QPushButton;

    ui->setupUi(this);



    pushlift_1->move(50,600);
    pushlift_2->move(150,600);
    pushlift_3->move(250,600);

    ui->label->move(320,585);
    ui->label_2->move(320,530);
    ui->label_3->move(320,460);
    ui->label_4->move(320,390);
    ui->label_5->move(320,320);
    ui->label_6->move(320,250);
    ui->label_7->move(320,180);
    ui->label_8->move(320,110);
    ui->label_9->move(320,40);
    ui->label_10->move(320,0);


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

    ui->pushButton_18->setIcon(QIcon(":/new/prefix1/up"));
    ui->pushButton_18->setIconSize(QSize(70,100));


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





    pushlift_1->setFixedSize(35,50);
    pushlift_1->setIcon(QIcon(":/new/prefix1/close"));
    pushlift_1->setIconSize(QSize(35,50));

    pushlift_2->setFixedSize(35,50);
    pushlift_2->setIcon(QIcon(":/new/prefix1/close"));
    pushlift_2->setIconSize(QSize(35,50));

    pushlift_3->setFixedSize(35,50);
    pushlift_3->setIcon(QIcon(":/new/prefix1/close"));
    pushlift_3->setIconSize(QSize(35,50));


}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::pushing_one_lift(){
    QPushButton* sq_button = (QPushButton*) sender();
      QRect geo=sq_button->geometry();
    QPropertyAnimation *animation =new QPropertyAnimation(pushlift_1,"geometry");
    animation->setDuration(2000);
    animation->setEasingCurve(QEasingCurve::InOutQuart);
    animation->setEndValue(QRect(geo));
    animation->start(QAbstractAnimation::DeleteWhenStopped);

}

void MainWindow::pushing_two_lift(){
    QPushButton* sq_button = (QPushButton*) sender();
      QRect geo=sq_button->geometry();
    QPropertyAnimation *animation =new QPropertyAnimation(pushlift_2,"geometry");
    animation->setDuration(2000);
    animation->setEasingCurve(QEasingCurve::InOutQuart);
    animation->setEndValue(QRect(geo));
    animation->start(QAbstractAnimation::DeleteWhenStopped);

}

void MainWindow::pushing_three_lift(){
    QPushButton* sq_button = (QPushButton*) sender();
      QRect geo=sq_button->geometry();
    QPropertyAnimation *animation =new QPropertyAnimation(pushlift_3,"geometry");
    animation->setDuration(2000);
    animation->setEasingCurve(QEasingCurve::InOutQuart);
    animation->setEndValue(QRect(geo));
    animation->start(QAbstractAnimation::DeleteWhenStopped);

}
