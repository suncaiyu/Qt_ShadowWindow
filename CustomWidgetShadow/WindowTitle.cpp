#include "WindowTitle.h"
#include "ui_WindowTitle.h"

WindowTitle::WindowTitle(QWidget *parent) :
      QWidget(parent),
      ui(new Ui::WindowTitle)
{
    ui->setupUi(this);
}

WindowTitle::~WindowTitle()
{
    delete ui;
}
