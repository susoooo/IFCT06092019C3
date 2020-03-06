/*
6-Dentro de la categoría de tiendas, la inmobiliaria trabaja con tiendas de ropa, de comida, Ferreterías y Droguerías. De las tiendas de ropa, desea guardar información sobre si tienen espacio de probadores, y si tienen aseos. De las tiendas de comida, desean almacenar información sobre el número de liniales que posee la tienda, asi como el número de cajas de las que disponen. De las Ferreterías se desea guardar información sobre los metros cuadrados dedicados a almacen en el local, y de las Droguerías, se desea guardar datos sobre si están habilitadas para contener materiales peligrosos. Crea una clase por cada tipo de tienda de las antedichas que permita almacenar y gestionar la información indicada.
*/

#ifndef ROPA_H
#define ROPA_H

#include <iostream>
#include <string>
#include "tienda.h"

using namespace std;

class Ropa : public Tienda
{
	protected:
	bool probadores;
	bool aseos;
	void printcheck(bool chk);
	
	public:
	Ropa(string direccion, float metros2, float preciometro2, float metrosfachada, bool probadores, bool aseos) : Tienda(direccion,metros2,preciometro2,metrosfachada)
	{
		this->probadores = probadores;
		this->aseos = aseos;
	}
	void print(void);
};

void Ropa::print(void)
{
	Tienda::print();
	cout << "Probadores: ";
	printcheck(this->probadores);
	cout << "Aseos: ";
	printcheck(this->aseos);
}

void Ropa::printcheck(bool chk)
{
	if(chk) cout << "Sí." << endl;
	else cout << "No." << endl;
}

#endif
