/*
1-Crea una clase electrodoméstico. Esta clase incluirá información sobre la potencia del electrodomestico y su consumo por hora en watios y el número de horas que lleva encendido desde el último ciclo de consumo. Incluyele un método calcular_consumo que calcule el consumo como el resultado de multiplicar la portencia por su consumo por hora por el tiempo que lleva encendido desde el último ciclo de consumo.
Crea una clase lavadora, hija de electrodoméstico, que calcule el consumo teniendo en cuenta que la potencia que utiliza para el consumo es la mitad de la que tiene como propiedad.
Crea una clase nevera, hija de electrodoméstico, que calcule el consumo teniendo en cuenta que el consumo por hora es un 70% del que tiene especificado como propiedad.
Crea una clase radiador, hija de electrodomestico, que calcule el consumo de la misma forma que su predecesora.
Haz un programa que pida al usuario los datos de 3 lavadoras, 3 neveras y 3 radiadores, y haz que se calculen los consumos de cada uno de ellos.
*/

#ifndef ELECTRODOMESTICO_H
#define ELECTRODOMESTICO_H

#include <iostream>

using namespace std;

class Electrodomestico
{
	protected:
	float potencia;
	float consumohora;
	float horas;
	
	public:
	Electrodomestico(void);
	Electrodomestico(float potencia, float consumohora);
	float calcularConsumo(void);
	void setpotencia(float kw);
	void setconsumohora(float kwh);
	void sethoras(float horas);
	void print(void);
};

Electrodomestico::Electrodomestico(void)
{
	this->potencia = 0;
	this->consumohora = 0;
	this->horas = 0;	
}

Electrodomestico::Electrodomestico(float potencia, float consumohora)
{
	this->potencia = potencia;
	this->consumohora = consumohora;
	this->horas = 0;
}

void Electrodomestico::setpotencia(float kw)
{
	this->potencia = kw;
}

void Electrodomestico::setconsumohora(float kwh)
{
	this->consumohora = kwh;
}

void Electrodomestico::sethoras(float horas)
{
	this->horas = horas;
}

void Electrodomestico::print(void)
{
	cout << "Potencia:\t" << this->potencia << endl;
	cout << "Consumo/hora:\t" << this->consumohora << endl;
	cout << "Horas funcionamiento:\t" << this->horas << endl;
	cout << "Consumo actual:\t" << calcularConsumo() << endl;
}

float Electrodomestico::calcularConsumo(void)
{
	return(this->potencia*this->consumohora*this->horas);
}

#endif
