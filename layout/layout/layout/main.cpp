#include "mainwindow.h"
#include <QApplication>
#include "wang.h"
#include<QDebug>
#include<QLabel>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    Wang *label1 = new Wang;
    Wang *label2 = new Wang();

    qDebug()<<label1->a;
    qDebug()<<label2->a;

   // Wang w1=2;
  //  Wang w2 = w1;
  //  Wang w3 = Wang();

    w.show();
    return a.exec();
}
