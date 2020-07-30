/*
3-Crea una clase que represente un automovil
Deberá incluir al menos métodos para encenderlo, apagarlo, abrirlo y cerrarlo.
Crea un programa que abra un coche, lo arranque, lo acelere hasta 100 km/h, lo pare, lo apague y lo cierre.
*/

#include <iostream>
#define MAXWINGANG 45.0f
#define C 299792458 // m/s

using namespace std;


class xWing
{
	float wingAngular;
	bool lightSpeed;
	bool powerOn;
	float speed;
	int blasters[4];
	bool busyR2;
	
	
	public:
		void powerEngine();
		
};
