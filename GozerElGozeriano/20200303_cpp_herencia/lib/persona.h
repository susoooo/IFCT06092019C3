/*
1-Crea una clase que represente a una persona. Al menos debe contener información sobre su nombre, apellido primero y segundo, fecha de nacimiento, lugar de nacimiento y pais de nacimiento. Crea constructores que permitan la creación de personas sin saber sus datos, conociendo su DNI, su nombre y apellidos, ambos, y todos los datos incluidos en la clase.

Crea objetos para cada uno de los compañeros de clase usando diferentes constructores y haz que las clases impriman los datos que tienen sobre ellos.


2-Crea un destructor para la clase anterior que al destruir la clase haga que la persona se despida diciendo su nombre.

3-Crea otro destructor para la clase persona que imprima un mensaje de "DEscanse en paz" indicando la edad que tenía la persona que que representaba el objeto en el momento de destruir el objeto.
*/

#ifndef PERSONA_H
#define PERSONA_H

#include <iostream>
#include <string>
#include "dni.h"

using namespace std;

struct Fecha
{
	int dia;
	int mes;
	int anyo;
};

class Persona
{
	protected:
	class Dni nif;
	string name;
	string lastname1;
	string lastname2;
	struct Fecha borndate;
	string ciudad;
	string pais;
	
	void create(int nDni, char cDni, string nombre, string ln1, string ln2, int dnac, int mnac, int anac, string ciudadnac, string paisnac);
	int getAge(void);
	
	public:
		Persona(void);
		Persona(int nDni, char cDni);
		Persona(string nombre, string ln1, string ln2);
		Persona(int nDni, char cDni, string nombre, string ln1, string ln2, int dnac, int mnac, int anac, string ciudadnac, string paisnac);
		~Persona(void);
		void print();
};

void Persona::create(int nDni, char cDni, string nombre, string ln1, string ln2, int dnac, int mnac, int anac, string ciudadnac, string paisnac)
{
	nif.setDNI(nDni,cDni);
	name = nombre;
	lastname1 = ln1;
	lastname2 = ln2;
	borndate.dia = dnac;
	borndate.mes = mnac;
	borndate.anyo = anac;
	ciudad = ciudadnac;
	pais = paisnac;
}

Persona::Persona(void)
{
	create(0, 'A', "", "", "", 0, 0, 0, "", "");
}

Persona::Persona(int nDni, char cDni)
{
	create(nDni, cDni, "", "", "", 0, 0, 0, "", "");
}

Persona::Persona(string nombre, string ln1, string ln2)
{
	create(0, 'A', nombre, ln1, ln2, 0, 0, 0, "", "");
}

Persona::Persona(int nDni, char cDni, string nombre, string ln1, string ln2, int dnac, int mnac, int anac, string ciudadnac, string paisnac)
{
	create(nDni,cDni,nombre,ln1,ln2,dnac,mnac,anac,ciudadnac,paisnac);
}

Persona::~Persona(void)
{
	// cout << name << " dice 'Au!'" << endl; /* Ejercicio 2 */
	
	/* Ejercicio 3 */
	cout << name << ", " << getAge() << " años." << endl << "Descanse en paz." << endl;
}

void Persona::print()
{
	cout << "DNI: " << nif.getDNI() << endl;
	cout << "Nombre: " << name << endl;
	cout << "Apellidos: " << lastname1 << " " << lastname2 << endl;
	cout << "Fecha de nacimiento: " << borndate.anyo << "/" << borndate.mes << "/" << borndate.dia << endl;
	cout << "Ciudad: " << ciudad << endl;
	cout << "Pais: " << pais << endl;
	cout << "-------------------------------------------" << endl;
}

int Persona::getAge(void)
{
	int age;
	time_t t;
	t = time(0);
	tm* now = localtime(&t);
	age = now->tm_year+1900-borndate.anyo;
	if(now->tm_mon+1 - borndate.mes < 0)
		age--;
	if(now->tm_mon+1 - borndate.mes == 0 && now->tm_mday - borndate.dia < 0)
		age--;
	return(age);
}

#endif
