#include <QtGui/QApplication>
#include "qt_first.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    qt_first w;
    w.show();

    return a.exec();
}
