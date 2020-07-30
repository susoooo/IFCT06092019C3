/*
Crea una clase electrodoméstico. Esta clase incluirá información sobre 
la potencia del electrodomestico y su consumo por hora en watios y el 
número de horas que lleva encendido desde el último ciclo de consumo. 
Incluyele un método calcular_consumo que calcule el consumo como el 
resultado de multiplicar la portencia por su consumo por hora por el 
tiempo que lleva encendido desde el último ciclo de consumo.
Crea una clase lavadora, hija de electrodoméstico, que calcule el consumo 
teniendo en cuenta que la potencia que utiliza para el consumo es la mitad 
de la que tiene como propiedad.
Crea una clase nevera, hija de electrodoméstico, que calcule el consumo 
teniendo en cuenta que el consumo por hora es un 70% del que tiene especificado
como propiedad.
Crea una clase radiador, hija de electrodomestico, que calcule el consumo de la 
misma forma que su predecesora.
Haz un programa que pida al usuario los datos de 3 lavadoras, 3 neveras y 3 radiadores, 
y haz que se calculen los consumos de cada uno de ellos.
*/

#include <iostream>

using namespace std;

class Electrodomestico{

    protected:
        float potencia;
        float consumo;
        float tiempo;
    public:
        Electrodomestico(float potencia,float consumo,float tiempo);
        float calcularConsumo();
        void setPotencia(float potencia);
        void setConsumo(float consumo);
        void setTiempo(float tiempo);
        float getPotencia();
        float getConsumo();
        float getTiempo();
};

Electrodomestico::Electrodomestico(float p,float c,float t)
{
    potencia=p;
    consumo=c;
    tiempo=t;
}

float Electrodomestico::calcularConsumo()
{
    return potencia*consumo*tiempo;
}

void Electrodomestico::setPotencia(float p)
{
    potencia=p;
}

void Electrodomestico::setConsumo(float c)
{
    consumo=c;
}

void Electrodomestico::setTiempo(float t)
{
    tiempo=t;
}

float Electrodomestico::getPotencia()
{
    return potencia;
}

float Electrodomestico::getConsumo()
{
    return consumo;
}

float Electrodomestico::getTiempo()
{
    return tiempo;
}

class Lavadora:public Electrodomestico
{
    public:
        Lavadora(float potencia,float consumo,float tiempo):Electrodomestico(potencia,consumo,tiempo){};
        float calcularConsumo();
};

float Lavadora::calcularConsumo()
{
    return (potencia/2)*consumo*tiempo;
}

class Nevera:public Electrodomestico
{
    public:
        Nevera(float potencia,float consumo,float tiempo):Electrodomestico(potencia,consumo,tiempo){};
        float calcularConsumo();
};

float Nevera::calcularConsumo()
{
    return 0.7*potencia*consumo*tiempo;
}

class Radiador:public Electrodomestico
{
    public:
        Radiador(float potencia,float consumo,float tiempo):Electrodomestico(potencia,consumo,tiempo){};
        float calcularConsumo();
};

float Radiador::calcularConsumo()
{
    return 0.7*potencia*consumo*tiempo;
}

