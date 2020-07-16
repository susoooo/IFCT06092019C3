/*
2. Secretario. Tiene despacho, número de fax e incrementa su salario un 5% anual.
Tendrá, al menos, las siguientes funciones miembro:
	• Constructores (debe rellenar la información personal y los datos principales)
	• Imprimir (debe imprimir sus datos personales y su puesto en la empresa).
*/

#ifndef SECRETARIO_H
#define SECRETARIO_H

#include <iostream>
#include "empleado.h"

using namespace std;

class Secretario : public Empleado
{
	int despacho;
	int fax;
	float incrementosalario = 5.0f;
	
public:
	Secretario(string newName, string newLastName, int DNIn, char DNIc, string AddressRoad, int AddressNumber, int newTlf, float newsalariomes, int despacho, int fax) : Empleado(newName, newLastName, DNIn, DNIc, AddressRoad, AddressNumber, newTlf, newsalariomes)
	{
		this->despacho = despacho;
		this->fax = fax;
	}
	void print(void)
	{
		Empleado::print();
		cout << "Puesto: Secretario." << endl;
		cout << "Despacho: " << this->despacho << endl;
		cout << "Fax: " << this->fax << endl;
		cout << "-------------------------------------------" << endl;
	}
};
#endif
