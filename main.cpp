#include <QCoreApplication>
#include "Expression.h"
#include "constante.h"
#include "addition.h"
#include "soustraction.h"
#include "multiplication.h"
#include "division.h"
#include "variable.h"
#include "iostream"
using namespace std;

//Main
int main(int argc, char *argv[])
{
    // creation application
    QCoreApplication a(argc, argv);


    // TEST CREATION DE VARIABLES
        cout << " \n x prend la valeur 2 et y prend la valeur 3" << endl;
        Constante c1(10);
        Constante c2(2);

        //Creation d'une variable 'x'
        Variable x1('x',2);

        Multiplication m2(&c2,&x1);
        Constante c5(5);
        Constante c6(3);

        Variable y1('y',3);

        Multiplication m3(&c6,&y1);
        Addition add1(&m2,&c5);
        Addition add2(&add1,&m3);
        add2.affichageClassique();
         cout << "      ";
        add2.affichagePolonaiseInversee();
        cout << "      = "<< add2.calcul() << endl;

        cout << "\non change les valeurs de x et y : x prend la valeur 4 et y prend la valeur 10" << endl;
        x1.set_valeur(4);
        y1.set_valeur(10);
        Multiplication m4(&c6,&y1);
        Addition add3(&m2,&c5);
        Addition add4(&add1,&m3);
        add4.affichageClassique();
         cout << "      ";
        add4.affichagePolonaiseInversee();
        cout << "      = "<< add4.calcul() << endl;




    // exécution application
    return a.exec();
}
