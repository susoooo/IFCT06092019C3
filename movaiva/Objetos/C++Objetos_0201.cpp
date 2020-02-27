/* 
1-Crea una clase que represente a un rectangulo mediante su base y su altura. 
Implementa métodos para cambiar su base y su altura, y otros que calcule su area y su perímetro. 
área= base * altura y perímetro=2*base + 2*altura).
*/
#include <iostream>

class Rectangulo
{
    private:
        float base;
        float altura;
    public:
        float getBase();
        void setBase(float b);
        float getAltura();
        void setAltura(float a);
        float calcularPerimetro();
        float calcularArea();
};

float Rectangulo::getBase()
{
    return base;
}

void Rectangulo::setBase(float b)
{
    base=b;
}

float Rectangulo::getAltura()
{
    return altura;
}

void Rectangulo::setAltura(float a)
{
    altura=a;
}

float Rectangulo::calcularPerimetro()
{
    return 2*base+2*altura;
}

float Rectangulo::calcularArea()
{
    return base*altura;
}

using namespace std;

int main ()
{
    Rectangulo rect=Rectangulo();
    rect.setAltura(5);
    rect.setBase(5.5);

    cout << "La base del rectangulo es " << rect.getBase()<<endl;
    cout << "La altura del rectangulo es " << rect.getAltura()<<endl;

    cout << "El perimetro es " << rect.calcularPerimetro()<<endl;
    cout << "El area es " << rect.calcularArea()<<endl;

    return 0;
}