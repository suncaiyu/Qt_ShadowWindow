#ifndef CUSTOMSHADOW2_H
#define CUSTOMSHADOW2_H

#include <QWidget>

namespace Ui {
class CustomShadow2;
}

class CustomShadow2 : public QWidget
{
    Q_OBJECT

public:
    explicit CustomShadow2(QWidget *parent = nullptr);
    ~CustomShadow2();
    void paintEvent(QPaintEvent *event) override;

private:
    Ui::CustomShadow2 *ui;
};

#endif // CUSTOMSHADOW2_H
