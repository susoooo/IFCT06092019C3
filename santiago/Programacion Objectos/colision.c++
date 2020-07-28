#include <iostream>
#include <cstring>
#include <stdlib.h>
using namespace std;

class circulo
{
	private:
		float radio;
		float coordenadaX;
		float coordenadaY;
		int avance;
		int direccion;
	
	public:
		circulo();
		inicializar();
		introcoor();
		mover();
		~circulo();
};

circulo::circulo()
{
	inicializar();
}

circulo::inicializar()
{
	radio=rand()%4;
	coordenadaX=0;
	coordenadaY=0;
	avance=0;
	direccion=0;
}

circulo::introcoor()
{
	coordenadaX=rand() % 100;
	coordenadaY=rand() % 100;
}

circulo::mover()
{
	avance=rand() % 3;
	direccion=rand() % 4;
	swich (direccion)
	{
		case 0:
			coordenadaX+avance;
			break;
		
		case 1:
			coordenadaX-avance;
			break;
		
		case 2:
			coordenadaY+avance;
			break;
		
		case 3:
			coordenadaY-avance;
			break;			
	}
}

circulo::~circulo()
{
	inicializar()
}

int main
{
	int colision;
	colision=0;
	
	circulo Objcirculo1, Objcirculo2, Objcirculo3;
	Objcirculo1.introcoor();
	Objcirculo2.introcoor();
	Objcirculo3.introcoor();
	
	do
		Objcirculo1.mover();
		Objcirculo2.mover();
		Objcirculo3.mover();
	while(colision=0)

}