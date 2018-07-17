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

    ui->pushlabel_1->move(400,590+y);
    ui->pushlabel_2->move(400,530+y);
    ui->pushlabel_3->move(400,460+y);
    ui->pushlabel_4->move(400,390+y);
    ui->pushlabel_5->move(400,320+y);
    ui->pushlabel_6->move(400,250+y);
    ui->pushlabel_7->move(400,180+y);
    ui->pushlabel_8->move(400,110+y);
    ui->pushlabel_9->move(400,40+y);
    ui->pushlabel_10->move(400,0);

    ui->pushlabel_1->setIcon(QIcon(":/new/prefix1/1"));
    ui->pushlabel_2->setIcon(QIcon(":/new/prefix1/2"));
    ui->pushlabel_3->setIcon(QIcon(":/new/prefix1/3"));
    ui->pushlabel_4->setIcon(QIcon(":/new/prefix1/4"));
    ui->pushlabel_5->setIcon(QIcon(":/new/prefix1/5"));
    ui->pushlabel_6->setIcon(QIcon(":/new/prefix1/6"));
    ui->pushlabel_7->setIcon(QIcon(":/new/prefix1/7"));
    ui->pushlabel_8->setIcon(QIcon(":/new/prefix1/8"));
    ui->pushlabel_9->setIcon(QIcon(":/new/prefix1/9"));
    ui->pushlabel_10->setIcon(QIcon(":/new/prefix1/10"));

    ui->pushlabel_1->setIconSize(QSize(35,45));
    ui->pushlabel_2->setIconSize(QSize(38,45));
    ui->pushlabel_3->setIconSize(QSize(38,45));
    ui->pushlabel_4->setIconSize(QSize(38,45));
    ui->pushlabel_5->setIconSize(QSize(42,45));
    ui->pushlabel_6->setIconSize(QSize(38,45));
    ui->pushlabel_7->setIconSize(QSize(42,45));
    ui->pushlabel_8->setIconSize(QSize(35,45));
    ui->pushlabel_9->setIconSize(QSize(35,45));
    ui->pushlabel_10->setIconSize(QSize(45,45));

    ui->pushlabel_1->setFixedSize(25,40);
    ui->pushlabel_2->setFixedSize(31,43);
    ui->pushlabel_3->setFixedSize(30,43);
    ui->pushlabel_4->setFixedSize(35,40);
    ui->pushlabel_5->setFixedSize(30,40);
    ui->pushlabel_6->setFixedSize(35,40);
    ui->pushlabel_7->setFixedSize(32,40);
    ui->pushlabel_8->setFixedSize(35,40);
    ui->pushlabel_9->setFixedSize(30,40);
    ui->pushlabel_10->setFixedSize(48,40);





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
    ui->pushButton_18->move(350,590+x);

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

    ui->pushButton->setIcon(QIcon(":/new/prefix1/down"));
    ui->pushButton_3->setIcon(QIcon(":/new/prefix1/down"));
    ui->pushButton_5->setIcon(QIcon(":/new/prefix1/down"));
    ui->pushButton_7->setIcon(QIcon(":/new/prefix1/down"));
    ui->pushButton_9->setIcon(QIcon(":/new/prefix1/down"));
    ui->pushButton_11->setIcon(QIcon(":/new/prefix1/down"));
    ui->pushButton_13->setIcon(QIcon(":/new/prefix1/down"));
    ui->pushButton_15->setIcon(QIcon(":/new/prefix1/down"));
    ui->pushButton_17->setIcon(QIcon(":/new/prefix1/down"));

    ui->pushButton->setIconSize(QSize(30,20));
    ui->pushButton_3->setIconSize(QSize(30,20));
    ui->pushButton_5->setIconSize(QSize(30,20));
    ui->pushButton_7->setIconSize(QSize(30,20));
    ui->pushButton_9->setIconSize(QSize(30,20));
    ui->pushButton_11->setIconSize(QSize(30,20));
    ui->pushButton_13->setIconSize(QSize(30,20));
    ui->pushButton_15->setIconSize(QSize(30,20));
    ui->pushButton_17->setIconSize(QSize(30,20));






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


    connect(ui->pushButton,SIGNAL(clicked(bool)),SLOT(turn()));
    connect(ui->pushButton_2,SIGNAL(clicked(bool)),SLOT(turn()));
    connect(ui->pushButton_3,SIGNAL(clicked(bool)),SLOT(turn()));
    connect(ui->pushButton_4,SIGNAL(clicked(bool)),SLOT(turn()));
    connect(ui->pushButton_5,SIGNAL(clicked(bool)),SLOT(turn()));
    connect(ui->pushButton_6,SIGNAL(clicked(bool)),SLOT(turn()));
    connect(ui->pushButton_7,SIGNAL(clicked(bool)),SLOT(turn()));
    connect(ui->pushButton_8,SIGNAL(clicked(bool)),SLOT(turn()));
    connect(ui->pushButton_9,SIGNAL(clicked(bool)),SLOT(turn()));
    connect(ui->pushButton_10,SIGNAL(clicked(bool)),SLOT(turn()));
    connect(ui->pushButton_11,SIGNAL(clicked(bool)),SLOT(turn()));
    connect(ui->pushButton_12,SIGNAL(clicked(bool)),SLOT(turn()));
    connect(ui->pushButton_13,SIGNAL(clicked(bool)),SLOT(turn()));
    connect(ui->pushButton_14,SIGNAL(clicked(bool)),SLOT(turn()));
    connect(ui->pushButton_15,SIGNAL(clicked(bool)),SLOT(turn()));
    connect(ui->pushButton_16,SIGNAL(clicked(bool)),SLOT(turn()));
    connect(ui->pushButton_17,SIGNAL(clicked(bool)),SLOT(turn()));
    connect(ui->pushButton_18,SIGNAL(clicked(bool)),SLOT(turn()));

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::turn(){

      QPushButton* sq_button = (QPushButton*) sender();

                    int btn=sq_button->y();
                    int lift_1 =ui->pushlift_1->y();
                    int lift_2 =ui->pushlift_2->y();
                    int lift_3 =ui->pushlift_3->y();
                if(btn>lift_1){
                    up_1=true;
                    down_1=false;
                }else{
                    up_1=false;
                    down_1=true;
                }
                if(btn>lift_2){
                    up_2=true;
                    down_2=false;
                }else{
                    up_2=false;
                    down_2=true;
                }
                if(btn>lift_3){
                    up_3=true;
                    down_3=false;
                }else{
                    up_3=false;
                    down_3=true;
                }

                if((btn-lift_1)<((btn-lift_2)||(btn-lift_3))){
                    pushing_one_lift();

                }else
                    if((btn-lift_2)<((btn-lift_1)||(btn-lift_3))){

                        pushing_two_lift();
                    }else
                        if((btn-lift_3)<((btn-lift_2)||(btn-lift_1))){

                            pushing_three_lift();

                        }






}


