#ifndef COMPTEBANCAIRE_H
#define COMPTEBANCAIRE_H

class CompteBancaire
{

public:
    CompteBancaire(float solde);
    bool Deposer(float montant);
    bool Retirer(float montant);
    float ConsulterSolde();

private:

    float solde;

};

#endif // COMPTEBANCAIRE_H
