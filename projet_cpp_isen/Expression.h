#ifndef EXPRESSION_H
#define EXPRESSION_H

#include <string>


class Expression
{
    public:
        Expression();
        virtual float calcul();
        virtual bool isConstante();
        virtual Expression* simplifier();
        virtual void affichageClassique() = 0;
        virtual void affichagePolonaiseInversee();
        virtual ~Expression();

    protected:

    private:
};

#endif // EXPRESSION_H
