#include "persona.h"
#include "cumple.h"
#include<string>
#include <iostream>
using namespace std;


persona::persona(string _nombre, cumple  _cumpleanios)
{
    nombre =_nombre;//ctor
    cumpleanios= _cumpleanios;
}

void persona::mostrar()
{
    cout<<"nombre :"<<nombre<<endl;

}
int persona::getedad()
{
    cout<<"edad :"<<cumpleanios.edad();
}
