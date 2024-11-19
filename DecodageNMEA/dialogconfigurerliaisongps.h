#ifndef DIALOGCONFIGURERLIAISONGPS_H
#define DIALOGCONFIGURERLIAISONGPS_H

#include <QDialog>
#include <QSerialPort>

namespace Ui {
class DialogConfigurerLiaisonGPS;
}

class DialogConfigurerLiaisonGPS : public QDialog
{
    Q_OBJECT

public:
    explicit DialogConfigurerLiaisonGPS(QWidget *parent = nullptr);
    ~DialogConfigurerLiaisonGPS();

private slots:


private:
    Ui::DialogConfigurerLiaisonGPS *ui;
    QSerialPort lePort;
};

#endif // DIALOGCONFIGURERLIAISONGPS_H
