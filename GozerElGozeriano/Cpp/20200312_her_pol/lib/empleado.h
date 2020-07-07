/*
1. Empleado. Clase básica que describe a un empleado. Incluye sus datos personales (nombre, apellidos, DNI, dirección) y algunos datos tales como los años de antigüedad, teléfono de contacto y su salario.

Incluye también información de quién es el empleado que lo supervisa
(Empleado *). Tendrá, al menos, las siguientes funciones miembro:
	• Constructores para definir correctamente un empleado, a partir de su nombre,apellidos, DNI, dirección, teléfono y salario.
	• Imprimir (A través de los operadores de E/S redefinidos)
	• Cambiar supervisor
	• Incrementar salario
*/

#ifndef EMPLEADO_H
#define EMPLEADO_H

#include <iostream>
#include <string>
#include "dni.h"

using namespace std;

struct Date
{
	int day;
	int month;
	int year;
};

struct Address
{
	string road;
	int number;
};

class Empleado
{
private:
	string name;
	string lastname;
	bool hasOverseer;
	class Dni nif;
	struct Date hiredDate;
	struct Address contactAddress;
	int tlf;
	float salariomes;
	class Empleado * overseer;
	
public:
	Empleado(string newName, string newLastName, int DNIn, char DNIc, string AddressRoad, int AddressNumber, int newTlf, float newsalariomes)
	{
		this->name = newName;
		this->lastname = newLastName;
		this->nif.setDNI(DNIn,DNIc);
		this->contactAddress.road = AddressRoad;
		this->contactAddress.number = AddressNumber;
		this->tlf = newTlf;
		this->salariomes = newsalariomes;
		this->hasOverseer = false;
	}
	void print(void);
	void printName(void);
	void incrementarSalario(float ammount);
	void changeOverseer(class Empleado * newOverseer);
};

void Empleado::print(void)
{
	cout << "DNI: " << nif.getDNI() << endl;
	cout << "Nombre: "; printName();
	cout << "Dirección: " << contactAddress.road << " Nº" << contactAddress.number << endl;
	cout << "Teléfono: " << tlf << endl;
	cout << "Salario: " << salariomes << endl;
	if(hasOverseer){ cout << "Supervisor: "; overseer->printName(); }
	//cout << "-------------------------------------------" << endl;
}

void Empleado::incrementarSalario(float ammount)
{
	salariomes = salariomes + ammount;
}

void Empleado::changeOverseer(class Empleado * newOverseer)
{
	this->overseer = newOverseer;
	this->hasOverseer = true;
}

void Empleado::printName(void)
{
	cout << lastname << ", " << name << endl;
}

#endif
