#ifndef MULTIPLICATION_H
#define MULTIPLICATION_H

#include <Operations.h>


class Multiplication : public Operations
{
    public:
        Multiplication();
        Multiplication(Expression* a, Expression* b);
        float calcul();
        Expression * simplifier();
        bool isConstante();
        void affichageClassique();
        void affichagePolonaiseInversee();
        virtual ~Multiplication();

    protected:

    private:
        Expression* _terme1;
        Expression* _terme2;
};

#endif // MULTIPLICATION_H
