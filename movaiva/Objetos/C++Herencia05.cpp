/*
La inmobiliaria anterior está especializada en la 
gestión de locales destinados a tiendas o a Hostelería. 
De los locales destinados a tiendas desea guardar información 
sobre los metros de fachada que tiene y de los loscales destinados 
a Hostelería, información sobre el tiempo que el local lleva abierto. 
Crea un par de clases que permitan almacenar y gestionar la información 
indicada.
*/

#include <iostream>

using namespace std;

class Local
{
    protected:
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

class Tienda:public Local
{
    protected:
        float metrosFachada;
    public:
        Tienda(string direccion,float metros,float precioMetro,float metrosFachada);
        void setMetroFachada(float metrosFachada);
        float getMetrosFachada();
        void mostrarDatos();

};

Tienda::Tienda(string d,float m, float p,float mF):Local(d,m,p)
{
    metrosFachada=mF;
}

void Tienda::setMetroFachada(float mF)
{
    metrosFachada=mF;
}

float Tienda::getMetrosFachada()
{
    return metrosFachada;
}

void Tienda::mostrarDatos()
{
    Local::mostrarDatos();
    cout << "Metros de fachada: " << metrosFachada << endl;
}

class Hosteleria:public Local
{
    protected:
        float tiempoAbierto;
    public:
        Hosteleria(string direccion,float metros,float precioMetro,float tiempoAbierto);
        void setTiempoAbierto(float tiempoAbierto);
        float getTiempoAbierto();
        void mostrarDatos();

};

Hosteleria::Hosteleria(string d,float m, float p,float tA):Local(d,m,p)
{
    tiempoAbierto=tA;
}

void Hosteleria::setTiempoAbierto(float tA)
{
    tiempoAbierto=tA;
}

float Hosteleria::getTiempoAbierto()
{
    return tiempoAbierto;
}

void Hosteleria::mostrarDatos()
{
    Local::mostrarDatos();
    cout << "Tiempo que lleva abierto: " << tiempoAbierto << endl;
}

int main () 
{
    Tienda t("San Roque 38", 138.4, 10, 200);

    cout << "Tienda" << endl;
    t.mostrarDatos();

    Hosteleria h("Calle de la piruleta 77", 1000, 5, 4.5);

    cout << "Hosteleria" << endl;
    h.mostrarDatos();



    return 0;

}