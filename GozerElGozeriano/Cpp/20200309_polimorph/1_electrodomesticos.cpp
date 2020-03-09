/*
1-Crea una clase electrodoméstico. Esta clase incluirá información sobre la potencia del electrodomestico y su consumo por hora en watios y el número de horas que lleva encendido desde el último ciclo de consumo. Incluyele un método calcular_consumo que calcule el consumo como el resultado de multiplicar la portencia por su consumo por hora por el tiempo que lleva encendido desde el último ciclo de consumo.
Crea una clase lavadora, hija de electrodoméstico, que calcule el consumo teniendo en cuenta que la potencia que utiliza para el consumo es la mitad de la que tiene como propiedad.
Crea una clase nevera, hija de electrodoméstico, que calcule el consumo teniendo en cuenta que el consumo por hora es un 70% del que tiene especificado como propiedad.
Crea una clase radiador, hija de electrodomestico, que calcule el consumo de la misma forma que su predecesora.
Haz un programa que pida al usuario los datos de 3 lavadoras, 3 neveras y 3 radiadores, y haz que se calculen los consumos de cada uno de ellos.
*/

#include <iostream>
#include "lib/nevera.h"
#include "lib/lavadora.h"
#include "lib/radiador.h"

using namespace std;

int main(void)
{
	int n;
	float potencia;
	float consumohora;
	float horas;
	
	Lavadora lavadoras[3] = { Lavadora(), Lavadora(), Lavadora() };
	Nevera neveras[3] = { Nevera(), Nevera(), Nevera() };
	Radiador radiadores[3] = { Radiador(), Radiador(), Radiador() };
	
	for(n=0;n<1;n++)
	{
		cout << "Lavadora " << n+1 << endl;
		cout << "Potencia: ";
		cin >> potencia;
		cout << "Consumo hora: ";
		cin >> consumohora;
		cout << "Horas: ";
		cin >> horas;
		lavadoras[n].setpotencia(potencia);
		lavadoras[n].setconsumohora(consumohora);
		lavadoras[n].sethoras(horas);
	}

	for(n=0;n<3;n++)
	{
		cout << "Nevera " << n+1 << endl;
		cout << "Potencia: ";
		cin >> potencia;
		cout << "Consumo hora: ";
		cin >> consumohora;
		cout << "Horas: ";
		cin >> horas;
		neveras[n].setpotencia(potencia);
		neveras[n].setconsumohora(consumohora);
		neveras[n].sethoras(horas);
	}

	for(n=0;n<3;n++)
	{
		cout << "Radiador " << n+1 << endl;
		cout << "Potencia: ";
		cin >> potencia;
		cout << "Consumo hora: ";
		cin >> consumohora;
		cout << "Horas: ";
		cin >> horas;
		radiadores[n].setpotencia(potencia);
		radiadores[n].setconsumohora(consumohora);
		radiadores[n].sethoras(horas);
	}
	
	cout << endl << "Calculo de consumos:" << endl;
	for(n=0;n<3;n++)
	{
		cout << "Lavadora " << n+1 << endl;
		cout << lavadoras[n].calcularConsumo() << endl;
		cout << "Nevera " << n+1 << endl;
		cout << neveras[n].calcularConsumo() << endl;
		cout << "Radiador " << n+1 << endl;
		cout << radiadores[n].calcularConsumo() << endl;
	}
	

	return(0);
}
