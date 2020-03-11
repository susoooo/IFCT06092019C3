#include <iostream>
#include <cstring>

using namespace std;

#define PI 3.141592

struct coordenadas
{
    int coord_X;
    int coord_Y;
};

class forma
{
protected:
    int color;
    struct coordenadas centro;
    string nombre;

public:
    forma();
    forma(int col, struct coordenadas posicion, string nom);

    void imprimir();
    int obtenerColor();
    void cambiarColor(int col);

    void moverforma(struct coordenadas posicion);

};

forma::forma()
{
    color = 0;
    centro.coord_X = 0;
    centro.coord_Y = 0;
    nombre = "";
}

forma::forma(int col, struct coordenadas posicion, string nom)
{
    color = col;
    centro.coord_X = posicion.coord_X;
    centro.coord_Y = posicion.coord_Y;
    nombre = nom;
}

void forma::imprimir()
{
    cout << endl << "Nombre: " << nombre << endl;
    cout << "Color: " << color << endl;
    cout << "Centro: " << centro.coord_X << ", " << centro.coord_Y << endl;
}

int forma::obtenerColor()
{
    return color;
}

void forma::cambiarColor(int col)
{
    color = col;
}

void forma::moverforma(struct coordenadas posicion)
{
    centro.coord_X = posicion.coord_X;
    centro.coord_Y = posicion.coord_Y;
}

// ------------------------------------------------------------------

class rectangulo : public forma
{
protected:
    int ladoMenor;
    int ladoMayor;

public:
    rectangulo();
    rectangulo(int lado1, int lado2);

    void imprimir();

    int calcArea();
    int calcPerimetro();

    void cambiarTamanio(int factor);

};

rectangulo::rectangulo()
{
   ladoMenor = 0;
   ladoMayor = 0;
}

rectangulo::rectangulo(int lado1, int lado2)
{
    if (lado1 > lado2)
    {
        ladoMenor = lado2;
        ladoMayor = lado1;
    }
    else
    {
        ladoMenor = lado1;
        ladoMayor = lado2;
    }
}

void rectangulo::imprimir()
{
    forma::imprimir();
    cout << "Lado menor: " << ladoMenor << endl;
    cout << "Lado mayor: " << ladoMayor << endl;
}

int rectangulo::calcArea()
{
    return ladoMayor * ladoMenor;
}

int rectangulo::calcPerimetro()
{
    return (ladoMayor * 2) + (ladoMenor * 2);
}

void rectangulo::cambiarTamanio(int factor)
{
    ladoMenor = ladoMenor * factor;
    ladoMayor = ladoMayor * factor;
}

// ---------------------------------------------------------------------------

class elipse : public forma
{
protected:
    int radioMenor;
    int radioMayor;

public:

    elipse();
    elipse(int radio1, int radio2);

    float calcularArea();

};

elipse::elipse()
{
    radioMayor = 0;
    radioMenor = 0;
}

elipse::elipse(int radio1, int radio2)
{
    if (radio1 > radio2)
    {
        radioMenor = radio2;
        radioMayor = radio1;
    }
    else
    {
        radioMenor = radio1;
        radioMayor = radio2;
    }

}

float elipse::calcularArea()
{
    return PI * (radioMayor * radioMenor);
}

// ---------------------------------------------------------------------------

class cuadrado : public rectangulo
{
protected:
    int lado;

public:
    cuadrado();
    cuadrado(int lado);

};

// ---------------------------------------------------------------------------

class circulo : public elipse
{

};

// ---------------------------------------------------------------------------

int main()
{
    struct coordenadas posi;

    forma cosa1;

    cosa1.imprimir();

    posi.coord_X = 7;
    posi.coord_Y = 4;

    cosa1.moverforma(posi);

    posi.coord_X = 9;
    posi.coord_Y = 7;

    forma cosa2(6, posi, "cosa2");

    cosa2.imprimir();

    posi.coord_X = 5;
    posi.coord_Y = 2;

    cosa2.moverforma(posi);

    cosa2.imprimir();

    rectangulo rectang1();

    posi.coord_X = 5;
    posi.coord_Y = 2;

    rectangulo rectang2(7, 4);

    rectang2.imprimir();

    cout << endl << "Area: " << rectang2.calcArea() << endl;
    cout << endl << "Perimetro: " << rectang2.calcPerimetro() << endl;

    rectang2.cambiarColor(3);

    rectang2.imprimir();


}
