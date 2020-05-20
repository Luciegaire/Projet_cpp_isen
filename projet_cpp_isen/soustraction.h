#ifndef SOUSTRACTION_H
#define SOUSTRACTION_H

#include <Operations.h>


class Soustraction : public Operations
{
    public:
        Soustraction();
        Soustraction(Expression *a, Expression *b);
        float calcul();
        Expression * simplifier();
        void affichageClassique();
        void affichagePolonaiseInversee();
        virtual ~Soustraction();
        bool isConstante();

    protected:

    private:
        Expression* _terme1;
        Expression* _terme2;
};

#endif // SOUSTRACTION_H
