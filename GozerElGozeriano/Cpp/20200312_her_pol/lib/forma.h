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
	Forma();
	Forma(colores color,float x, float y, const char * name);
	void setColor(colores newColor);
	colores getColor(void);
	void moveForm(float x, float y, bool absolute);
	void print(void);
	virtual void area(float * area){};
	virtual void perimetro(float * perimetro){};
	virtual void escala(float factor){};
};

Forma::Forma()
{
	this->color = Rojo;
	this->location.x = 0.0f;
	this->location.y = 0.0f;
	this->name = "Noname";
}

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

void Forma::moveForm(float x,float y, bool absolute)
{
	if(absolute)
	{
		this->location.x=x;
		this->location.y=y;
	}
	else
	{
		this->location.x+=x;
		this->location.y+=y;
	}
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
