#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->actionxiejizikongzhitai->setIcon(QIcon(":/1.jpg"));
}

MainWindow::~MainWindow()
{
    delete ui;
}

