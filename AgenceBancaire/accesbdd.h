#ifndef ACCESBDD_H
#define ACCESBDD_H

#include <QObject>
#include <QComboBox>
#include <QSqlDatabase>
#include <QSqlTableModel>
#include <QSqlQuery>
#include <QSqlError>
#include <QTimer>
#include <QMessageBox>

#include "client.h"

class AccesBdd : public QObject
{
    Q_OBJECT
public:
    AccesBdd(QObject *parent = nullptr);

    bool ConnecterAuSGBD(QStringList &_paramConnexion);
    void Deconnecter();
    void ObtenirAgences(QComboBox* &_lesAgences);
    void AjouterClient(Client &_client);
    QSqlTableModel *ConsulterComptesClients();



private:

    QSqlDatabase db;

signals:
};

#endif // ACCESBDD_H
