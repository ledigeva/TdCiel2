#ifndef ROULEAU_H
#define ROULEAU_H

#include <QString>

class Rouleau
{
public:
    Rouleau(); // constructeur part default
    Rouleau(const Rouleau &_autre);// constriucteur de recopie
    Rouleau(QString _reference, int _diametre);
    Rouleau &operator=(const Rouleau& _autre); // surcharge
    ~Rouleau(); // destructeur

    void AffecterLocalisation(int _rangee, int _colonne);
    void ObtenirLocalisation(int &_rangee, int &_colonne) const ;

    QString getReference() const; //asseseur
    int getDiametre() const; // assesseur
private:
    QString reference;
    int diametre;
    int rangee;
    int colonne;

};

#endif // ROULEAU_H
