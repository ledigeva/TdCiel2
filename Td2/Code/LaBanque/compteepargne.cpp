#include "compteepargne.h"

CompteEpargne::CompteEpargne(float _soldeEpagne, float _tauxInterets):
tauxInterets(_tauxInterets),
    soldeEpargne(_soldeEpagne)
{



}

void CompteEpargne::CalculerInterets(float _tauxInterets)
{
    CompteEpargne = CompteBancaire(solde)*tauxInterets/100;
}
