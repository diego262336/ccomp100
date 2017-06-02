#include <iostream>
#include "conserje.h"
#include "persona.h"
#include "cumple.h"

conserje::conserje(string _nombre, cumple _cumpleanios ,int _sotano) : persona(_nombre, _cumpleanios)
{
    sotano= _sotano;
}


 void conserje::mostrar()
 {
     persona::mostrar();
     persona::getedad();
     cout<<endl;
     cout<<"sotano "<<sotano<<endl;
 }
int conserje::getedad()
{

    cout<<"edad"<<cumpleanios.edad()<<endl;
}
