#include <QDebug>
#include "centraledalarme.h"
#include "clavier.h"

CentraleDalarme::CentraleDalarme(const int _tailleCode, QObject *parent) :
    QObject(parent),
    tailleCode(_tailleCode),
    indiceCourant(0)
{
    // Initialisation à compléter

    leClavier = new Clavier(this);
    leClavier->show();
}

CentraleDalarme::~CentraleDalarme()
{
    delete[] combinaison;
    delete leClavier;
}

void CentraleDalarme::FabriquerCode(const quint8 chiffre)
{
    // Code à compléter
    if (indiceCourant < tailleCode){
        combinaison[indiceCourant] = chiffre;
        indiceCourant++;
    }else{
        for (int i = 0; i <= tailleCode ; --i) {

        }(combinaison[tailleCode-1]) = chiffre;
    }


}
