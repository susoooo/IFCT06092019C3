/*1-Crea una clase electrodoméstico.
Esta clase incluirá información sobre la potencia del electrodomestico
y su consumo por hora en watios y el número de horas que lleva encendido
 desde el último ciclo de consumo.

 Incluyele un método calcular_consumo que calcule el consumo
 como el resultado de multiplicar la potencia por su consumo por hora por el tiempo que lleva encendido
  desde el último ciclo de consumo.

Crea una clase lavadora, hija de electrodoméstico,
que calcule el consumo teniendo en cuenta que la potencia
que utiliza para el consumo es la mitad de la que tiene como propiedad.

Crea una clase nevera, hija de electrodoméstico, que calcule
el consumo teniendo en cuenta que el consumo por hora
es un 70% del que tiene especificado como propiedad.
Crea una clase radiador, hija de electrodomestico,
que calcule el consumo de la misma forma que su predecesora.
Haz un programa que pida al usuario los datos de 3 lavadoras,
3 neveras y 3 radiadores, y haz que se calculen los consumos de cada uno de ellos.*/


#include <iostream>
#include <string.h>

using namespace std;


class electrodomestico
{
    int potencia()
    int watios;
    int horas;


public:


    virtual int consumo() = 0;
    //Constructores o métodos de la clase
    electrodomestico();
    electrodomestico(int pot, int wat, int hor);



    void leerDatos(); //MÉTODOS
};


electrodomestico::electrodomestico()
{
    potencia= 0;
    watios= 0;
    horas= 0;
    consumo = 0;
}


electrodomestico::electrodomestico(int pot, int wat, int hor)
{
    potencia= pot;
    watios= wat;
    horas= hor;

    consumo = pot* wat* hor;
    return(consumo);
}


class lavadora: public electrodomestico
{

int potencia (int)

public:

float consumo()
  {
     return pot* wat* hor;
    }
};




