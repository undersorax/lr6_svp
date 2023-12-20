#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_3_clicked()
{
    QMessageBox::information(this, "Information", "Your advertisement could be here");
}

void MainWindow::on_pushButton_2_clicked()
{
    QMessageBox::warning(this, "Warning", "I warn you");
}

void MainWindow::on_pushButton_clicked()
{
    QMessageBox::critical(this, "Error occured", "Error 3: \"text\"");
}

