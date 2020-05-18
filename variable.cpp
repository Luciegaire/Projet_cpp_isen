#include "Expression.h"
#include "variable.h"
#include <iostream>

using namespace std;

Variable::Variable()
{
    _csteV = 'c';
}

Variable::Variable(char c, float nb)
{
    _csteV = c;
    _valeur = nb;
}


Variable::~Variable()
{
    //dtor
}

float Variable::calcul()
{
    return _valeur;
}

void Variable::set_valeur(float c)
{
    _valeur = c;
}

void Variable::affichageClassique()
{
    cout << _csteV ;
}

void Variable::affichagePolonaiseInversee()
{
    cout << _csteV ;
}
