#ifndef WINDOWTITLE_H
#define WINDOWTITLE_H

#include <QWidget>

namespace Ui {
class WindowTitle;
}

class WindowTitle : public QWidget
{
    Q_OBJECT

public:
    explicit WindowTitle(QWidget *parent = nullptr);
    ~WindowTitle();

private:
    Ui::WindowTitle *ui;
};

#endif // WINDOWTITLE_H
