#include "rouleau.h"

/**
 *  @author eva ledig
 *  @abstract code de rouleau
 *  @date 12 novembre 2022
 */


Rouleau::Rouleau() {} // constructeur part default

Rouleau::Rouleau(const Rouleau &_autre) // constriucteur de recopie
{
    diametre = _autre.diametre;
    reference = _autre.reference;
    rangee = _autre.rangee;
    colonne= _autre.colonne;
}

Rouleau::Rouleau(QString _reference, int _diametre, QObject *_parent):
    reference(_reference),
    diametre(_diametre),
    QObject{_parent}
{}

Rouleau &Rouleau::operator=(const Rouleau &_autre) // constructeur de surcharge
{
    if(this != &_autre){
        diametre = _autre.diametre;
        reference = _autre.reference;
        rangee = _autre.rangee;
        colonne= _autre.colonne;
    }

}

 // fonction qui affecte une localisation ( rangee , colonne )
void Rouleau::AffecterLocalisation(const int _rangee, const int _colonne)
{
    rangee = _rangee;
    colonne = _colonne;
}

// fonction qui permet d'optenir la localisation
void Rouleau::ObtenirLocalisation(int &_rangee, int &_colonne) const
{
    _rangee = rangee;
    _colonne = colonne;
}

// fonction qui retourne la reference du tapis
QString Rouleau::getReference() const
{
return reference; // retourne la reference
}

// fonction qui retourne le diametre du tapis
int Rouleau::getDiametre() const
{
return diametre; // retourne le diametre
}
