#ifndef CONSTANTE_H
#define CONSTANTE_H
#include <string>
#include <Expression.h>


class Constante : public Expression
{
    public:
        Constante();
        Constante(float c);
        setValeur(float c);
        float calcul();
        bool isConstante();
        Expression* simplifier();
        void affichageClassique();
        void affichagePolonaiseInversee();
        virtual ~Constante();

    protected:

    private:
        float _valeur;
};

#endif // CONSTANTE_H
