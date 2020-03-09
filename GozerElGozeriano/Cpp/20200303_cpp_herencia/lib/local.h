/*
4-Una inmobiliaria desea crear un programa en un lenguaje orientado a objetos que le permita almacenar información de los locales comerciales que gestiona. La información que desea almacenar sobre cada local comercial es dirección, metros cuadrados y precio del metro cuadrado. Crea una clase que pueda utilizarse para representar esta información.
*/

#ifndef LOCAL_H
#define LOCAL_H

#include <iostream>
#include <string>

using namespace std;

class Local
{
	protected:
	string direccion;
	float metros2;
	float preciometro2;
	void printcheck(bool chk);
	
	public:
		Local(string direccion, float metros2, float preciometro2);
		void print();
};

Local::Local(string direccion, float metros2, float preciometro2)
{
	this->direccion = direccion;
	this->metros2 = metros2;
	this->preciometro2 = preciometro2;
}

void Local::print()
{
	cout << "Dirección: " << this->direccion << endl;
	cout << "Metros²: " << this->metros2 << endl;
	cout << "Precio m²: " << this->preciometro2 << endl;
}

void Local::printcheck(bool chk)
{
	if(chk) cout << "Sí." << endl;
	else cout << "No." << endl;
}

#endif
