/*
2-Crea una clase asignatura. Dicha clase tendrá como propiedades, el nombre, y un código de identificación. Tambien tendrá un metodo para calcular la nota media, que devolverá siempre un 10.
Crea una clase ciencias, heredera de la clase asignatura, que tendrá como mucho 5 notas. Crea un método de calculo de la nota media que la calcule sopesando igualmente las 5 notas.
Crea una clase letras, heredada de la clase asignatura, que tendrá como mucho 10 notas. Crea un método de cálculo de la nota media que la calcule de forma que el resultado será 50% la media de las notas anteriores a la última nota, y 50% la última nota.
Crea una clase músicas, heredada de la clase asigantura, que tendrá una sola nota. Crea un método de cálculo de la nota media que devuelva la nota que figura en dicha propiedad.
Crea una clase Tecnologicas, heredera de la clase ciencias, que tendrá 5 notas de prácticas. Calcula la nota media teniendo en cuenta que el 70% de dicha nota debe ser la media de las 5 notas, y el 30% de dicha nota debe ser la media de las notas de prácticas.
Crea un programa que pida al usuario los datos para 1 asignatura Tecnológica, una de ciencias, una de letras, y una de música y que imprima las notas medias.
*/

#ifndef ASIGNATURA_H
#define ASIGNATURA_H

#include <iostream>
#define NOTASCIENCIAS 5
#define NOTASLETRAS 10
#define NOTASMUSICA 1
#define NOTASTECNO 5

using namespace std;

class Asignatura
{
	protected:
	const char * nombre;
	int id;
	
	public:
	Asignatura(void);
	Asignatura(const char * name, int id);
	int getnumNotas(void);
	void setname(const char * name);
	void setID(int newID);
	float getNotamedia(void);
	void print(void);
};

Asignatura::Asignatura(void)
{
	this->nombre = "";
	this->id = 0;	
}

Asignatura::Asignatura(const char * name, int id)
{
	this->nombre = name;
	this->id = id;
}

void Asignatura::setname(const char * name)
{
	this->nombre = name;
}

void Asignatura::setID(int newID)
{
	this->id = id;
}

float Asignatura::getNotamedia(void)
{
	return(10);
}

#endif
