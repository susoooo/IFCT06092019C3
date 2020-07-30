/*
Dentro de la categoría de tiendas, la inmobiliaria 
trabaja con tiendas de ropa, de comida, Ferreterías 
y Droguerías. De las tiendas de ropa, desea guardar 
información sobre si tienen espacio de probadores, 
y si tienen aseos. De las tiendas de comida, desean 
almacenar información sobre el número de liniales que 
posee la tienda, asi como el número de cajas de las que 
disponen. De las Ferreterías se desea guardar información 
sobre los metros cuadrados dedicados a almacen en el local, 
y de las Droguerías, se desea guardar datos sobre si están 
habilitadas para contener materiales peligrosos. Crea una 
clase por cada tipo de tienda de las antedichas que permita 
almacenar y gestionar la información indicada.
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

class Ropa:public Tienda
{
    protected:
        string probadores;
        string aseos;
    public:
        Ropa(string direccion,float metros,float precioMetro,float metrosFachada,string probadores,string aseos);
        void setProbadores(string probadores);
        void setAseos(string aseos);
        string getProbadores();
        string getAseos();
        void mostrarDatos();
};

Ropa::Ropa(string d,float m, float p,float mF,string pr,string a):Tienda(d,m,p,mF)
{
    probadores=pr;
    aseos=a;
}

void Ropa::setProbadores(string pr)
{
    probadores=pr;
}

void Ropa::setAseos(string a)
{
    aseos=a;
}

string Ropa::getProbadores()
{
    return probadores;
}

string Ropa::getAseos()
{
    return aseos;
}

void Ropa::mostrarDatos()
{
    Tienda::mostrarDatos();
    cout << "Espacio para probadores: " << probadores << endl;
    cout << "Tiene aseos: " << aseos << endl;
}

class Comida:public Tienda
{
    protected:
        int liniales;
        int cajas;
    public:
        Comida(string direccion,float metros,float precioMetro,float metrosFachada,int liniales, int cajas);
        void setLiniales(int liniales);
        void setCajas(int cajas);
        int getLiniales();
        int getCajas();
        void mostrarDatos();
};

Comida::Comida(string d,float m, float p,float mF,int l,int c):Tienda(d,m,p,mF)
{
    liniales=l;
    cajas=c;
}

void Comida::setLiniales(int l)
{
    liniales=l;
}

void Comida::setCajas(int c)
{
    cajas=c;
}

int Comida::getLiniales()
{
    return liniales;
}

int Comida::getCajas()
{
    return cajas;
}

void Comida::mostrarDatos()
{
    Tienda::mostrarDatos();
    cout << "Numero de liniales: " << liniales << endl;
    cout << "Numero de cajas: " << cajas << endl;
}


class Ferreteria:public Tienda
{
    protected:
        float metrosAlmacen;
    public:
        Ferreteria(string direccion,float metros,float precioMetro,float metrosFachada,float metrosAlmacen);
        void setMetrosAlmacen(float metrosAlmacen);
        float getMetrosAlmacen();
        void mostrarDatos();
};

Ferreteria::Ferreteria(string d,float m, float p,float mF,float mA):Tienda(d,m,p,mF)
{
    metrosAlmacen=mA;
}

void Ferreteria::setMetrosAlmacen(float mA)
{
    metrosAlmacen=mA;
}

float Ferreteria::getMetrosAlmacen()
{
    return metrosAlmacen;
}

void Ferreteria::mostrarDatos()
{
    Tienda::mostrarDatos();
    cout << "Metros dedicados a almacen: " << metrosAlmacen << endl;
}

class Drogueria:public Tienda
{
    protected:
        string materialesPeligrosos;
    public:
        Drogueria(string direccion,float metros,float precioMetro,float metrosFachada,string materialesPeligrosos);
        void setMaterialesPeligrosos(string materialesPeligrosos);
        string getMaterialesPeligrosos();
        void mostrarDatos();
};

Drogueria::Drogueria(string d,float m, float p,float mF,string mP):Tienda(d,m,p,mF)
{
    materialesPeligrosos=mP;
}

void Drogueria::setMaterialesPeligrosos(string mP)
{
    materialesPeligrosos=mP;
}

string Drogueria::getMaterialesPeligrosos()
{
    return materialesPeligrosos;
}

void Drogueria::mostrarDatos()
{
    Tienda::mostrarDatos();
    cout << "Habilitada para contener materiales peligrosos: " << materialesPeligrosos << endl;
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
    Ropa r("San Roque 38", 138.4, 10, 200,"No","Si");

    cout << "Tienda de Ropa" << endl;
    r.mostrarDatos();

    Comida c("San Roque 40", 600.5, 10, 200,4,2);

    cout << "Tienda de Comida" << endl;
    c.mostrarDatos();

    Ferreteria f("San Roque 25", 800, 10, 200,500);

    cout << "Ferreteria" << endl;
    f.mostrarDatos();

    Drogueria d("Calle de la piruleta 44", 520, 10, 200,"No");

    cout << "Tienda de Ropa" << endl;
    d.mostrarDatos();

    Hosteleria h("Calle de la piruleta 77", 1000, 5, 4.5);
    
    cout << "Hosteleria" << endl;
    h.mostrarDatos();



    return 0;

}