/*
Por último, otras de las lienas de negocio que 
están abriendo con respecto a los locales de 
tiendas de alimentación, es la especialización 
en locales para fruterías, carnicerías y panaderías. 
Con respecto a las primeras, quisieran poder almacenar 
información sobre si el local dispone o no de cámara 
frigorifica, sobre las segundas del número de frigoríficos 
de los que dispone el local y sobre las terceras, de si 
tiene espacio para proporcionar servicio de cafetería y el 
número de armarios de pan del que dispone el local.
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

class Camiseria:public Ropa
{
    protected:
        string espacio;
    public:
        Camiseria(string direccion,float metros,float precioMetro,float metrosFachada,string probadores,string aseos,string espacio);
        void setEspacio(string espacio);
        string getEspacio();
        void mostrarDatos();
};

Camiseria::Camiseria(string d,float m, float p,float mF,string pr,string a,string e):Ropa(d,m,p,mF,pr,a)
{
    espacio=e;
}

void Camiseria::setEspacio(string e)
{
    espacio=e;
}

string Camiseria::getEspacio()
{
    return espacio;
}

void Camiseria::mostrarDatos()
{
    Ropa::mostrarDatos();
    cout << "Espacio para la elaboracion de prendas a medida: " << espacio << endl;
}

class Merceria:public Ropa
{
    protected:
        int mostradores;
    public:
        Merceria(string direccion,float metros,float precioMetro,float metrosFachada,string probadores,string aseos,int mostradores);
        void setMostradores(int mostradores);
        int getMostradores();
        void mostrarDatos();
};

Merceria::Merceria(string d,float m, float p,float mF,string pr,string a,int mo):Ropa(d,m,p,mF,pr,a)
{
    mostradores=mo;
}

void Merceria::setMostradores(int mo)
{
    mostradores=mo;
}

int Merceria::getMostradores()
{
    return mostradores;
}

void Merceria::mostrarDatos()
{
    Ropa::mostrarDatos();
    cout << "Mostradores: " << mostradores << endl;
}

class Sombrereria:public Ropa
{
    protected:
        int expositores;
    public:
        Sombrereria(string direccion,float metros,float precioMetro,float metrosFachada,string probadores,string aseos,int expositores);
        void setExpositores(int expositores);
        int getExpositores();
        void mostrarDatos();
};

Sombrereria::Sombrereria(string d,float m, float p,float mF,string pr,string a,int e):Ropa(d,m,p,mF,pr,a)
{
    expositores=e;
}

void Sombrereria::setExpositores(int e)
{
    expositores=e;
}

int Sombrereria::getExpositores()
{
    return expositores;
}

void Sombrereria::mostrarDatos()
{
    Ropa::mostrarDatos();
    cout << "Expositores: " << expositores << endl;
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

class Fruteria:public Comida
{
    protected:
        string camara;
    public:
        Fruteria(string direccion,float metros,float precioMetro,float metrosFachada,int liniales, int cajas,string camara);
        void setCamara(string camara);
        string getCamara();
        void mostrarDatos();
};

Fruteria::Fruteria(string d,float m, float p,float mF,int l,int c, string ca):Comida(d,m,p,mF,l,c)
{
    camara=ca;
}

void Fruteria::setCamara(string c)
{
    camara=c;
}

string Fruteria::getCamara()
{
    return camara;
}

void Fruteria::mostrarDatos()
{
    Comida::mostrarDatos();
    cout << "Tiene camara frigorifica: " << camara << endl;
}

class Carniceria:public Comida
{
    protected:
        int frigorificos;
    public:
        Carniceria(string direccion,float metros,float precioMetro,float metrosFachada,int liniales, int cajas,int frigorificos);
        void setFrigorificos(int frigorificos);
        int getFrigorificos();
        void mostrarDatos();
};

Carniceria::Carniceria(string d,float m, float p,float mF,int l,int c, int f):Comida(d,m,p,mF,l,c)
{
    frigorificos=f;
}

void Carniceria::setFrigorificos(int f)
{
    frigorificos=f;
}

int Carniceria::getFrigorificos()
{
    return frigorificos;
}

void Carniceria::mostrarDatos()
{
    Comida::mostrarDatos();
    cout << "Numero de frigorificos: " << frigorificos << endl;
}

class Panaderia:public Comida
{
    protected:
        string cafeteria;
        int armarios;
    public:
        Panaderia(string direccion,float metros,float precioMetro,float metrosFachada,int liniales, int cajas,string cafeteria,int armario);
        void setCafeteria(string cafeteria);
        void setArmarios(int armarios);
        string getCafeteria();
        int getArmarios();
        void mostrarDatos();
};

Panaderia::Panaderia(string d,float m, float p,float mF,int l,int c, string ca, int a):Comida(d,m,p,mF,l,c)
{
    cafeteria=ca;
    armarios=a;
}

void Panaderia::setCafeteria(string ca)
{
    cafeteria=ca;
}

void Panaderia::setArmarios(int a)
{
    armarios=a;
}

string Panaderia::getCafeteria()
{
    return cafeteria;
}

int Panaderia::getArmarios()
{
    return armarios;
}

void Panaderia::mostrarDatos()
{
    Comida::mostrarDatos();
    cout << "Espacio para cafeteria: " << cafeteria << endl;
    cout << "Numero de armarios: " << armarios << endl;
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
    Fruteria f("Calle de la piruleta 11", 500, 10, 175.5, 5, 2, "Si");

    cout << "Fruteria" << endl;
    f.mostrarDatos();

    Carniceria c ("Calle de la piruleta 22", 450, 5, 200.5, 3, 1, 4);

    cout << "Carniceria" << endl;
    c.mostrarDatos();

    Panaderia p ("Calle de la piruleta 33", 600, 15, 150.5, 5, 3, "Si", 6);

    cout << "Panaderia" << endl;
    p.mostrarDatos();

    return 0;
}