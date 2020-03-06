/*
4-Una inmobiliaria desea crear un programa en un lenguaje orientado a objetos que le permita almacenar información de los locales comerciales que gestiona. La información que desea almacenar sobre cada local comercial es dirección, metros cuadrados y precio del metro cuadrado. Crea una clase que pueda utilizarse para representar esta información.
*/

#include <iostream>
#include <string>
#include "lib/ferreteria.h"
#include "lib/drogueria.h"
#include "lib/bar.h"
#include "lib/restaurante.h"
#include "lib/comidallevar.h"
#include "lib/camiseria.h"
#include "lib/merceria.h"
#include "lib/sombrereria.h"
#include "lib/panaderia.h"
#include "lib/fruteria.h"
#include "lib/carniceria.h"

using namespace std;

void printline(void);

int main(void)
{
	
	class Local garito1("221B Baker Street",110.0f,1050.3f);
	class Tienda garito2("Puente de Gotham", 60.0f, 730.5f, 7.0f);
	class Hosteleria garito3("Super Palace 23", 200.0f, 1730.5f, 1979,3,12);
	class Ropa garito4("Paseo de la fama 44", 50.0f,1452.65f,13.5f,true,false);
	class Ferreteria garito5("Ronda de King Kong 77", 70.0f,1052.65f,14.5f,50.6f);
	class Comida garito6("Más allá del infinito 4", 78.0f,1142.88f,24.5f,6,4);
	class Drogueria garito7("Novena puerta", 99.9f,999.99f,99.9f,true);
	class Bar garito8("Donde Brian perdió la chancla", 200.0f, 1730.5f, 2015,2,4, 4);
	class Restaurante garito9("Highway to hell", 250.0f, 1630.5f, 2005,2,4, 30,70.0f);
	class Comidallevar garito10("Omicrom Persei VII", 61.0f, 730.5f, 2015,2,4, false, true);
	class Camiseria garito11("Espacio Profundo 7", 50.0f,1452.65f,13.5f,true,false,true);
	class Merceria garito12("Country Roads West Virginia", 50.0f,1452.65f,13.5f,true,false,3);
	class Sombrereria garito13("Antro de mala muerte 66", 50.0f,1452.65f,13.5f,true,false,8);
	class Fruteria garito14("Planeta Prohibido", 78.0f,1142.88f,24.5f,6,4,true);
	class Carniceria garito15("Crematoria", 78.0f,1142.88f,24.5f,6,4,3);
	class Panaderia garito16("Beyond the red mirror", 78.0f,1142.88f,24.5f,6,4,9);
	
	
	garito1.print(); printline();
	garito2.print(); printline();
	garito3.print(); printline();
	garito4.print(); printline();
	garito5.print(); printline();
	garito6.print(); printline();
	garito7.print(); printline();
	garito8.print(); printline();
	garito9.print(); printline();
	garito10.print(); printline();
	garito11.print(); printline();
	garito12.print(); printline();
	garito13.print(); printline();
	garito14.print(); printline();
	garito15.print(); printline();
	garito16.print(); printline();
	
	return(0);
}

void printline(void)
{
	cout << "-------------------------------------------" << endl;
}
