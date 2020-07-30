/*
2-Crea una clase que represente a una persona con su nombre y apellidos,
y el día, mes y año de su fecha de nacimiento. Escribe un programa que pida 
los datos de una persona, los guarde en un objeto, y calcule la edad de la
persona representada en ese objeto mediante un método implementado en la clase.
*/

#include <iostream>

using namespace std;

class Persona
{
    private:
        string nombre;
        string apellido1;
        string apellido2;
        int dia;
        int mes;
        int ano;
    public:
        void setNombre(string n);
        void setApellido1(string a1);
        void setApellido2(string a2);
        void setDia(int d);
        void setMes(int m);
        void setAno(int a);
        string getNombre();
        string getApellido1();
        string getApellido2();
        int getDia();
        int getMes();
        int getAno();
        int calcularEdad();
};

void Persona::setNombre(string n)
{
    nombre=n;
}

void Persona::setApellido1(string a1)
{
    apellido1=a1;
}

void Persona::setApellido2(string a2)
{
    apellido2=a2;
}

void Persona::setDia(int d)
{
    dia=d;
}

void Persona::setMes(int m)
{
    mes=m;
}

void Persona::setAno(int a)
{
    ano=a;
}

string Persona::getNombre()
{
    return nombre;
}

string Persona::getApellido1()
{
    return apellido1;
}

string Persona::getApellido2()
{
    return apellido2;
}

int Persona::getDia()
{
    return dia;
}

int Persona::getMes()
{
    return mes;
}

int Persona::getAno()
{
    return ano;
}

int Persona::calcularEdad()
{
    return 2020-ano;
}

int main ()
{
    Persona p=Persona();
    string variable1;
    int variable2;

    cout << "Introduzca el nombre: " << endl;
    cin >> variable1;
    p.setNombre(variable1);

    cout << "Introduzca el primer apellido: " << endl;
    cin >> variable1;
    p.setApellido1(variable1);

    cout << "Introduzca el segundo apellido: " << endl;
    cin >> variable1;
    p.setApellido2(variable1);

    cout << "Introduzca el dia de su nacimiento: " << endl;
    cin >> variable2;
    p.setDia(variable2);

    cout << "Introduzca el mes de su nacimiento: " << endl;
    cin >> variable2;
    p.setMes(variable2);

    cout << "Introduzca el año de su naciemiento: " << endl;
    cin >> variable2;
    p.setAno(variable2);

    cout << p.getNombre() << " tiene " << p.calcularEdad() << " años" << endl;

    return 0;
}