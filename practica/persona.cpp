#include <iostream>
#include "persona.h"
#include "gerente.h"
#include "conserje.h"
#include "cumple.h"


using namespace std;

int main()
{
    persona *arreglo[2];
    arreglo[0]= new gerente("dorian",cumple(26,03,1992),4);
    arreglo[1]= new conserje("pedro",cumple(23,06,1997),2);

    arreglo[0]->mostrar();
    cout<<endl;
    arreglo[1]->mostrar();

    return 0;
}
