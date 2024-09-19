#include <iostream>
#include "element.h"
#include "segment.h"
#include "trajectoire.h"
#include "math.h"

using namespace std;

int main()
{
    // question 8 ( premier programme daffichage )
    // question 5  la relation entre element et trajection est une composition
    // question 6  la classe element peux etre qualifier de classe primaire. segment hérit de la classe element et trajection et une composition de la classe element.

    Trajectoire letraject(3);
    letraject.Ajouter(new Segment(9,0,3));
    letraject.Ajouter(new Segment(5,0.92795,1));
    letraject.Ajouter(new Segment(6,M_PI/2,2));
    letraject.Afficher();
    cout << "Durée totale du parcours = " << endl;


    return 0;
}
