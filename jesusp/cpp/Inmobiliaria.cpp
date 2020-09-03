#include <iostream>
#include <cstring>

using namespace std;
class inmobiliaria
{
public:
inmobiliaria(char *local, int cuadrados, float costo);
void LeerDatos();

protected:
char direccion[100];
int metros;
float precio;
};

class tiendas:public inmobiliaria
{
public:
tiendas(char *local, int cuadrados, float costo, int fachada);
void Datos();
protected:
int metFac;
};

class ropa:public tiendas
{
public:
    int proba();
    int aseos();
private:
     int tiepro;
     int tiease;
};

class hosteleria:public inmobiliaria
{
public:
hosteleria(char *local, int cuadrados, float costo, char *bar);
void tiempoLocal();
protected:
char tiempo[30];
};


inmobiliaria::inmobiliaria(char *local, int cuadrados, float costo)
{
    strcpy(direccion, local);
    metros = cuadrados;
    precio = costo;
}

void inmobiliaria::LeerDatos()
{
    cout << direccion << endl;
    cout << metros << endl;
    cout << precio << endl;
}

tiendas::tiendas(char *local, int cuadrados, float costo, int fachada):inmobiliaria(local, cuadrados, costo)
{
    metFac = fachada;
}

void tiendas::Datos()
{
    cout << direccion << endl;
    cout << metros << endl;
    cout << precio << endl;
    cout << metFac << endl;
}

hosteleria::hosteleria(char *local, int cuadrados, float costo, char *bar):inmobiliaria(local, cuadrados, costo)
{
    strcpy(tiempo, bar);
}

 void ropa::proba
 {
    return tiepro;
 }
 void ropa::aseos
 {
    return tiease;
 }
void hosteleria::tiempoLocal()
{
    cout << direccion << endl;
    cout << metros << endl;
    cout << precio << endl;
    cout << tiempo << endl;
}
int main()
{
inmobiliaria Lucense("Calle Milagrosa,20 (Lugo)", 200, 30.75);
Lucense.LeerDatos();
tiendas k("Calle Vieja,34 (Lugo)", 100, 23.5, 3);
k.Datos();

hosteleria barLola("Calle puentes,2 (Lugo)", 234, 25.6, "6 anios");
barLola.tiempoLocal();
}
