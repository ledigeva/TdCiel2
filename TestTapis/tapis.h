#ifndef TAPIS_H
#define TAPIS_H

#include <QQueue>
#include <QMultiMap>
#include <QStringList>
#include "testtapis.h"
#include "rouleau.h"

/**
 *  @author eva ledig
 *  @abstract tapis.h
 *  @date 12 novembre 2022
 */


class Tapis : public QQueue<Rouleau>
{
public:
    Tapis(); // constructeur part default

    void AjouterRouleau(Rouleau _nouveau);
    bool RetirerRouleau(const QMultiMap<int,Rouleau>::iterator &_unRouleau); // & est un retour
    void InitialiserCompteur();
    int getCompteur();
    QStringList ObtenirContenueTapis();

private:

    QMultiMap<int,Rouleau> compteur;

};

#endif // TAPIS_H
