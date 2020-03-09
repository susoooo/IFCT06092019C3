/*
2-Defina una clase derivada Rectangulo que tenga los siguientes miembros como datos:
	 - Lado menor.
	 - Lado mayor.
  Y, al menos, las siguientes funciones miembro:
     	 - Calcular el área (lado menor * lado mayor).
	 - Calcular el perímetro. (2 * lado menor + 2 * lado mayor).
	 - Cambiar el tamaño del rectángulo. Recibe como parámetro un factor
	   de escala. Así, por ejemplo, si el factor vale 2, el rectángulo
	   duplicará su tamaño y si es 0,5 se reducirá a la mitad.
*/

#ifndef RECTANGULO_H
#define RECTANGULO_H

#include <iostream>
#include "forma.h"

using namespace std;

class Rectangulo : public Forma
{
	protected:
	float ladomenor;
	float ladomayor;
	
	public:
	Rectangulo(colores color,float x, float y, const char * name, float ladomayor, float ladomenor) : Forma(color,x,y,name)
	{
		this->ladomenor = ladomenor;
		this->ladomayor = ladomayor;
	}
	void setladomayor(float size);
	void setladomenor(float size);
	float area(void);
	float perimetro(void);
	void escala(float factor);
	void print(void);
};

void Rectangulo::print(void)
{
	Forma::print();
	cout << "Lado mayor:\t" << this->ladomayor << endl;
	cout << "Lado menor:\t" << this->ladomenor << endl;
}

void Rectangulo::setladomayor(float size)
{
	this->ladomayor=size;
}

void Rectangulo::setladomenor(float size)
{
	this->ladomenor=size;
}

float Rectangulo::area(void)
{
	return(this->ladomenor*this->ladomayor);
}

float Rectangulo::perimetro(void)
{
	return(2*this->ladomayor+2*this->ladomenor);
}

void Rectangulo::escala(float factor)
{
	this->ladomenor *= factor;
	this->ladomayor *= factor;
}

#endif
