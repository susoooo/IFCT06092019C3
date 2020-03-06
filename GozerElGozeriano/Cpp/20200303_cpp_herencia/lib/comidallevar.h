/*
7-Asimismo, y en relación con los locales destinados a hostelería, la inmobiliaria se ha especializado en Bares, Restaurantes y locales de comida para llevar. Sobre los locales destinados a bares, desean guardar información sobre el número de barras de las que dispone. Sobre los locales de Restaurantes, desean almacenar información sobre el número de mesas de las que disponen, así como de los metros cuadrados destinados a comedor, y de los metros cuadrados destinados a cocina. Sobre los locales de comida para llevar, desean almacenar información sobre si tiene cocina o no, y si disponen de plan de evacuación.
*/

#ifndef COMIDALLEVAR_H
#define COMIDALLEVAR_H

#include <iostream>
#include <string>
#include "hosteleria.h"

using namespace std;

class Comidallevar : public Hosteleria
{
	protected:
	bool cocina;
	bool evacuacion;
	
	public:
	Comidallevar(string direccion, float metros2, float preciometro2, int anoApertura, int mesApertura, int diaApertura, bool cocina, bool plnevac) : Hosteleria(direccion,metros2,preciometro2,anoApertura,mesApertura,diaApertura)
	{
		this->cocina = cocina;
		this->evacuacion = plnevac;
	}
	void print(void);
};

void Comidallevar::print(void)
{
	Hosteleria::print();
	cout << "Cocina: ";
	printcheck(this->cocina);
	cout << "Plan de evacuación: ";
	printcheck(this->evacuacion);
}

#endif
