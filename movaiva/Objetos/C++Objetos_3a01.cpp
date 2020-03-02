/*
Crea una clase que represente a una persona. Al menos debe contener 
información sobre su nombre, apellido primero y segundo, fecha de 
nacimiento, lugar de nacimiento y pais de nacimiento. Crea constructores 
que permitan la creación de personas sin saber sus datos, conociendo su 
DNI, su nombre y apellidos, ambos, y todos los datos incluidos en la clase.
Crea objetos para cada uno de los compañeros de clase usando diferentes constructores 
y haz que las clases impriman los datos que tienen sobre ellos.
*/

#include <iostream>

using namespace std;

struct fecha
{
    int dia;
    int mes;
    int ano;
};

class Persona
{
    private:
        string DNI;
        string nombre;
        string apellidos;
        struct fecha fechanac;
        string lugarnac;
        string paisnac;
    public:
        Persona();
        Persona(string dni, string nombre, string apellidos);
        Persona(string nombre,string apellidos);
        Persona(string dni,string nombre,string apellidos,struct fecha fechanac,string lugarnac,string paisnac);
        string getDNI();
        string getNombre();
        string getApellidos();
        struct fecha getFechaNac();
        string getLugarNac();
        string getPaisNac();
};

Persona::Persona()
{
    DNI="";
    nombre="";
    apellidos="";
    fechanac.dia=NULL;
    fechanac.mes=NULL;
    fechanac.ano=NULL;
    lugarnac="";
    paisnac="";
}

Persona::Persona(string dni1,string nombre1,string apellidos1)
{
    DNI=dni1;
    nombre=nombre1;
    apellidos=apellidos1;
}

Persona::Persona(string nombre1,string apellidos1)
{
    nombre=nombre1;
    apellidos=apellidos1;
}

Persona::Persona(string dni1,string nombre1,string apellidos1,struct fecha fechanac1,string lugarnac1,string paisnac1)
{
    nombre=nombre1;
    apellidos=apellidos1;
    fechanac=fechanac1;
    lugarnac=lugarnac1;
    paisnac=paisnac1;
}

string Persona::getDNI()
{
    return DNI;
}

string Persona::getNombre()
{
    return nombre;
}

string Persona::getApellidos()
{
    return apellidos;
}

struct fecha Persona::getFechaNac()
{
    return fechanac;
}

string Persona::getLugarNac()
{
    return lugarnac;
}

string Persona::getPaisNac()
{
    return paisnac;
}

int main()
{
    struct fecha f;
    f.dia=5;
    f.mes=5;
    f.ano=2005;
    Persona p0;
    Persona p1("3354606060G", "Natalia", "Martinez");
    Persona p2("Luis","Gonzalez");
    Persona p3("332211445566J","Joaquin","Garcia",f,"Lugo","España");

    cout << "Persona 0" << endl;
    cout << "DNI: " << p0.getDNI() << endl;
    cout << "Nombre: " << p0.getNombre() << endl;
    cout << "Apellidos: " << p0.getApellidos() << endl;
    cout << "Fecha de nacimiento: " << p0.getFechaNac().dia << "/" << p0.getFechaNac().mes << "/" << p0.getFechaNac().ano << endl;
    cout << "Lugar de nacimiento: " << p0.getLugarNac() << endl;
    cout << "Pais de nacimiento: " << p0.getPaisNac() << endl;

    cout << "Persona 1" << endl;
    cout << "DNI: " << p1.getDNI() << endl;
    cout << "Nombre: " << p1.getNombre() << endl;
    cout << "Apellidos: " << p1.getApellidos() << endl;
    cout << "Fecha de nacimiento: " << p1.getFechaNac().dia << "/" << p1.getFechaNac().mes << "/" << p1.getFechaNac().ano << endl;
    cout << "Lugar de nacimiento: " << p1.getLugarNac() << endl;
    cout << "Pais de nacimiento: " << p1.getPaisNac() << endl;

    cout << "Persona 2" << endl;
    cout << "DNI: " << p2.getDNI() << endl;
    cout << "Nombre: " << p2.getNombre() << endl;
    cout << "Apellidos: " << p2.getApellidos() << endl;
    cout << "Fecha de nacimiento: " << p2.getFechaNac().dia << "/" << p2.getFechaNac().mes << "/" << p2.getFechaNac().ano << endl;
    cout << "Lugar de nacimiento: " << p2.getLugarNac() << endl;
    cout << "Pais de nacimiento: " << p2.getPaisNac() << endl;

    cout << "Persona 3" << endl;
    cout << "DNI: " << p3.getDNI() << endl;
    cout << "Nombre: " << p3.getNombre() << endl;
    cout << "Apellidos: " << p3.getApellidos() << endl;
    cout << "Fecha de nacimiento: " << p3.getFechaNac().dia << "/" << p3.getFechaNac().mes << "/" << p3.getFechaNac().ano << endl;
    cout << "Lugar de nacimiento: " << p3.getLugarNac() << endl;
    cout << "Pais de nacimiento: " << p3.getPaisNac() << endl;

    return 0;
}