#ifndef GERENTE_H
#define GERENTE_H
#include "persona.h"
#include "cumple.h"

class gerente : public persona
{
private:
    int oficina;
public:
    gerente(string, cumple,int);
    void mostrar();
    int getedad();
};

#endif // GERENTE_H
