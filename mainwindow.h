#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPropertyAnimation>
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
    int y=15;

private:
    Ui::MainWindow *ui;

public slots:
    void pushing_one_lift();
    void pushing_two_lift();
    void pushing_three_lift();
};

#endif // MAINWINDOW_H
