#include <QDebug>
#include "centraledalarme.h"
#include "clavier.h"

CentraleDalarme::CentraleDalarme(const int _tailleCode, QObject *parent) :
    QObject(parent),
    tailleCode(_tailleCode),
    indiceCourant(0)
{
    // Initialisation à compléter
    combinaison = new quint8[tailleCode];

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
            combinaison[i]=combinaison[i+1]
            (combinaison[tailleCode-1]) = chiffre;
        }
    }

    QDebug operator <<(QDebug _debug, const CentraleDalarme &Centrale){
        QString tampon;
        tampon = "Combinaison = ";
        for (int i = 0; i < Centrale.tailleCode; i++) {
            tampon += QString::number(centrale.combinaison[i]);
            _debug.noquote() << tampon;
            return _debug.quote();
        }
    }

}
