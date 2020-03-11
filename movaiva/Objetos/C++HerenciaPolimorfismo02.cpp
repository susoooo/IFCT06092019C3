/*
Defina una clase Elipse derivada de forma. Recordatorio: una elipse 
queda definida por su radio mayor (R) y su radio menor (r), tal que 
el área de una elipse es igual a π*(R*r).
*/

#include <iostream>

using namespace std;

#define PI 3.14

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
    cout << "Lado mayor: " << ladoMayor << endl;
    cout << "Lado menor: " << ladoMenor << endl;
    cout << "Area: " << calcularArea() << endl;
    cout << "Perimetro: " << calcularPerimetro() << endl;
}

class Elipse:public Forma
{
    protected:
        float radioMayor;
        float radioMenor;
    public:
        Elipse(Punto centro,char * nombre,string color,float radioMayor, float radioMenor);
        float calcularArea();
        void imprimir();

};

Elipse::Elipse(Punto c,char * n,string clr,float rMyr,float rMnr):Forma(c,n,clr)
{
    radioMayor=rMyr;
    radioMenor=rMnr;
}

float Elipse::calcularArea()
{
    return PI*radioMayor*radioMenor;
}

void Elipse::imprimir()
{
    Forma::imprimir();
    cout << "Radio mayor: " << radioMayor << endl;
    cout << "Radio menor: " << radioMenor << endl;
    cout << "Area: " << calcularArea() << endl;
}



int main ()
{
    Punto p0(0,0);
    Punto p1(2,3);

    Forma f(p0,"Forma","Amarillo");

    f.imprimir();
    f.cambiarColor("Rojo");
    f.moverForma(p1);
    f.imprimir();

    Rectangulo r(p0,"Rectangulo","Verde",2.5,3.5);

    r.imprimir();
    r.cambiarColor("Azul");
    r.moverForma(p1);
    r.cambiarTamano(2);
    r.imprimir();

    Elipse e(p0,"Elipse","Negro",2.5,2);

    e.imprimir();
    e.cambiarColor("Blanco");
    e.moverForma(p1);
    e.imprimir();
    
    return 0;
}