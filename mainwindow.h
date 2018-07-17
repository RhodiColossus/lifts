#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPropertyAnimation>
#include <QRect>
#include <QPoint>
#include <QPushButton>
#include <cmath>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

    int x=40;
    int y=20;
    int data=2;
    bool up_1 =false;
    bool down_1 =false;
    bool wait_1 = false;
    bool up_2 =false;
    bool down_2 =false;
    bool wait_2 = false;
    bool up_3 =false;
    bool down_3 =false;
    bool wait_3 = false;

    void pushingup_one_lift(QRect geo);
    void pushingup_two_lift(QRect geo);
    void pushingup_three_lift(QRect geo);
    void pushingdown_one_lift(QRect geo);
    void pushingdown_two_lift(QRect geo);
    void pushingdown_three_lift(QRect geo);

private:
    Ui::MainWindow *ui;

public slots:
    void turn();


};

#endif // MAINWINDOW_H
