#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QLabel>
#include "curse.h"

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = 0);
    ~MainWindow();

private:
    QLabel *labelx;
    QLabel *labely;

    curse m_xy;

private slots:
    void slotxy(int nx, int ny);
};

#endif // MAINWINDOW_H
