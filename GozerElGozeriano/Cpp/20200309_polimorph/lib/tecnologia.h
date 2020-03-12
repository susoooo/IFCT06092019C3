/*
2-Crea una clase asignatura. Dicha clase tendrá como propiedades, el nombre, y un código de identificación. Tambien tendrá un metodo para calcular la nota media, que devolverá siempre un 10.
Crea una clase ciencias, heredera de la clase asignatura, que tendrá como mucho 5 notas. Crea un método de calculo de la nota media que la calcule sopesando igualmente las 5 notas.
Crea una clase letras, heredada de la clase asignatura, que tendrá como mucho 10 notas. Crea un método de cálculo de la nota media que la calcule de forma que el resultado será 50% la media de las notas anteriores a la última nota, y 50% la última nota.
Crea una clase músicas, heredada de la clase asigantura, que tendrá una sola nota. Crea un método de cálculo de la nota media que devuelva la nota que figura en dicha propiedad.
Crea una clase Tecnologicas, heredera de la clase ciencias, que tendrá 5 notas de prácticas. Calcula la nota media teniendo en cuenta que el 70% de dicha nota debe ser la media de las 5 notas, y el 30% de dicha nota debe ser la media de las notas de prácticas.
Crea un programa que pida al usuario los datos para 1 asignatura Tecnológica, una de ciencias, una de letras, y una de música y que imprima las notas medias.
*/

#ifndef Tecnologia_H
#define Tecnologia_H

#include <iostream>
#include "ciencias.h"

#define NOTASPRACTICAS 5

using namespace std;

class Tecnologia : public Ciencias
{
	protected:
	float notaspracticas[NOTASPRACTICAS];
	
	public:
	Tecnologia(void);
	void setNota(int position, float nota, bool practica);
	float getNotamedia(void);
	void print(void);
};

Tecnologia::Tecnologia(void)
{
	int n;
	for(n=0;n<NOTASCIENCIAS;n++) this->notas[n]=0.0f;
}

void Tecnologia::setNota(int position, float nota, bool practica)
{
	if(practica)
		this->notaspracticas[position]=nota;
	else
		this->notas[position]=nota;
}

float Tecnologia::getNotamedia(void)
{
	int n;
	float total;
	total = 0.0f;
	for(n=0;n<NOTASPRACTICAS;n++) total+=this->notaspracticas[n];
	return((total/(float)NOTASPRACTICAS)*30.0f/100.0f+(Ciencias::getNotamedia()*70.0f/100.0f));
}

#endif
