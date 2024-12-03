#ifndef CLIENT_H
#define CLIENT_H

#include <QString>

class Client
{
public:
    Client(QString _nom, QString _prenom, int _idCompte, float _solde, QString _ville, int _idAgence);

    QString nom;
    QString prenom;
    int idCompte;
    float solde;
    QString ville;
    int idAgence;
};

#endif // CLIENT_H
