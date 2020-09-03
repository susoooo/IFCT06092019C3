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
#include <math.h>
#include <conio.h>

using namespace std;


class electrodomestico
{
protected:

    int potencia;
    int watios;
    int horas;


public:

    electrodomestico();
    electrodomestico(int pot, int wat, int hor);


   virtual int calcular_consumo()
    {
        return (potencia * watios * horas);
        }

};


electrodomestico::electrodomestico()
{
    potencia= 0;
    watios= 0;
    horas= 0;

}


electrodomestico::electrodomestico(int pot, int wat, int hor)
{
    potencia= pot;
    watios= wat;
    horas= hor;


}


class lavadora: public electrodomestico
{
public:

    lavadora(int pot, int wat, int hor);

    int calcular_consumo()
    {return ((potencia/2)* watios* horas);}

};

lavadora::lavadora(int pot, int wat, int hor)
{
    potencia= pot;
    watios= wat;
    horas= hor;


}



class nevera: public electrodomestico
{
public:

    nevera(int pot, int wat, int hor);

    int calcular_consumo()
    {return (potencia* (float)(watios*0.70)*horas);}


};

nevera::nevera(int pot, int wat, int hor)
{
    potencia= pot;
    watios= wat;
    horas= hor;

}


class radiador: public electrodomestico
{
public:

    radiador(int pot, int wat, int hor);

};

radiador::radiador(int pot, int wat, int hor)
{
    potencia= pot;
    watios= wat;
    horas= hor;


}



int main()
{
    int potencia;
    int watios;
    int horas;
    int contador;


    for (contador=0;contador<3;contador++)
    {

    cout << "Dame los datos de 1 lavadora: " << endl;

    cout << "La potencia es: " << endl;
    cin >> potencia;
    cout << "Los watios son: " << endl;
    cin >> watios;
    cout << "Las horas son: " << endl;
    cin >> horas;

    lavadora lav(potencia,watios,horas);
    cout << "Lavadora: Su consumo es " << lav.calcular_consumo() << endl;


    cout << "Dame los datos de 3 neveras: "<<endl;
    cout << "La potencia es: " << endl;
    cin >> potencia;
    cout << "Los watios son: " << endl;
    cin >> watios;
    cout << "Las horas son: " << endl;
    cin >> horas;

    nevera nev(potencia,watios,horas);
    cout << "Nevera: Su consumo es "<< nev.calcular_consumo() << endl;

    cout << "Dame los datos de 3 radiadores: "<< endl;
    cout << "La potencia es: "<< endl;
    cin >> potencia;
    cout << "Los watios son: "<< endl;
    cin >> watios;
    cout << "Las horas son: "<< endl;
    cin >> horas;
    radiador rad(potencia,watios,horas);
    cout << "Radiador: Su consumo es "<< rad.calcular_consumo() << endl;

    }

}







