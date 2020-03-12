/*
2-Crea una clase asignatura. Dicha clase tendrá como propiedades, el nombre, y un código de identificación. Tambien tendrá un metodo para calcular la nota media, que devolverá siempre un 10.
Crea una clase ciencias, heredera de la clase asignatura, que tendrá como mucho 5 notas. Crea un método de calculo de la nota media que la calcule sopesando igualmente las 5 notas.
Crea una clase letras, heredada de la clase asignatura, que tendrá como mucho 10 notas. Crea un método de cálculo de la nota media que la calcule de forma que el resultado será 50% la media de las notas anteriores a la última nota, y 50% la última nota.
Crea una clase músicas, heredada de la clase asigantura, que tendrá una sola nota. Crea un método de cálculo de la nota media que devuelva la nota que figura en dicha propiedad.
Crea una clase Tecnologicas, heredera de la clase ciencias, que tendrá 5 notas de prácticas. Calcula la nota media teniendo en cuenta que el 70% de dicha nota debe ser la media de las 5 notas, y el 30% de dicha nota debe ser la media de las notas de prácticas.
Crea un programa que pida al usuario los datos para 1 asignatura Tecnológica, una de ciencias, una de letras, y una de música y que imprima las notas medias.
*/

#ifndef LETRAS_H
#define LETRAS_H

#include <iostream>
#include "asignatura.h"

using namespace std;

class Letras : public Asignatura
{
	protected:
	float notas[NOTASLETRAS];
	
	public:
	Letras(void);
	void setNota(int position, float nota);
	float getNotamedia(void);
	void print(void);
};

Letras::Letras(void)
{
	int n;
	for(n=0;n<NOTASLETRAS;n++) this->notas[n]=0.0f;
}

void Letras::setNota(int position, float nota)
{
	this->notas[position]=nota;
}

float Letras::getNotamedia(void)
{
	int n;
	float total;
	total = 0.0f;
	for(n=0;n<NOTASLETRAS-1;n++) total+=this->notas[n];
	return(((total/(float)NOTASLETRAS-1)/2.0f)+(notas[NOTASLETRAS]/2.0f));
}

#endif
