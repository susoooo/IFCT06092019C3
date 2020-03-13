/*1-Defina una clase Forma que tenga los siguientes miembros de datos:
	 - Color
	 - Coordenada del centro de la forma (objeto Punto)
	 - Nombre de la forma (char *)
   Y, al menos, las siguientes funciones miembro:
	 - Obtener y cambiar el color
	 - Mover la forma (o sea, su centro)
*/

#ifndef FORMA_H
#define FORMA_H

#include <iostream>

using namespace std;

enum colores {Rojo, Negro, Amarillo, Azul, Rosa, Verde };

struct Punto
{
	float x;
	float y;
};

class Forma
{
	protected:
	enum colores color;
	struct Punto location;
	const char * name;
	void printColor(void);
	
	public:
	Forma(colores color,float x, float y, const char * name);
	void setColor(colores newColor);
	colores getColor(void);
	void moveForm(float x, float y);
	void print(void);
};

Forma::Forma(colores color,float x, float y, const char * name)
{
	this->color = color;
	this->location.x = x;
	this->location.y = y;
	this->name = name;
}

void Forma::print(void)
{
	cout << "Forma:\t" << name << endl;
	cout << "Color:\t"; printColor(); cout << endl;
	cout << "    X:\t" << location.x << endl;
	cout << "    Y:\t" << location. y << endl;
}

void Forma::setColor(colores newColor)
{
	this->color=newColor;
}

void Forma::moveForm(float x,float y)
{
	this->location.x+=x;
	this->location.x+=y;
}

colores Forma::getColor(void)
{
	return(this->color);
}

void Forma::printColor(void)
{
	switch(this->color)
	{
		case Rojo : cout << "Rojo"; break;
		case Negro : cout << "Negro"; break;
		case Amarillo : cout << "Amarillo"; break;
		case Azul : cout << "Azul"; break;
		case Rosa : cout << "Rosa"; break;
		case Verde : cout << "Verde"; break;
	}
}

#endif
