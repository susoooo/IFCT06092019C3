/*
4-Realice un programa que cree cuatro rectangulos, pida por pantalla al usuario
el lado mayor y menor de los mismos y su color. A continuación haz que el programa
calcule el área y perimetro de dichos rectángulos. Luego pide por pantalla un factor
de escala para cambiar el tamaño de cada uno de los rectangulos y haz que el programa
muestre nuevamente el área y el perímetro de cada rectángulo.
*/

#include <iostream>
#include "lib/rectangulo.h"

using namespace std;

int main(void)
{
	int n;
	float ladoMayor;
	float ladoMenor;
	int color;
	float fctescala;
	
	Rectangulo rects[4] = { Rectangulo (Rojo, 1.0,4.5,"Cacharro",0.0f,0.0f),
							Rectangulo (Rojo, 2.0,3.5,"Trasto",0.0f,0.0f),
							Rectangulo (Rojo, 3.0,2.5,"Moñeco",0.0f,0.0f),
							Rectangulo (Rojo, 4.0,1.5,"Cachibache",0.0f,0.0f)};
	
	for(n=0;n<4;n++)
	{
		cout << "Rectangulo " << n+1 << endl;
		cout << "Lado mayor: ";
		cin >> ladoMayor;
		cout << "Lado menor: ";
		cin >> ladoMenor;
		cout << "Color" << endl;
		cout << "0) Rojo" << endl;
		cout << "1) Negro" << endl;
		cout << "2) Amarillo" << endl;
		cout << "3) Azul" << endl;
		cout << "4) Rosa" << endl;
		cout << "5) Verde" << endl;
		cin >> color;
		rects[n].setladomayor(ladoMayor);
		rects[n].setladomenor(ladoMenor);
		rects[n].setColor((colores)color);
	}
	
	for(n=0;n<4;n++)
	{
		cout << "Rectangulo " << n+1 << endl;
		cout << "Area: " << rects[n].area() << endl;
		cout << "Perimetro: " << rects[n].perimetro() << endl;
	}
	
	
	cout << endl << "Factor de escala: ";
	cin >> fctescala;
	
	for(n=0;n<4;n++)
	{
		rects[n].escala(fctescala);
		cout << "Rectangulo " << n+1 << endl;
		cout << "Area: " << rects[n].area() << endl;
		cout << "Perimetro: " << rects[n].perimetro() << endl;
	}
	
	
	
	return(0);
}
