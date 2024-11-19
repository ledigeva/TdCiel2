#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QSerialPortInfo>
#include <QDebug>
#include <QSerialPort>

QT_BEGIN_NAMESPACE
namespace Ui {
class Widget;
}
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();


private slots:
    void on_comboBoxChoixSerie_currentTextChanged(const QString &arg1);

    void on_pushButtonOuvrirPort_clicked();

    void on_pushButtonEnvoyai_clicked();

    void onQSerialPort_readyRead();
private:
    Ui::Widget *ui;
    QSerialPort lePortSerie;
};
#endif // WIDGET_H
