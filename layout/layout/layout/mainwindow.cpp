#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>
#include <QProcess>
#include<QMessageBox>
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

}


void MainWindow::closeEvent(QCloseEvent *event)
{
    QMessageBox msgBox;
      msgBox.setText("文档内容已经改变");
      msgBox.setInformativeText("是否要保存内容?");
      msgBox.setStandardButtons(QMessageBox::Save | QMessageBox::Discard | QMessageBox::Cancel);
      msgBox.setDefaultButton(QMessageBox::Save);
      int ret = msgBox.exec();

      switch (ret) {
        case QMessageBox::Save:
            // Save was clicked
            break;
        case QMessageBox::Discard:
            // Don't Save was clicked
            break;
        case QMessageBox::Cancel:

            break;
        default:
            // should never be reached
            break;
      }

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    QProcess *process = new QProcess(this);

    process->start(ui->lineEdit->text().trimmed());


}

void MainWindow::on_lineEdit_returnPressed()
{
    QProcess *process = new QProcess;

    process->start(ui->lineEdit->text().trimmed());

    this->close();
}
