/*
1-Crea una clase electrodoméstico. Esta clase incluirá información sobre la potencia del electrodomestico y su consumo por hora en watios y el número de horas que lleva encendido desde el último ciclo de consumo. Incluyele un método calcular_consumo que calcule el consumo como el resultado de multiplicar la portencia por su consumo por hora por el tiempo que lleva encendido desde el último ciclo de consumo.
Crea una clase lavadora, hija de electrodoméstico, que calcule el consumo teniendo en cuenta que la potencia que utiliza para el consumo es la mitad de la que tiene como propiedad.
Crea una clase nevera, hija de electrodoméstico, que calcule el consumo teniendo en cuenta que el consumo por hora es un 70% del que tiene especificado como propiedad.
Crea una clase radiador, hija de electrodomestico, que calcule el consumo de la misma forma que su predecesora.
Haz un programa que pida al usuario los datos de 3 lavadoras, 3 neveras y 3 radiadores, y haz que se calculen los consumos de cada uno de ellos.
*/

#ifndef RADIADOR_H
#define RADIADOR_H

#include <iostream>
#include "electrodomestico.h"

using namespace std;

class Radiador : public Electrodomestico
{
};


#endif
