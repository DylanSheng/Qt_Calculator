#include "coolplayer.h"
#include <QApplication>
#include <QtPlugin>


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    CoolPlayer w;
    w.show();

    return a.exec();
}
