#ifndef EMBALLAGE_H
#define EMBALLAGE_H

#include <string>
#include <iostream>
#include <iomanip>
#include <limits>

using namespace std;

class Emballage
{
public:
    Emballage(const string _format,
              const int _resistance,
              const int _largeur,
              const int _longeur,
              const int _hauteur=0);

    // Emballage(const string &format, int resistance, int largeur, int longeur, int hauteur, int stock);
    ~Emballage();
    void Visualiser();

    bool operator < (Emballage &autre);
    bool operator == (Emballage &autre);
    operator float();
    double CalculerVolume();

private:
    string format;
    int resistance;
    int largeur;
    int longeur;
    int hauteur;
    int stock;

};

#endif // EMBALLAGE_H
