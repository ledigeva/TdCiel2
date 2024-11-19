#ifndef SERVEUR_H
#define SERVEUR_H

#include <QWidget>
#include <QNetworkDatagram>
#include <QUdpSocket>
#include <QTimer>
#include <QTime>
#include <QMessageBox>

QT_BEGIN_NAMESPACE
namespace Ui {
class Serveur;
}
QT_END_NAMESPACE

class Serveur : public QWidget
{
    Q_OBJECT

public:
    Serveur(QWidget *parent = nullptr);
    ~Serveur();

    void onTimerInformation_timeout();
    void onTimerHeure_timeout();
    void LancerTimerHeure();
    void EnvoyaiDatagram(QByteArray &data);

private slots:
    void on_pushButtonDiffusion_clicked();

    void on_pushButtonAjoueMessage_clicked();

    void on_pushButtonCreeAlerte_clicked();

    void on_pushButtonSupprimerMessage_clicked();

    void on_pushButtonModifierBulletinMeteo_clicked();

private:
    Ui::Serveur *ui;
    QNetworkDatagram datagram;
    QUdpSocket *socketServeur;
    QTimer *timerInformation;
    QTimer *timerHeure;

    int indexMessage=0;
    bool alerte;
    bool alternance;
};
#endif // SERVEUR_H
