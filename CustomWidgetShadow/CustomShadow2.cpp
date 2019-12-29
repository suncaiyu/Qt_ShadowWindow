#include "CustomShadow2.h"
#include "ui_CustomShadow2.h"
#include <QPainter>
#include <qdrawutil.h>
#include <QRect>

//我个人觉得最方便的方法，但是需要提前准备图片，而且不能更改，要改图片
CustomShadow2::CustomShadow2(QWidget *parent) :
      QWidget(parent),
      ui(new Ui::CustomShadow2)
{
    ui->setupUi(this);
    resize(1000, 800);
    setWindowFlags(Qt::FramelessWindowHint);
    setAttribute(Qt::WA_TranslucentBackground);
}

CustomShadow2::~CustomShadow2()
{
    delete ui;
}

void CustomShadow2::paintEvent(QPaintEvent *event)
{
    Q_UNUSED(event)

    QPainter painter(this);
    QPixmap pixmap(":/client-shadow.png");
    qDrawBorderPixmap(&painter, this->rect(), QMargins(8, 8, 8, 8), pixmap);
    // 绘制中心区域的背景色（不然会是透明的）
    QRect rect(this->rect().x() + 8,
               this->rect().y() + 8,
               this->rect().width() - 16,
               this->rect().height() - 16);
    painter.fillRect(rect, QColor(255, 255, 255));
    QRect r = this->rect();
    r.adjust(0, 0, -1, -1);
    painter.drawRect(r);
}
