#ifndef SERVEURPANNEAUXSIMPLE_H
#define SERVEURPANNEAUXSIMPLE_H

#include <QWidget>
#include <QUdpSocket>
#include <QHostAddress>

QT_BEGIN_NAMESPACE
namespace Ui {
class ServeurPanneauxSimple;
}
QT_END_NAMESPACE

class ServeurPanneauxSimple : public QWidget
{
    Q_OBJECT

public:
    ServeurPanneauxSimple(QWidget *parent = nullptr);
    ~ServeurPanneauxSimple();

private slots:
    void on_pushButton_clicked();

private:
    Ui::ServeurPanneauxSimple *ui;
    QUdpSocket *socketServeur;
};
#endif // SERVEURPANNEAUXSIMPLE_H
