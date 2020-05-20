#ifndef DIVISION_H
#define DIVISION_H

#include <Operations.h>


class Division : public Operations
{
    public:
        Division();
        Division(Expression *a, Expression *b);
        float calcul();
        Expression * simplifier();
        bool isConstante();
        void affichageClassique();
        void affichagePolonaiseInversee();
        virtual ~Division();

    protected:

    private:
        Expression* _terme1;
        Expression* _terme2;
};

#endif // DIVISION_H
