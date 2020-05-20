#ifndef ADDITION_H
#define ADDITION_H
#include <string>

#include <Operations.h>
#include <Expression.h>


class Addition : public Operations
{
    public:
        Addition();
        Addition(Expression* a, Expression* b);
        float calcul();
        bool isConstante();
        void affichageClassique();
        void affichagePolonaiseInversee();
        Expression* simplifier();
        virtual ~Addition();

    protected:

    private:
        Expression* _terme1;
        Expression* _terme2;
};

#endif // ADDITION_H
