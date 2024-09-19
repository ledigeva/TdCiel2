#include "barrecarree.h"

BarreCarree::BarreCarree(const string _reference, const string _nomAlliage,
                         const int _longeurs,
                         const float _densite,
                         const float _cote):

    Barre(_reference,
          _nomAlliage,
          _longeurs,
          _densite),
    cote(_cote)
{

}

float BarreCarree::CalculerSection()
{
    return cote*cote;
}

float BarreCarree::CalculerMasse()
{
    return longeurs*CalculerSection()*densite;
}
