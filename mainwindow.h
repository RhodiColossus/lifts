#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPropertyAnimation>
#include <QRect>
#include <QPoint>

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

    void pushing_one_lift();
    void pushing_two_lift();
    void pushing_three_lift();

private:
    Ui::MainWindow *ui;

public slots:
    void turn();

};

#endif // MAINWINDOW_H
