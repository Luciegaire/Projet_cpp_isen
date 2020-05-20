#ifndef OPERATIONS_H
#define OPERATIONS_H

#include <Expression.h>


class Operations : public Expression
{
    public:
        Operations();
        virtual ~Operations();
        bool isConstante();

    protected:
        float number1;
        float number2;

    private:
};

#endif // OPERATIONS_H
