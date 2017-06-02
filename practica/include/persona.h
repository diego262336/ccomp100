#ifndef PERSONA_H
#define PERSONA_H
#include <string>
#include <stdlib.h>
#include "cumple.h"
#include<iostream>
using namespace std;


class persona
{
protected:
    string nombre;
    cumple cumpleanios;
public:

    persona(string ,cumple);
    virtual void mostrar();
    virtual int getedad();


};


#endif // PERSONA_H
