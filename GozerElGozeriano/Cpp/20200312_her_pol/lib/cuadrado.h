/*
3-Defina una clase Cuadrado derivada de la clase Rectangulo.
*/

#ifndef CUADRADO_H
#define CUADRADO_H

#include <iostream>
#include "rectangulo.h"

using namespace std;

class Cuadrado : public Rectangulo
{
	protected:
	
	public:
	Cuadrado(colores color,float x, float y, const char * name, float lado) : Rectangulo(color,x,y,name,lado,lado)
	{
		// Do nothing
	}
	void setlado(float size);
	void print(void);
};

void Cuadrado::print(void)
{
	Forma::print();
	cout << "Lado :\t" << this->ladomayor << endl;
}

void Cuadrado::setlado(float size)
{
	this->ladomayor=size;
	this->ladomenor=size;
}

#endif
