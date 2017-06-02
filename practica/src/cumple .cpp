#include "cumple .h"

cumple ::cumple (int _dia, int _mes , int _anio)
{
    dia=_dia;
    mes= _mes;
    anio= _anio;
}

cumple ::~cumple ()
{
    //dtor
}

int eedad()
{
    int actual = 2017-anio;
    return actual;
}
