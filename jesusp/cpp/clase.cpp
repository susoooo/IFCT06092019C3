#include <iostream>
#include <cstring>
using namespace std;

class MiClase
{

    int varl; //Variable de clase
    const double var2 = 3.14159; //Variable de clase
    public:
    void cambiarVarl(int a); //Declaración de un método de la clase
    double calcularArea(const double& x, const double& y); //Declaración de un método de la clase
};

void MiClase::cambiarVarl(int a) //Definición del método por fuera de la clase
{
    cout << a << endl;
    varl = a;
}

double MiClase::calcularArea(const double& x, const double& y) //Definición del método por fuera de la clase
{

    cout << x << endl;
    cout << y << endl;
    cout<< var2<< endl;
    return x*y*var2;

}

int main()
{

    MiClase miObjeto; //Declarando un objeto de la clase
    miObjeto.cambiarVarl(5);//Accediendo a un miembro con el operador punto
    double var = miObjeto.calcularArea(34.6, 23.9);//Accediendo a un miembro con el operador punto

}
