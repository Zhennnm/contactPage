#include "contactwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    contactWindow w;
    w.show();

    return a.exec();
}
