#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPropertyAnimation>
#include <QPushButton>
#include <QRect>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

    int x=30;
 QPushButton *pushlift_1 ;
 QPushButton *pushlift_2 ;
 QPushButton *pushlift_3 ;





private slots:
    void on_pushButton_9_clicked();

    void on_pushButton_clicked();

private:
    Ui::MainWindow *ui;

public slots:
    void pushing_one_lift();
    void pushing_two_lift();
    void pushing_three_lift();




};

#endif // MAINWINDOW_H
