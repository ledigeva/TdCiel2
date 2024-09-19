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
    cout << "Reference de la barre : " << reference << endl;
    cout << "Nom de lalliage : " << nomAlliage << endl;
    cout << "La longeur de la barre : " << longeurs << endl;
    cout << "La densité de la barre : " << densite << endl;
    cout << "----------------------------------" << endl;
}
