/*
4-Defina una clase Circulo derivada de la clase Elipse.
*/

#ifndef CIRCULO_H
#define CIRCULO_H

#include <iostream>
#include "elipse.h"

using namespace std;

class Circulo : public Elipse
{
	protected:
	
	public:
	Circulo(colores color,float x, float y, const char * name, float radio) : Elipse(color,x,y,name,radio,radio)
	{
		// Do nothing
	}
	void setradio(float size);
	void print(void);
};

void Circulo::print(void)
{
	Forma::print();
	cout << "Radio:\t" << this->radiomayor << endl;
}

void Circulo::setradio(float size)
{
	this->radiomayor=size;
	this->radiomenor=size;
}

#endif
