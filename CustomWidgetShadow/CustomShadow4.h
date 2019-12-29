#ifndef CUSTOMSHADOW4_H
#define CUSTOMSHADOW4_H

#include <QWidget>

namespace Ui {
class CustomShadow4;
}

class CustomShadow4 : public QWidget
{
    Q_OBJECT

public:
    explicit CustomShadow4(QWidget *parent = nullptr);
    ~CustomShadow4();
    void paintEvent(QPaintEvent *event) override;

private:
    Ui::CustomShadow4 *ui;
};

#endif // CUSTOMSHADOW4_H
