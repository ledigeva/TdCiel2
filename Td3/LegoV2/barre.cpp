#include "barre.h"

Barre::Barre(const string _reference,
             const string _nomAlliage,
             const int _longeurs,
             const float _densite):
    reference(_reference),
    nomAlliage(_nomAlliage),
    longeurs(_longeurs),
    densite(_densite)
{

}

void Barre::AfficherCaracteristiques()
{
    cout << "Reference : " << reference << endl;
    cout << "Longeur : " << longeurs << " cm" << endl;
    cout << "Densité : " << densite << " g/cm3" << endl;
    cout << "----------------------------------" << endl;
}

float Barre::CalculerMasse()
{
    return 0;
}



