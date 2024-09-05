#ifndef COMPTEEPARGNE_H
#define COMPTEEPARGNE_H

#include "comptebancaire.h"

class CompteEpargne : public CompteBancaire
{
public:
    CompteEpargne(float _soldeEpagne=0, float _tauxInterets); // permet l'initialisation du solde dans la liste d'initialisation du constructeur
    void CalculerInterets(float _tauxInterets); // fonction qui permet de calculer les interet depargne
private:
    float tauxInterets; // taux dinteret pour le compte epargne
    float soldeEpargne;
};

#endif // COMPTEEPARGNE_H
