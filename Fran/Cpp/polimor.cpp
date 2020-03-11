#include <iostream>
#include <cstring>

using namespace std;

const double PI = 3.141592;

class Figura
{
  protected:
    float x;

  public:
    Figura(float cx=0)
    {
        x = cx;
    }

    virtual float Perimetro() = 0;
    virtual float Area() = 0;
};

// Clases derivadas

class Circulo: public Figura
{
public:
    Circulo(float radio)
    {
        x = radio;
    }

    float Perimetro()
    {
        return 2* PI * x;
    }
    float Area()
    {
        return PI * x * x;
    }
};

class Cuadrado: public Figura
{
public:
    Cuadrado(float lado)
    {
        x = lado;
    }

    float Perimetro()
    {
        return 4 * x;
    }

    float Area()
    {
        return x * x;
    }
};

int main()
{

   float l, r;

   cout << "Entre el lado del cuadrado" << endl;
   cin >> l;

   cout << "Entre el radio del círculo" << endl;
   cin >> r;

   Cuadrado cu(l);
   Circulo ci(r);

   cout << "Circulo: Su perímetro es" << ci.Perimetro()  << " y su área es: " << ci.Area() << endl;
   cout << "Cuadrado: Su perímetro es" << cu.Perimetro() << " y su área es: " << cu.Area() << endl;
}

