#include "interfaceprincipal.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    InterfacePrincipal w;
    w.show();
    return a.exec();
}
