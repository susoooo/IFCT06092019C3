/*
9-Por último, otras de las lienas de negocio que están abriendo con respecto a los locales de tiendas de alimentación, es la especialización en locales para fruterías, carnicerías y panaderías. Con respecto a las primeras, quisieran poder almacenar información sobre si el local dispone o no de cámara frigorifica, sobre las segundas del número de frigoríficos de los que dispone el local y sobre las terceras, de si tiene espacio para proporcionar servicio de cafetería y el número de armarios de pan del que dispone el local.

*/

#ifndef FRUTERIA_H
#define FRUTERIA_H

#include <iostream>
#include <string>
#include "comida.h"

using namespace std;

class Fruteria : public Comida
{
	protected:
	bool frigorifico;
	
	public:
	Fruteria(string direccion, float metros2, float preciometro2, float metrosfachada, int liniales, int numcajas, bool hasFridge) : Comida(direccion,metros2,preciometro2,metrosfachada,liniales,numcajas)
	{
		this->frigorifico = hasFridge;
	}
	void print(void);
};

void Fruteria::print(void)
{
	Comida::print();
	cout << "Frigorífico: ";
	printcheck(frigorifico);
}

#endif
