#include "CustomShadow3.h"
#include "ui_CustomShadow3.h"
#include "MakeShadowPixmap.h"
#include <QVBoxLayout>
#include <QPainter>
// 最复杂，但是应该是最自由的方案，调节阴影大小时，只需要调节shadowSize的大小即可。边框颜色去头文件里面改

CustomShadow3::CustomShadow3(QWidget *parent) :
      QWidget(parent),
      ui(new Ui::CustomShadow3)
{
    ui->setupUi(this);
    resize(400, 300);
    setAttribute(Qt::WA_TranslucentBackground);
    setWindowFlags(Qt::FramelessWindowHint);
    setContentsMargins(0, 0, 0, 0);

    QVBoxLayout *pLayout = new QVBoxLayout(this);
    pLayout->setContentsMargins(0, 0, 0, 0);
    pLayout->setSpacing(0);
    int shadowSize = 15;
    ShadowWidget *pShadowWidget = new ShadowWidget(shadowSize, this);
    pShadowWidget->setContentsMargins(shadowSize, shadowSize, shadowSize, shadowSize);
    pLayout->addWidget(pShadowWidget);

    QLayout* rootLayout = new QBoxLayout(QBoxLayout::TopToBottom);
    pShadowWidget->setLayout(rootLayout);
    rootLayout->setContentsMargins(0, 0, 0, 0);
    rootLayout->setSpacing(0);

    QWidget* shadowClientWidget = new QWidget(pShadowWidget);
    rootLayout->addWidget(shadowClientWidget);
    //
    QVBoxLayout* shadowClientLayout = new QVBoxLayout();
    shadowClientLayout->setContentsMargins(0, 0, 0, 0);
    shadowClientLayout->setSpacing(0);
    shadowClientWidget->setLayout(shadowClientLayout);
    shadowClientWidget->setAutoFillBackground(true);
    shadowClientWidget->setCursor(QCursor(Qt::ArrowCursor));

    //
//    QWidget *clientWidget = new QWidget(shadowClientWidget);
//    shadowClientLayout->addWidget(clientWidget);

//    //
//    QVBoxLayout *clientLayout = new QVBoxLayout();
//    clientWidget->setLayout(clientLayout);
//    //
//    clientLayout->setSpacing(0);
//    clientLayout->setContentsMargins(0, 0, 0, 0);
}

CustomShadow3::~CustomShadow3()
{
    delete ui;
}

void CustomShadow3::paintEvent(QPaintEvent *e)
{
//    QPainter paint(this);
//    QRect r = rect();
//    r.adjust(15, 15, -1, -1);
//    paint.drawRect(r);
}
