/*
1-Crea una clase que represente a una persona. Al menos debe contener información sobre su nombre, apellido primero y segundo, fecha de nacimiento, lugar de nacimiento y pais de nacimiento. Crea constructores que permitan la creación de personas sin saber sus datos, conociendo su DNI, su nombre y apellidos, ambos, y todos los datos incluidos en la clase. 
Crea objetos para cada uno de los compañeros de clase usando diferentes constructores y haz que las clases impriman los datos que tienen sobre ellos.
*/

#include <iostream>
#include <string>
#include "lib/dni.h"
#include "lib/persona.h"

using namespace std;

int main(void)
{
	//class Persona Alumno;
	//class Persona Alumno2(53333666,'J');
	//class Persona Alumno3("Klaatu","Barada","Nikto");
	class Persona Alumno4(53333666,'J',"Klaatu","Barada","Nikto",11,11,1979,"Sofia","Bulgaria");
	//Alumno.print();
	//Alumno2.print();
	//Alumno3.print();
	Alumno4.print();
	return(0);
}
