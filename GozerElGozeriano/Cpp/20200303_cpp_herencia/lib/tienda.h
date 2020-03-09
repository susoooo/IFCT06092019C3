/*
5-La inmobiliaria anterior está especializada en la gestión de locales destinados a tiendas o a Hostelería. De los locales destinados a tiendas desea guardar información sobre los metros de fachada que tiene y de los loscales destinados a Hostelería, información sobre el tiempo que el local lleva abierto. Crea un par de clases que permitan almacenar y gestionar la información indicada.
*/

#ifndef TIENDA_H
#define TIENDA_H

#include <iostream>
#include <string>
#include "local.h"

using namespace std;

class Tienda : public Local
{
	protected:
	float metrosfachada;
	
	public:
	Tienda(string direccion, float metros2, float preciometro2, float metrosfachada) : Local(direccion,metros2,preciometro2)
	{
		this->metrosfachada = metrosfachada;
	}
	void print(void);
};

void Tienda::print(void)
{
	Local::print();
	cout << "Metros de fachada: " << this->metrosfachada << endl;
}

#endif
