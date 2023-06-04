#include "HausdorffFrechet.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    HausdorffFrechet w;
    w.show();
    return a.exec();
}