int main()
{
    float potencia;
    float consumo;
    float tiempo;
    
    cout << "Introduzca la potencia de la primera lavadora: " << endl;
    cin >>  potencia;

    cout << "Introduzca el consumo por hora de la primera lavadora: " << endl;
    cin >> consumo;

    cout << "Introduzca el tiempo que que lleva encendido desde el último ciclo de consumo de la primera lavadora: " << endl;
    cin >> tiempo;

    Lavadora l1(potencia,consumo,tiempo);

    cout << "Introduzca la potencia de la segunda lavadora: " << endl;
    cin >>  potencia;

    cout << "Introduzca el consumo por hora de la segunda lavadora: " << endl;
    cin >> consumo;

    cout << "Introduzca el tiempo que que lleva encendido desde el último ciclo de consumo de la segunda lavadora: " << endl;
    cin >> tiempo;

    Lavadora l2(potencia,consumo,tiempo);

    cout << "Introduzca la potencia de la tercera lavadora: " << endl;
    cin >>  potencia;

    cout << "Introduzca el consumo por hora de la tercera lavadora: " << endl;
    cin >> consumo;

    cout << "Introduzca el tiempo que que lleva encendido desde el último ciclo de consumo de la tercera lavadora: " << endl;
    cin >> tiempo;

    Lavadora l3(potencia,consumo,tiempo);

    cout << "Introduzca la potencia de la primera nevera: " << endl;
    cin >>  potencia;

    cout << "Introduzca el consumo por hora de la primera nevera: " << endl;
    cin >> consumo;

    cout << "Introduzca el tiempo que que lleva encendido desde el último ciclo de consumo de la primera nevera: " << endl;
    cin >> tiempo;

    Nevera n1(potencia,consumo,tiempo);

    cout << "Introduzca la potencia de la segunda nevera: " << endl;
    cin >>  potencia;

    cout << "Introduzca el consumo por hora de la segunda nevera: " << endl;
    cin >> consumo;

    cout << "Introduzca el tiempo que que lleva encendido desde el último ciclo de consumo de la segunda nevera: " << endl;
    cin >> tiempo;

    Nevera n2(potencia,consumo,tiempo);

    cout << "Introduzca la potencia de la tercera nevera: " << endl;
    cin >>  potencia;

    cout << "Introduzca el consumo por hora de la tercera nevera: " << endl;
    cin >> consumo;

    cout << "Introduzca el tiempo que que lleva encendido desde el último ciclo de consumo de la tercera nevera: " << endl;
    cin >> tiempo;

    Nevera n3(potencia,consumo,tiempo);

    cout << "Introduzca la potencia de la primera radiador: " << endl;
    cin >>  potencia;

    cout << "Introduzca el consumo por hora de la primera radiador: " << endl;
    cin >> consumo;

    cout << "Introduzca el tiempo que que lleva encendido desde el último ciclo de consumo de la primera radiador: " << endl;
    cin >> tiempo;

    Radiador r1(potencia,consumo,tiempo);

    cout << "Introduzca la potencia de la segunda radiador: " << endl;
    cin >>  potencia;

    cout << "Introduzca el consumo por hora de la segunda radiador: " << endl;
    cin >> consumo;

    cout << "Introduzca el tiempo que que lleva encendido desde el último ciclo de consumo de la segunda radiador: " << endl;
    cin >> tiempo;

    Radiador r2(potencia,consumo,tiempo);

    cout << "Introduzca la potencia de la tercera radiador: " << endl;
    cin >>  potencia;

    cout << "Introduzca el consumo por hora de la tercera radiador: " << endl;
    cin >> consumo;

    cout << "Introduzca el tiempo que que lleva encendido desde el último ciclo de consumo de la tercera radiador: " << endl;
    cin >> tiempo;

    Radiador r3(potencia,consumo,tiempo);

    cout << "El consumo de la primera lavadora es: " << l1.calcularConsumo() << endl;
    cout << "El consumo de la segunda lavadora es: " << l2.calcularConsumo() << endl;
    cout << "El consumo de la tercera lavadora es: " << l3.calcularConsumo() << endl;
    cout << "El consumo de la primera nevera es: " << n1.calcularConsumo() << endl;
    cout << "El consumo de la segunda nevera es: " << n2.calcularConsumo() << endl;
    cout << "El consumo de la tercera nevera es: " << n3.calcularConsumo() << endl;
    cout << "El consumo del primer radiador es: " << r1.calcularConsumo() << endl;
    cout << "El consumo del segundo radiador es: " << r2.calcularConsumo() << endl;
    cout << "El consumo del tercer radiador es: " << r3.calcularConsumo() << endl;


    return 0;
}
