#include "code.h"

Code::Code(int _tailleCode):
    tailleCode(_tailleCode)
{
    codeUsine = new quint8[tailleCode];
    codeUtilisateur = new quint8[tailleCode];

    // pour i qui est egale a 0 inferieur strict a taille code i++
    for (int i = 0; i < tailleCode; ++i) {
        // permet que codeUsine prend +1 a chaque indice
        codeUsine[i] = i+1;
        // pour que le codeUtilisateur soit egale a 0000 part default
        codeUtilisateur[i] = 0;
    }
}

Code::~Code()
{
    // le destructeur est important
    delete[] codeUsine;
    delete[] codeUtilisateur;
}

bool Code::VerifierCode(const quint8 _unCode[])
{


    int cpt = 0, cpt2 = 0;
    for (int i = 0; i < tailleCode; ++i) {
        // si un code de i et egale au code usine de i
        if (_unCode[i] == codeUsine[i]) {
            cpt++;
        }
        // si un code de i et egale au code utilisateur de i
        if (_unCode[i] == codeUtilisateur[i]) {
            cpt2++;
        }
    }
    if (cpt == 4 || cpt2 == 4) {
        // retourne vrai
        return true;
    }else{
        // sinon retourne faux
        return false;
    }
}

void Code::Memoriser(const quint8 _unCode[])
{
    // permet de remplacer le code utilisateur par un nouveau code reçu en paramètre
    for (int i = 0; i < tailleCode; ++i) {
        codeUtilisateur[i] = _unCode[i];
    }
}
