#ifndef BARRERONDE_H
#define BARRERONDE_H

#include "barre.h"

class BarreRonde : public Barre
{
public:
    BarreRonde(const float _diametre,
               const string _reference,
               const string _nomAlliage,
               const int _longeurs,
               const float _densite);
    float CalculerSection();
    float CalculerMasse();

private:
    float diametre;
};

#endif // BARRERONDE_H
