#include "Division.h"
#include "Constante.h"
#include <iostream>

using namespace std;

Division::Division()
{
    *_terme1 = Constante(1);
    *_terme2 = Constante(1);
}

bool Division :: isConstante()
{
    return false;
}

Division::Division(Expression *a, Expression *b)
{
    _terme1 = a;
    _terme2 = b;
}

float Division:: calcul() {
  return _terme1->calcul() / _terme2->calcul();
 }

Expression* Division :: simplifier()
{
    bool result1 = _terme1->isConstante();
    bool result2 = _terme2->isConstante();
    if (result1 && result2){
        Constante * cons = new Constante(_terme1->calcul() / _terme2->calcul());
        return cons;
    }
    else if (result1){
        Division *div = new Division(_terme1, _terme2->simplifier());
        return div;
    }
    else if (result2) {
        Division *div = new Division(_terme1->simplifier(), _terme2);
        return div;
    }
    else {
        Division * div = new Division(_terme1->simplifier(), _terme2->simplifier());
        return div;
    }
}

 void Division :: affichageClassique()
 {
     cout <<"(";
     _terme1->affichageClassique();
     std::cout << "/";
     _terme2->affichageClassique();
     cout <<")";
}

void Division :: affichagePolonaiseInversee()
{
    _terme1->affichagePolonaiseInversee();
    cout << " ";
    _terme2->affichagePolonaiseInversee();
    cout<<" / ";
}

Division::~Division()
{
    //dtor
}
