#include "tapis.h"


/**
 *  @author eva ledig
 *  @abstract code de tapis
 *  @date 12 novembre 2022
 */


Tapis::Tapis() {} // constructeur part default

//fonction ajouterrouleau qui permet dajouter un rouleau a compteur
void Tapis::AjouterRouleau(Rouleau _nouveau)
{
    compteur.insert(_nouveau.getDiametre(), _nouveau);
}

// fonction retirerrouleau qui permet de retirer rouleau de compteur en partent de la fin
bool Tapis::RetirerRouleau(const QMultiMap::iterator &_unRouleau)
{
    bool retour = false;
    if(_unRouleau != compteur.end())
    {
        compteur.erase(_unRouleau);
        retour = true;
    }
    return retour;
}

// fonctionh initialisercompteur qui permet de regnitialiser le compteur
void Tapis::InitialiserCompteur()
{
    compteur.clear(); // efface compteur
}

//fonction getCumpteur qui permet de igjnitialser compteur a 0
int Tapis::getCompteur()
{
    return compteur.size();
}

//fonction objtenircontenue tapis qui permet d'optenir et afficher
// la reference et le diametre d'un tapis
QStringList Tapis::ObtenirContenueTapis()
{
    QStringList descriptionsTapis;
    for (auto it = compteur.begin(); it != compteur.end(); it++)
    {
        QString descriptionsRouleau = QString ("Reference : %1, Diametre : %2 ")
                                          .arg(it.value().getReference())
                                          .arg(it.value().getDiametre());
        descriptionsTapis.append(descriptionsRouleau);
    }
    return descriptionsTapis;
}
