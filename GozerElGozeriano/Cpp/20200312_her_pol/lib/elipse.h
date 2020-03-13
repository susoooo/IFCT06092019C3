/*
2-Defina una clase Elipse derivada de forma. Recordatorio: una elipse queda definida por su radio mayor (R) y su radio menor (r), tal que el área de una elipse es igual a π*(R*r).
*/

#ifndef ELIPSE_H
#define ELIPSE_H

#include <iostream>
#include "forma.h"

#define PI 3.1415f

using namespace std;

class Elipse : public Forma
{
	protected:
	float radiomenor;
	float radiomayor;
	
	public:
	Elipse(colores color,float x, float y, const char * name, float radiomayor, float radiomenor) : Forma(color,x,y,name)
	{
		this->radiomenor = radiomenor;
		this->radiomayor = radiomayor;
	}
	void setradiomayor(float size);
	void setradiomenor(float size);
	void area(float * area);
	void perimetro(float * perimetro);
	void escala(float factor);
	void print(void);
};

void Elipse::print(void)
{
	Forma::print();
	cout << "Radio mayor:\t" << this->radiomayor << endl;
	cout << "Radio menor:\t" << this->radiomenor << endl;
}

void Elipse::setradiomayor(float size)
{
	this->radiomayor=size;
}

void Elipse::setradiomenor(float size)
{
	this->radiomenor=size;
}

void Elipse::area(float * area)  // π*(R*r)
{
	* area = PI*this->radiomenor*this->radiomayor;
}

void Elipse::perimetro(float * perimetro)
{
	* perimetro = 2*this->radiomayor+2*this->radiomenor;
}

void Elipse::escala(float factor)
{
	this->radiomenor *= factor;
	this->radiomayor *= factor;
}

#endif
