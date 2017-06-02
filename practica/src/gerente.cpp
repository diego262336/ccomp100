#include <iostream>
#include "gerente.h"
#include "cumple.h"
using namespace std;

gerente::gerente(string _nombre,cumple _cumpleanios, int _oficina): persona( _nombre,  _cumpleanios)
{
    oficina= _oficina;

}


void gerente::mostrar()
{
    persona::mostrar();
    persona::getedad();
    cout<<endl;
    cout<<"oficina :"<<oficina<<endl;
}
int gerente::getedad()
{
    cout<<"edad :"<<cumpleanios.edad()<<endl;
}
