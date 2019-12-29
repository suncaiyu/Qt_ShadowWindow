#include "MainWindow.h"
#include "CustomShadow1.h"
#include "CustomShadow2.h"
#include "CustomShadow3.h"
#include "CustomShadow4.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    CustomShadow1 w;
    w.show();
    return a.exec();
}
