/*1-Crea una clase que represente a un rectangulo mediante su base y su altura. Implementa métodos para cambiar su base y su altura, y otros que calcule su area y su perímetro. 
área= base * altura y perímetro=2*base + 2*altura).*/

#include <iostream>

using namespace std;

class Rectangulo
{
	private:
		double largo;
		double ancho;
	
	public:
		void setancho(float);
		void setlargo(float);
		
		float getancho();
		float getlargo();
		
		float getarea();
		float getperimetro();
		
};

void Rectangulo::setancho(float num)
{

	ancho= num;	
}	
	
 void Rectangulo::setlargo(float num2)
{

	largo= num2;	
}	   
 