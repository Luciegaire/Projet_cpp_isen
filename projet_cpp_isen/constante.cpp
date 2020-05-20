#include "Constante.h"
#include <iostream>
#include <string>
using namespace std;

Constante::Constante()
{
    _valeur = 0;
}

Constante::Constante(float c)
{
  _valeur = c;
}

Expression* Constante :: simplifier()
{
    Constante *con = new Constante(_valeur);
    return con;
}

float Constante :: calcul()
{
  return _valeur;
}

bool Constante:: isConstante()
{
    return true;
}

Constante::setValeur(float c)
{
    _valeur = c;
}

void Constante :: affichageClassique()
{
    cout << _valeur;
}

void Constante :: affichagePolonaiseInversee()
{
    cout << _valeur;
}

Constante::~Constante()
{
    //dtor
}
