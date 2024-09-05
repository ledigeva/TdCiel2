#include "emballage.h"

// ////////////////////////////////////////////////////////////////////////////////////////////

Emballage::Emballage(const string _format,
                     const int _resistance,
                     const int _largeur,
                     const int _longeur,
                     const int _hauteur):

    format(_format),
    resistance (_resistance),
    largeur (_largeur),
    longeur(_longeur),
    hauteur(_hauteur),
    stock(0)
{
    // cout <<"Constructeur : Emballage / " << format << endl;
}

// ////////////////////////////////////////////////////////////////////////////////////////////

void Emballage::Visualiser()
{
    //cout << "+" << "-" << "+"<< "+" << "-" << "+" << endl;

    cout << "|" ;
    cout << left << setw(8) << format ;
    cout << left << "|" ;
    cout << left << resistance ;
    cout << left << setw(8) << "kg" ;
    cout << left << "|" ;
    cout << left << setw(5) << longeur;
    cout << "X ";
    cout << left <<setw(5) << largeur;

    if (hauteur > 0){
        cout << "X ";
        cout << left << setw(5) << hauteur;
        cout << "|" <<endl ;
    }else{
        cout << right << setw(8) << "|" <<endl ;
    }




}

bool Emballage::operator <(Emballage &autre)
{
    return CalculerVolume() < autre.CalculerVolume();
}

double Emballage::CalculerVolume()
{
    int volume = longeur * largeur;
    if(hauteur != 0 ){
        volume *= hauteur;

        double volumeCm3 = volume / 1000.0;

        return volumeCm3;
    }
}

bool Emballage::operator ==(Emballage &autre)
{
    return(longeur == autre.longeur && largeur == autre.largeur &&
            hauteur==autre.hauteur && resistance==autre.resistance);
}

Emballage::operator float()
{
    return CalculerVolume();
}



// ////////////////////////////////////////////////////////////////////////////////////////////

Emballage::~Emballage()
{
    // cout <<"destructeur : Emballage / " << format << endl;
}
