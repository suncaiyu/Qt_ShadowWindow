#ifndef CUSTOMSHADOW3_H
#define CUSTOMSHADOW3_H

#include <QWidget>

namespace Ui {
class CustomShadow3;
}

class CustomShadow3 : public QWidget
{
    Q_OBJECT

public:
    explicit CustomShadow3(QWidget *parent = nullptr);
    ~CustomShadow3();
    void paintEvent(QPaintEvent *);

private:
    Ui::CustomShadow3 *ui;
};

#endif // CUSTOMSHADOW3_H
