/*
Una inmobiliaria desea crear un programa en 
un lenguaje orientado a objetos que le permita 
almacenar información de los locales comerciales 
que gestiona. La información que desea almacenar 
sobre cada local comercial es dirección, metros 
cuadrados y precio del metro cuadrado. Crea una 
clase que pueda utilizarse para representar esta 
información.
*/

#include <iostream>

using namespace std;

class Local
{
    private:
        string direccion;
        float metros;
        float precioMetro;
    public:
        Local(string direccion,float metros,float precio);
        void setMetros(float metros);
        void setPrecioMetro(float precio);
        void setDireccion(string direccion);
        float getMetros();
        float getPrecioMetro();
        string getDireccion();
        void mostrarDatos();
};

Local::Local(string d,float m,float p)
{
    direccion=d;
    metros=m;
    precioMetro=p;
}

void Local::setDireccion(string d)
{
    direccion=d;
}

void Local::setMetros(float m)
{
    metros=m;
}

void Local::setPrecioMetro(float p)
{
    precioMetro=p;
}

string Local::getDireccion()
{
    return direccion;
}

float Local::getMetros()
{
    return metros;
}

float Local::getPrecioMetro()
{
    return precioMetro;
}

void Local::mostrarDatos()
{
    cout << "Direccion: " << direccion << endl;
    cout << "Metros cuadrados: " << metros << endl;
    cout << "Precio del metro cuadrado: " << precioMetro << endl;
}

int main () 
{
    Local l("San Roque 38", 138.4, 10);

    l.mostrarDatos();

    return 0;

}