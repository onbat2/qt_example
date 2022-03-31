#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    if(ui -> radioButton -> isChecked()){
        QMessageBox::information(this,"Status","Love the moment with you");
    }
    if(ui -> radioButton_2 -> isChecked()){
        QMessageBox::information(this,"Status","Hate the life without you");
    }
}

