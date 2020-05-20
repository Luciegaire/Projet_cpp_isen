#include "Multiplication.h"
#include <iostream>
#include <Constante.h>


using namespace std;

Multiplication::Multiplication()
{
    _terme1 = 0;
    _terme2 = 0;
}

bool Multiplication :: isConstante()
{
    return false;
}

Multiplication::Multiplication(Expression* a, Expression* b)
{
    _terme1 = a;
    _terme2 = b;
}

float Multiplication:: calcul() {
  return _terme1->calcul() * _terme2->calcul();
 }

 Expression* Multiplication :: simplifier()
{
    bool result1 = _terme1->isConstante();
    bool result2 = _terme2->isConstante();
    if (result1 && result2){
        Constante * cons = new Constante(_terme1->calcul() * _terme2->calcul());
        return cons;
    }
    else if (result1){
        Multiplication *mult = new Multiplication(_terme1, _terme2->simplifier());
        return mult;
    }
    else if (result2) {
        Multiplication *mult = new Multiplication(_terme1->simplifier(), _terme2);
        return mult;
    }
    else {
        Multiplication * mult = new Multiplication(_terme1->simplifier(), _terme2->simplifier());
        return mult;
    }
}


 void Multiplication :: affichageClassique()
 {
     cout <<"(";
     _terme1->affichageClassique();
     std::cout << "*";
     _terme2->affichageClassique();
     cout <<")";
}

void Multiplication :: affichagePolonaiseInversee()
{
    _terme1->affichagePolonaiseInversee();
    cout << " ";
    _terme2->affichagePolonaiseInversee();
    cout<<" * ";
}

Multiplication::~Multiplication()
{
    //dtor
}
