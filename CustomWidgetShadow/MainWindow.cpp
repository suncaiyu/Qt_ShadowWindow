#include "MainWindow.h"
#include "ui_MainWindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
      , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setWindowFlags(Qt::FramelessWindowHint | Qt::WindowSystemMenuHint | Qt::WindowMinMaxButtonsHint);
}

MainWindow::~MainWindow()
{
    delete ui;
}

