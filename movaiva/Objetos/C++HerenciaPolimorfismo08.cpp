/*
Desarrolle un programa que, dado un conjunto de formas, 
calcule cuál tiene el área máxima e imprima la información 
de dicha forma.
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
        Forma();
        Forma(Punto centro,char * nombre,string color);
        virtual void imprimir();
        void cambiarColor(string color);
        string obtenerColor();
        void moverForma(Punto centro);
        virtual float calcularArea();
};

Forma::Forma()
{

}

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

float Forma::calcularArea()
{
    return 0;
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
        virtual float calcularArea();
        float calcularPerimetro();
        virtual void imprimir();
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
        virtual float calcularArea();
        virtual void imprimir();

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

class Cuadrado:public Rectangulo
{
    public:
        Cuadrado(Punto centro,char * nombre, string color, float lado):Rectangulo(centro,nombre,color,lado,lado){};
        virtual void imprimir();
};

void Cuadrado::imprimir()
{
    Forma::imprimir();
    cout << "Lado: " << ladoMayor << endl;
    cout << "Area: " << calcularArea() << endl;
    cout << "Perimetro: " << calcularPerimetro() << endl;
}

class Circulo:public Elipse
{
    public:
        Circulo(Punto centro,char * nombre,string color,float radio):Elipse(centro,nombre,color,radio,radio){};
        virtual void imprimir();
};

void Circulo::imprimir()
{
    Forma::imprimir();
    cout << "Radio: " << radioMayor << endl;
    cout << "Area: " << calcularArea() << endl;
}


int main ()
{
    
    Punto p0(0,0);
    Punto p1(2,3);

    float areaMaxima=0;
    int formaAreaMaxima;

    Forma f(p0,"Forma","Amarillo");

    Rectangulo r(p0,"Rectangulo","Verde",2.5,3.5);

    Elipse e(p0,"Elipse","Negro",2.5,2);

    Cuadrado cd(p0,"Cuadrado","Violeta",2.5);
    
    Circulo cr(p0,"Circulo","Cian",3);

    Forma * formas[5]={&f,&r,&e,&cd,&cr};

    for(int contador=0;contador<5;contador++)
    {
            if(formas[contador]->calcularArea() > areaMaxima )
            {
                areaMaxima=formas[contador]->calcularArea();
                formaAreaMaxima=contador;
            }
    }

    formas[formaAreaMaxima]->imprimir();
    
    
    return 0;
}