void MainWindow::pushing_one_lift(){
    QPushButton* sq_button = (QPushButton*) sender();
      QRect geo=sq_button->geometry();
      int x =ui->pushlift_1->x();
      geo.setX(x);
     // data=((600-sq_button->y())/60)*2000;
       //       if((sq_button->y()>0)&&(sq_button->y()<60)){
              data=2000;
//}
    QPropertyAnimation *animation =new QPropertyAnimation(ui->pushlift_1,"geometry");
    animation->setDuration(data);
    animation->setEasingCurve(QEasingCurve::Linear);
    animation->setEndValue(QRect(geo));
    animation->start(QAbstractAnimation::DeleteWhenStopped);

}

void MainWindow::pushing_two_lift(){
    QPushButton* sq_button = (QPushButton*) sender();
      QRect geo=sq_button->geometry();
      int x =ui->pushlift_2->x();
      geo.setX(x);
  //    data=((600-sq_button->y())/60)*2000;
    //          if((sq_button->y()>0)&&(sq_button->y()<60)){
              data=2000;
//}

    QPropertyAnimation *animation =new QPropertyAnimation(ui->pushlift_2,"geometry");
    animation->setDuration(data);
    animation->setEasingCurve(QEasingCurve::OutQuad);
    animation->setEndValue(QRect(geo));
    animation->start(QAbstractAnimation::DeleteWhenStopped);

}

void MainWindow::pushing_three_lift(){
    QPushButton* sq_button = (QPushButton*) sender();
      QRect geo=sq_button->geometry();
      int x =ui->pushlift_3->x();
      geo.setX(x);
    //  data=((600-sq_button->y())/60)*2000;
      //        if((sq_button->y()>0)&&(sq_button->y()<60)){
              data=2000;
//}


    QPropertyAnimation *animation =new QPropertyAnimation(ui->pushlift_3,"geometry");
    animation->setDuration(data);
    animation->setEasingCurve(QEasingCurve::OutQuad);
    animation->setEndValue(QRect(geo));
    animation->start(QAbstractAnimation::DeleteWhenStopped);

}
