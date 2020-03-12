/*
5-Realice un programa que defina varias formas diferentes, cree un array de punteros de la clase Forma que apunten a los objetos creados. El programa debe realizar un bucle que recorra todas las formas, las ponga todas del mismo color y las mueva a una determinada posición.
6-¿qué ocurre en el ejercicio anterior si se intenta imprimir la información de cada forma y qué sucede si se intenta obtener en ese bucle el área de todas las formas del vector?
7-Utilice la técnica de las funciones virtuales para arreglar los comportamientos anómalos detectados en el ejercicio anterior.
8-Desarrolle un programa que, dado un conjunto de formas, calcule cuál tiene el área máxima e imprima la información de dicha forma.
*/

#include <iostream>
#include "lib/cuadrado.h"
#include "lib/circulo.h"

using namespace std;

int main(void)
{
	int n;
	float area;
	float perimetro;
	Rectangulo rect1(Rojo, 1.0f,4.5f,"Rectangulo",1.2f,1.1f);
	Cuadrado cuad1(Negro, 2.1f,4.6f,"Cuadrado",3.6f);
	Elipse eli1(Azul,2.2f,3.6f,"Elipse",5.2f,2.3f);
	Circulo circ1(Verde,4.4f,3.3f,"Circulo",4.3f);
	
	Forma * formas[4] { (Forma *)&rect1, (Forma *)&cuad1, (Forma *)&eli1, (Forma *)&circ1 };
	
	for(n=0;n<4;n++)
	{
		formas[n]->setColor(Rosa);
		formas[n]->print();
		formas[n]->area(&area);
		formas[n]->perimetro(&perimetro);
		cout << "Area: " << area << endl;
		cout << "Perimetro: " << perimetro << endl;
		cout << " # Mover a 3.0:3.0 #" << endl;
		formas[n]->moveForm(3.0f,3.0f,true);
		formas[n]->print();
		cout << " # Escalar 2x #" << endl;
		formas[n]->escala(2.0f);
		formas[n]->area(&area);
		formas[n]->perimetro(&perimetro);
		cout << "Area: " << area << endl;
		cout << "Perimetro: " << perimetro << endl;
		cout << "----------------------------------" << endl;
	}
	
	// 8. Calcular el area máxima
	int maxAreaPuntero;
	float ActualMaxArea;
	maxAreaPuntero=0;
	ActualMaxArea=0.0f;
	
	for(n=0;n<4;n++)
	{
		formas[n]->area(&area);
		if(area>ActualMaxArea)
		{
			maxAreaPuntero=n;
			ActualMaxArea=area;
		}
	}
	cout << " # Forma con la mayor área #" << endl;
	formas[maxAreaPuntero]->print();
	cout << "Area: " << ActualMaxArea << endl;
	// End 8
	
	
	return(0);
}
