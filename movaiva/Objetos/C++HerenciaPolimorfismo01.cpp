/*
Defina una clase Forma que tenga los siguientes miembros de datos:
	- Color
	- Coordenada del centro de la forma (objeto Punto)
	- Nombre de la forma (char *)
  Y, al menos, las siguientes funciones miembro:
	- Imprimir
	- Obtener y cambiar el color
	- Mover la forma (o sea, su centro)
 Defina una clase hija Rectangulo que tenga los siguientes miembros como datos:
	- Lado menor.
	- Lado mayor.
  Y, al menos, las siguientes funciones miembro:
	- Imprimir. Debe imprimir qué se trata de un 
      rectángulo mostrando su nombre, color, centro 
      y lado. Debería usarse la función Imprimir de 
      la clase base para realizar parte de este trabajo.
	- Calcular el área (lado menor * lado mayor).
	- Calcular el perímetro. (2 * lado menor + 2 * lado mayor).
	- Cambiar el tamaño del rectángulo. Recibe como parámetro 
    un factor de escala. Así, por ejemplo, si el factor vale 2, 
    el rectángulo duplicará su tamaño y si es 0,5 se reducirá a la mitad.

Realice un programa que pruebe el funcionamiento de estas clases. Debe
 crear objetos y comprobar el correcto funcionamiento de las funciones miembro.
*/

#include <iostream>

using namespace std;

class Punto
{
    private:
        int coordenadaX;
        int coordenadaY;
    public:
        Punto();
        Punto(int coordenadaX,int coordenadaY);
        void setX(int coordenadaX);
        void setY(int coordenadaY);
        int getX();
        int getY();
        void imprimir();
};

Punto::Punto()
{

}

Punto::Punto(int x,int y)
{
    coordenadaX=x;
    coordenadaY=y;
}

void Punto::setX(int x)
{
    coordenadaX=x;
}

void Punto::setY(int y)
{
    coordenadaY=y;
}

int Punto::getX()
{
    return coordenadaX;
}

int Punto::getY()
{
    return coordenadaY;
}

void Punto::imprimir()
{
    cout << "(" << coordenadaX << "," << coordenadaY << ")";
}

class Forma
{
    protected:
        Punto centro;
        char * nombre;
        string color;
    public:
        Forma(Punto centro,char * nombre,string color);
        void imprimir();
        void cambiarColor(string color);
        string obtenerColor();
        void moverForma(Punto centro);
};

Forma::Forma(Punto c,char * n,string clr)
{
    centro=c;
    nombre=n;
    color=clr;
}

void Forma::cambiarColor(string clr)
{
    color=clr;
}

string Forma::obtenerColor()
{
    return color;
}

void Forma::moverForma(Punto c)
{
    centro=c;
}

void Forma::imprimir()
{
    cout << "Nombre: " << nombre << endl;
    cout << "Centro: ( " << centro.getX() << ", " << centro.getY() << ")" << endl;
    cout << "Color: " << color << endl;
}

class Rectangulo:public Forma
{
    protected:
        float ladoMenor;
        float ladoMayor;
    public:
        Rectangulo(Punto centro,char * nombre, string color, float ladoMenor,float ladoMayor);
        float calcularArea();
        float calcularPerimetro();
        void imprimir();
        void cambiarTamano(float escalar);
};

Rectangulo::Rectangulo(Punto c,char * n, string clr,float lMnr,float lMyr):Forma(c,n,clr)
{
    ladoMayor=lMyr;
    ladoMenor=lMnr;
}

void Rectangulo::cambiarTamano(float escalar)
{
    ladoMayor*=escalar;
    ladoMenor*=escalar;
    imprimir();
}

float Rectangulo::calcularArea()
{
    return ladoMayor*ladoMenor;
}

float Rectangulo::calcularPerimetro()
{
    return (2*ladoMayor)+(2*ladoMenor);
}

void Rectangulo::imprimir()
{
    Forma::imprimir();
    cout << "Lado: " << ladoMenor << endl;
    cout << "Lado: " << ladoMayor << endl;
    cout << "Area: " << calcularArea() << endl;
    cout << "Perimetro: " << calcularPerimetro() << endl;
}

int main ()
{
    Punto p0(0,0);
    Punto p1(2,3);

    char * nombre;
    
    nombre="Forma";

    Forma f(p0,nombre,"Amarillo");

    f.imprimir();
    f.cambiarColor("Rojo");
    f.moverForma(p1);
    f.imprimir();

    nombre="Rectangulo";

    Rectangulo r(p0,nombre,"Verde",2.5,3.5);

    r.imprimir();
    r.cambiarColor("Azul");
    r.moverForma(p1);
    r.cambiarTamano(2);
    r.imprimir();
    
    return 0;
}
