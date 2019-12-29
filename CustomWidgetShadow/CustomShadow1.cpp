#include "CustomShadow1.h"
#include "ui_CustomShadow1.h"
#include <QGraphicsDropShadowEffect>
#include <QHBoxLayout>
//QGraphicsDropShadowEffect类提供了一个投影效果。可以使用setColor()函数修改投影的颜色。可以使用setOffset()函数修改阴影偏移量，使用setBlurRadius()函数修改阴影的半径。默认情况下，投影是半透明的深灰色(QColor(63, 63, 63, 180)阴影，模糊半径为1，向右下角偏移8个像素。将一个QWidget嵌入到另一个QWidget中，被嵌入的QWidget背景透明。

CustomShadow1::CustomShadow1(QWidget *parent) :
      QWidget(parent),
      ui(new Ui::CustomShadow1)
{
    ui->setupUi(this);
    setWindowFlags(windowFlags() | Qt::FramelessWindowHint);
    setAttribute(Qt::WA_TranslucentBackground);

    QWidget *pCentralWidget = new QWidget(this);
    pCentralWidget->setStyleSheet("background-color: white");
    QHBoxLayout *pLayout = new QHBoxLayout(this);
    pLayout->addWidget(pCentralWidget);
    pLayout->setContentsMargins(20, 20, 20, 20);

    QGraphicsDropShadowEffect *pEffect = new QGraphicsDropShadowEffect(pCentralWidget);
    pEffect->setOffset(1, 1);
    pEffect->setColor(QColor(QStringLiteral("black")));
    pEffect->setBlurRadius(30);
    pCentralWidget->setGraphicsEffect(pEffect);
}

CustomShadow1::~CustomShadow1()
{
    delete ui;
}
