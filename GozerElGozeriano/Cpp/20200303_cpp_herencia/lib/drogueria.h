/*
6-Dentro de la categoría de tiendas, la inmobiliaria trabaja con tiendas de ropa, de comida, Ferreterías y Droguerías. De las tiendas de ropa, desea guardar información sobre si tienen espacio de probadores, y si tienen aseos. De las tiendas de comida, desean almacenar información sobre el número de liniales que posee la tienda, asi como el número de cajas de las que disponen. De las Ferreterías se desea guardar información sobre los metros cuadrados dedicados a almacen en el local, y de las Droguerías, se desea guardar datos sobre si están habilitadas para contener materiales peligrosos. Crea una clase por cada tipo de tienda de las antedichas que permita almacenar y gestionar la información indicada.
*/

#ifndef DROGUERIA_H
#define DROGUERIA_H

#include <iostream>
#include <string>
#include "tienda.h"

using namespace std;

class Drogueria : public Tienda
{
	protected:
	bool matpeligrosos;
	
	public:
	Drogueria(string direccion, float metros2, float preciometro2, float metrosfachada, bool materialespeligrosos) : Tienda(direccion,metros2,preciometro2,metrosfachada)
	{
		this->matpeligrosos = materialespeligrosos;
	}
	void print(void);
};

void Drogueria::print(void)
{
	Tienda::print();
	cout << "Capacidad para materias peligrosas: ";
	printcheck(this->matpeligrosos);
}


#endif
