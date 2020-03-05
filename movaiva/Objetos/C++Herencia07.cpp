/*
Asimismo, y en relación con los locales destinados 
a hostelería, la inmobiliaria se ha especializado 
en Bares, Restaurantes y locales de comida para llevar.
 Sobre los locales destinados a bares, desean guardar 
 información sobre el número de barras de las que dispone. 
 Sobre los locales de Restaurantes, desean almacenar información 
 sobre el número de mesas de las que disponen, así como de los 
 metros cuadrados destinados a comedor, y de los metros cuadrados 
 destinados a cocina. Sobre los locales de comida para llevar, 
 desean almacenar información sobre si tiene cocina o no, y si
 disponen de plan de evacuación.
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

class Bar:public Hosteleria
{
    protected:
        int barras;
    public:
        Bar(string direccion,float metros,float precioMetro,float tiempoAbierto, int barras);
        void setBarras(int barras);
        int getBarras();
        void mostrarDatos();
};

Bar::Bar(string d,float m, float p,float tA,int b):Hosteleria(d,m,p,tA)
{
    barras=b;
}

void Bar::setBarras(int b)
{
    barras=b;
}

int Bar::getBarras()
{
    return barras;
}

void Bar::mostrarDatos()
{
    Hosteleria::mostrarDatos();
    cout << "Numero de barras: " << barras << endl; 
}

class Restaurante:public Hosteleria
{
    protected:
        int mesas;
        float metrosComedor;
        float metrosCocina;
    public:
        Restaurante(string direccion,float metros,float precioMetro,float tiempoAbierto, int mesas, float metrosComedor, float metrosCocina);
        void setMesas(int mesas);
        void setMetrosComedor(float metrosComedor);
        void setMetrosCocina(float metrosCocina);
        int getMesas();
        float getMetrosComedor();
        float getMetrosCocina();
        void mostrarDatos();
};

Restaurante::Restaurante(string d,float m, float p,float tA,int me,float mC, float mCo):Hosteleria(d,m,p,tA)
{
    mesas=me;
    metrosComedor=mC;
    metrosCocina=mCo;
}

void Restaurante::setMesas(int me)
{
    mesas=me;
}

void Restaurante::setMetrosComedor(float mC)
{
    metrosComedor=mC;
}

void Restaurante::setMetrosCocina(float mCo)
{
    metrosCocina=mCo;
}

int Restaurante::getMesas()
{
    return mesas;
}

float Restaurante::getMetrosComedor()
{
    return metrosComedor;
}

float Restaurante::getMetrosCocina()
{
    return metrosCocina;
}

void Restaurante::mostrarDatos()
{
    Hosteleria::mostrarDatos();
    cout << "Numero de mesas: " << mesas << endl; 
    cout << "Metros cuadrados de comedor: " << metrosComedor << endl; 
    cout << "Metros cuadrados de cocina: " << metrosCocina << endl; 

}

class ComidaLlevar:public Hosteleria
{
    protected:
        string cocina;
        string planEvacuacion;
    public:
        ComidaLlevar(string direccion,float metros,float precioMetro,float tiempoAbierto, string cocina, string planEvacuacion);
        void setCocina(string cocina);
        void setPlanEvacuacion(string planEvacuacion);
        string getCocina();
        string getPlanEvacuacion();
        void mostrarDatos();
};

ComidaLlevar::ComidaLlevar(string d,float m, float p,float tA,string c,string pE):Hosteleria(d,m,p,tA)
{
    cocina=c;
    planEvacuacion=pE;
}

void ComidaLlevar::setCocina(string c)
{
    cocina=c;
}

void ComidaLlevar::setPlanEvacuacion(string pE)
{
    planEvacuacion=pE;
}

string ComidaLlevar::getCocina()
{
    return cocina;
}

string ComidaLlevar::getPlanEvacuacion()
{
    return planEvacuacion;
}

void ComidaLlevar::mostrarDatos()
{
    Hosteleria::mostrarDatos();
    cout << "Dispone de cocina: " << cocina << endl; 
    cout << "Dispone de plan de evacuacion: " << planEvacuacion << endl; 

}

int main () 
{
    Bar b("Calle de la piruleta 88", 600, 50, 0, 2);

    cout << "Bar" << endl;
    b.mostrarDatos();

    Restaurante r("Calle de la piruleta 99", 1000.75, 15, 2, 4, 250.5, 150.5);

    cout << "Restaurante" << endl;
    r.mostrarDatos();

    ComidaLlevar cl("Calle de la piruleta 110", 205.75, 15, 6, "Si", "No");

    cout << "Local de comida para llevar" << endl;
    cl.mostrarDatos();

    return 0;
}