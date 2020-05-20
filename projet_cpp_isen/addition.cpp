#include "Addition.h"
#include <iostream>
#include <string.h>
#include <Constante.h>
using namespace std;

Addition::Addition()
{
    _terme1 = 0;
    _terme2 = 0;
}

Addition::Addition(Expression* a, Expression* b)
{
    _terme1 = a;
    _terme2 = b;
}

bool Addition :: isConstante()
{
    return false;
}

float Addition :: calcul() {
  return _terme1->calcul() + _terme2->calcul();
 }

Expression* Addition :: simplifier()
{
    bool result1 = _terme1->isConstante();
    bool result2 = _terme2->isConstante();
    if (result1 && result2){
        Constante * cons = new Constante(_terme1->calcul() +  _terme2->calcul());
        return cons;
    }
    else if (result1){
        Addition *add = new Addition(_terme1, _terme2->simplifier());
        return add;
    }
    else if (result2) {
        Addition *add = new Addition(_terme1->simplifier(), _terme2);
        return add;
    }
    else {
        Addition * add = new Addition(_terme1->simplifier(), _terme2->simplifier());
        return add;
    }
}

 void Addition :: affichageClassique()
 {
     std::cout << "(";
     _terme1->affichageClassique();
     std::cout << " + ";
     _terme2->affichageClassique();
     std::cout << ")";
}

void Addition :: affichagePolonaiseInversee()
{
    _terme1->affichagePolonaiseInversee();
    cout << " ";
    _terme2->affichagePolonaiseInversee();
    cout<<" + ";
}

Addition::~Addition()
{
    //dtor
}
