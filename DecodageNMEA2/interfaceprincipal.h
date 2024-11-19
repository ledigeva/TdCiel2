#ifndef INTERFACEPRINCIPAL_H
#define INTERFACEPRINCIPAL_H

#include <QMainWindow>
#include <QSerialPort>
#include <QSerialPortInfo>
#include "dialog.h"
#include <QLabel>

#include <QSettings>
#include <QDir>
#include <QSize>
#include <QPoint>
#include <QDebug>


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

    void onQSerialPort_ReadyRead();

private slots:
    void on_actionConfigurer_triggered();

private:
    Ui::InterfacePrincipal *ui;
    Dialog configGPS;
    QSerialPort lePort;
    QLabel labelEtatPort;
    QByteArray trame;


    };
#endif // INTERFACEPRINCIPAL_H
