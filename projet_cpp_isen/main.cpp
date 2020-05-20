#include <iostream>

#include <Addition.h>
#include <Division.h>
#include <Soustraction.h>
#include <Multiplication.h>
#include <Constante.h>
#include <Variable.h>
#include <Expression.h>

using namespace std;

int main()
{

    Constante c = Constante(3);
    Constante c2 = Constante(6);

    Variable v = Variable('c',3.0);

    /*Addition add1(&v, &c);
    Addition add2(&c,&c2);
    Addition add3(&add1,&add2);

    add1.simplifier()->affichageClassique();cout <<endl;
    add2.simplifier()->affichageClassique();cout <<endl;
    add3.simplifier()->affichageClassique();cout <<endl;*/

    /*Soustraction sous1(&v, &c);
    Soustraction sous2(&c2,&c);
    Soustraction sous3(&sous1,&sous2);

    sous1.simplifier()->affichageClassique();cout <<endl;
    sous2.simplifier()->affichageClassique();cout <<endl;
    sous3.simplifier()->affichageClassique();cout <<endl;*/

    /*Multiplication mult1(&v, &c);
    Multiplication mult2(&c2,&c);
    Multiplication mult3(&mult1,&mult2);

    mult1.simplifier()->affichageClassique();cout <<endl;
    mult2.simplifier()->affichageClassique();cout <<endl;
    mult3.simplifier()->affichageClassique();cout <<endl;*/

    /*Division div1(&v, &c);
    Division div2(&c2,&c);
    Division div3(&div1,&div2);

    div1.simplifier()->affichageClassique();cout <<endl;
    div2.simplifier()->affichageClassique();cout <<endl;
    div3.simplifier()->affichageClassique();cout <<endl;*/

    Division div = Division(&c2, &c);
    Addition add = Addition(&v, &c);
    Soustraction sous = Soustraction(&add, &div);
    Multiplication mult = Multiplication(&sous, &add);

    mult.simplifier()->affichageClassique();cout <<endl;





    return 0;
}
