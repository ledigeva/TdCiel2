#include "testtapis.h"

#include <QApplication>

/**
 *  @author eva ledig
 *  @abstract main.h
 *  @date 12 novembre 2022
 */

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    TestTapis w;
    w.show();
    return a.exec();
}
