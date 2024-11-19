#ifndef INTERFACEPRINCIPAL_H
#define INTERFACEPRINCIPAL_H

#include <QMainWindow>
#include <QDebug>
#include <QLabel>
#include <QSerialPort>
#include <dialogconfigurerliaisongps.h>


QT_BEGIN_NAMESPACE
namespace Ui {
class InterfacePrincipal;
}
QT_END_NAMESPACE

class InterfacePrincipal : public QMainWindow
{
    Q_OBJECT

public:
    InterfacePrincipal(QWidget *parent = nullptr);
    ~InterfacePrincipal();

private slots:

    void onQSerial_ReadyRead();

private:
    Ui::InterfacePrincipal *ui;
    QSerialPort lePort;
    QLabel labelEtatPort;
    QByteArray trameCourante;
    DialogConfigurerLiaisonGPS configGPS;

};
#endif // INTERFACEPRINCIPAL_H
