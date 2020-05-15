#ifndef RACINECAREE_H
#define RACINECAREE_H

#include "operationunaire.h"

class RacineCaree : public OperationUnaire
{
public:
    RacineCaree(Expression *_terme);
    float calcul();
    void affichageClassique();
    void affichagePolonaiseInversee();
};

#endif // RACINECAREE_H
