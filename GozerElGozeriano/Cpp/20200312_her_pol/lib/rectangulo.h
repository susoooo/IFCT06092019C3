/*
1-Defina una clase Forma que tenga los siguientes miembros de datos:
	- Color
	- Coordenada del centro de la forma (objeto Punto)
	- Nombre de la forma (char *)
  Y, al menos, las siguientes funciones miembro:
	- Imprimir
	- Obtener y cambiar el color
	- Mover la forma (o sea, su centro)
 Defina una clase hija Rectangulo que tenga los siguientes miembros como datos:
	- Lado menor.
	- Lado mayor.
  Y, al menos, las siguientes funciones miembro:
	- Imprimir. Debe imprimir qué se trata de un rectángulo mostrando su nombre, color, centro y lado. Debería usarse la función Imprimir de la clase base para realizar parte de este trabajo.
	- Calcular el área (lado menor * lado mayor).
	- Calcular el perímetro. (2 * lado menor + 2 * lado mayor).
	- Cambiar el tamaño del rectángulo. Recibe como parámetro un factor de escala. Así, por ejemplo, si el factor vale 2, el rectángulo duplicará su tamaño y si es 0,5 se reducirá a la mitad.

Realice un programa que pruebe el funcionamiento de estas clases. Debe crear objetos y comprobar el correcto funcionamiento de las funciones miembro.
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
	void area(float * area);
	void perimetro(float * perimetro);
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

void Rectangulo::area(float * area)
{
	* area =this->ladomenor*this->ladomayor;
}

void Rectangulo::perimetro(float * perimetro)
{
	* perimetro = 2*this->ladomayor+2*this->ladomenor;
}

void Rectangulo::escala(float factor)
{
	this->ladomenor *= factor;
	this->ladomayor *= factor;
}

#endif
