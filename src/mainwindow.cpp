#include "mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    setWindowFlags(Qt::FramelessWindowHint | Qt::WindowStaysOnTopHint | Qt::Tool);
    setAttribute(Qt::WA_TranslucentBackground);
    move(1820,80);
    labelx = new QLabel("X",this);
    labely = new QLabel("Y",this);
    labelx->setStyleSheet("font: 150 30pt \"ºÚÌå\";color: #00ae9d;");
    labely->setStyleSheet("font: 150 30pt \"ºÚÌå\";color: #00ae9d;");
    labelx->setGeometry(0,0,100,40);
    labely->setGeometry(0,43,100,40);
    labelx->show();
    labely->show();

    connect(&m_xy, SIGNAL(sigxy(int,int)), this, SLOT(slotxy(int,int)));
    m_xy.start();
}

MainWindow::~MainWindow()
{

}

void MainWindow::slotxy(int nx, int ny)
{
    labelx->setText(QString::number(nx));
    labely->setText(QString::number(ny));
}

