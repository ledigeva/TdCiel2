#ifndef BARRECARREE_H
#define BARRECARREE_H

#include "barre.h"

class BarreCarree : public Barre
{
public:
    BarreCarree(const string _reference,
                const string _nomAlliage,
                const int _longeurs,
                const float _densite,
                const float _cote);
    float CalculerSection();
    float CalculerMasse();
private:
    float cote;
};

#endif // BARRECARREE_H
