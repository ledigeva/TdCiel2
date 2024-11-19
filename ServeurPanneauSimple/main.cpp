#include "serveurpanneauxsimple.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    ServeurPanneauxSimple w;
    w.show();
    return a.exec();
}
