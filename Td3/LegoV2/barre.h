#ifndef BARRE_H
#define BARRE_H
#include <iostream>
#include <string>
#include "math.h"

using namespace std;

class Barre
{
public:
    Barre(const string _reference,
          const string _nomAlliage,
          const int _longeurs,
          const float _densite);

    virtual void AfficherCaracteristiques();
    virtual float CalculerMasse() = 0; //fonction viruelle pure
    virtual ~Barre() {};

protected:
    string reference;
    string nomAlliage;
    int longeurs;
    float densite;
};


#endif // BARRE_H
