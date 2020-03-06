/*
9-Por último, otras de las lienas de negocio que están abriendo con respecto a los locales de tiendas de alimentación, es la especialización en locales para fruterías, carnicerías y panaderías. Con respecto a las primeras, quisieran poder almacenar información sobre si el local dispone o no de cámara frigorifica, sobre las segundas del número de frigoríficos de los que dispone el local y sobre las terceras, de si tiene espacio para proporcionar servicio de cafetería y el número de armarios de pan del que dispone el local.

*/

#ifndef PANADERIA_H
#define PANADERIA_H

#include <iostream>
#include <string>
#include "comida.h"

using namespace std;

class Panaderia : public Comida
{
	protected:
	int armarios;
	
	public:
	Panaderia(string direccion, float metros2, float preciometro2, float metrosfachada, int liniales, int numcajas, int numarmarios) : Comida(direccion,metros2,preciometro2,metrosfachada,liniales,numcajas)
	{
		this->armarios = numarmarios;
	}
	void print(void);
};

void Panaderia::print(void)
{
	Comida::print();
	cout << "Número de armarios: " << armarios << endl;;
}

#endif
