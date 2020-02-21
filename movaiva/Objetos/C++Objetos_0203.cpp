/*
3-Crea una clase que represente a un alumno. Cada alumno 
se identifica por su DNI. Se desea almacenar información 
de su nombre, sus apellidos, y sus notas finales en las 
asignaturas en las que se ha matriculado. De dichas asignaturas 
se dese almacenar tambien el nombre. Un alumno como mucho puede 
haberse matriculado de 30 asignaturas. Crea un programa en el que 
se pueda meter los datos de un alumno , y que calcule la nota media 
del alumno, utilizando objetos.
*/

#include <iostream>

using namespace std;

#define TAMANO 30

struct asignatura
{
    string nombre;
    float nota;
};

class Alumno
{
    private:
        string DNI;
        string nombre;
        string apellidos;
        struct asignatura asig[30];
        int contador=0;
    public:
        void setDNI(string d);
        void setNombre(string n);
        void setApellidos(string a);
        void setAsig(int indice,string nom,float not);
        string getDNI();
        string getNombre();
        string getApellidos();
        struct asignatura getAsignatura(int i);
        float calcularNotaF();
};

void Alumno::setDNI(string d)
{
    DNI=d;
}

void Alumno::setNombre(string n)
{
    nombre=n;
}

void Alumno::setApellidos(string a)
{
    apellidos=a;
}

void Alumno::setAsig(int indice,string nom,float not)
{
    asig[indice].nombre=nom;
    asig[indice].nota=not;
    contador++;
}

string Alumno::getDNI()
{
    return DNI;
}

string Alumno::getNombre()
{
    return nombre;
}

string Alumno::getApellidos()
{
    return apellidos;
}

struct asignatura Alumno::getAsignatura(int i)
{
    return asig[i];
}

float Alumno::calcularNotaF(){
    float suma;
    suma=0;
    for(int c=0; c<contador;c++)
    {
        suma+=asig[c].nota;
    }

    return suma/contador;
}

int main ()
{
    Alumno al=Alumno();
    string id;
    string nombre;
    string apellido;
    string asignatura;
    float nota;
    int contador;

    contador=0;

    cout << "Introduzca el dni del alumno: " << endl;
    cin >> id;
    al.setDNI(id);

    cout << "Introduzca el nombre del alumno: " << endl;
    cin >> nombre;
    al.setNombre(nombre);

    cout << "Introduzca los apellidos del alumno: " << endl;
    cin >> apellido;
    al.setApellidos(apellido);

    while(contador<TAMANO || asignatura=="")
    {
        cout << "Introduzca el nombre de la asignatura: " << endl;
        cin >> asignatura;
        if(asignatura=="")
        {
            cout << "Introduzca la nota: " << endl;
            cin >> nota;
        }
    }
    



    return 0;
}



