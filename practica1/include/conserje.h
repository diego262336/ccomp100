#ifndef CONSERJE_H
#define CONSERJE_H
#include "persona.h"
#include "cumple.h"


class conserje :public persona
{
private:

    int sotano;
public:
    conserje(string, cumple, int);
    void mostrar();
    int getedad();
};

#endif // CONSERJE_H
