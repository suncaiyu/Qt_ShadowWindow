#include "CustomShadow4.h"
#include "ui_CustomShadow4.h"
#include "WinApiShadow.h"
#include <QPainter>
//调用window的api实现的窗口阴影，实际上是我觉得最好的方案，因为他没有像别的方案一样，割让最外围一部分的窗口用来绘制阴影，他是完全在窗口外绘制的阴影
//只可惜缺陷也一样的明显，只能在window的平台上，不支持跨平台

CustomShadow4::CustomShadow4(QWidget *parent) :
      QWidget(parent),
      ui(new Ui::CustomShadow4)
{
    ui->setupUi(this);
    resize(400, 300);
    setWindowFlags(windowFlags() | Qt::FramelessWindowHint);
    HWND hwnd = (HWND)this->winId();
    DWORD style = ::GetWindowLong(hwnd, GWL_STYLE);
    ::SetWindowLong(hwnd, GWL_STYLE, style | WS_MAXIMIZEBOX | WS_THICKFRAME | WS_CAPTION);
    //we better left 1 piexl width of border untouch, so OS can draw nice shadow around it
    const MARGINS shadow = { 1, 1, 1, 1 };
    WinDwmapi::instance()->DwmExtendFrameIntoClientArea(HWND(winId()), &shadow);
}

CustomShadow4::~CustomShadow4()
{
    delete ui;
}

void CustomShadow4::paintEvent(QPaintEvent *event)
{
    QPainter paint(this);
    QRect r = rect();
    paint.drawRect(r.adjusted(0, 0, -1, -1));
}
