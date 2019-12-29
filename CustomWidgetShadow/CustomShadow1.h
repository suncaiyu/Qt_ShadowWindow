#ifndef CUSTOMSHADOW1_H
#define CUSTOMSHADOW1_H

#include <QWidget>

namespace Ui {
class CustomShadow1;
}

class CustomShadow1 : public QWidget
{
    Q_OBJECT

public:
    explicit CustomShadow1(QWidget *parent = nullptr);
    ~CustomShadow1();

private:
    Ui::CustomShadow1 *ui;
};

#endif // CUSTOMSHADOW1_H
