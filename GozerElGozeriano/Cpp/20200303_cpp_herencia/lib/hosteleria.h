/*
5-La inmobiliaria anterior está especializada en la gestión de locales destinados a tiendas o a Hostelería. De los locales destinados a tiendas desea guardar información sobre los metros de fachada que tiene y de los loscales destinados a Hostelería, información sobre el tiempo que el local lleva abierto. Crea un par de clases que permitan almacenar y gestionar la información indicada.
*/

#ifndef HOSTELERIA_H
#define HOSTELERIA_H

#include <iostream>
#include <string>
#include "local.h"

using namespace std;

struct Fecha
{
	int dia;
	int mes;
	int anyo;
};

class Hosteleria : public Local
{
	protected:
	struct Fecha FechaApertura;
	
	public:
	Hosteleria(string direccion, float metros2, float preciometro2, int anoApertura, int mesApertura, int diaApertura) : Local(direccion,metros2,preciometro2)
	{
		this->FechaApertura.anyo = anoApertura;
		this->FechaApertura.mes = mesApertura;
		this->FechaApertura.dia = diaApertura;
	}
	void print(void);
};

void Hosteleria::print(void)
{
	Local::print();
	cout << "Fecha de apertura: " << this->FechaApertura.anyo << "/" << this->FechaApertura.mes << "/" << this->FechaApertura.dia << endl;
}

#endif
