/*
rea otro destructor para la clase persona que imprima un mensaje 
de "DEscanse en paz" indicando la edad que tenía la persona que 
que representaba el objeto en el momento de destruir el objeto.
*/

#include <iostream>
#include <ctime>

using namespace std;

struct fecha
{
    int dia;
    int mes;
    int ano;
};

time_t now = time(0);

tm *ltm = localtime(&now);


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
        ~Persona();
        void inicializarNac();
};

Persona::Persona()
{
    DNI="";
    nombre="";
    apellidos="";
    lugarnac="";
    paisnac="";
    inicializarNac();
}

Persona::Persona(string dni1,string nombre1,string apellidos1)
{
    DNI=dni1;
    nombre=nombre1;
    apellidos=apellidos1;
    inicializarNac();
}

Persona::Persona(string nombre1,string apellidos1)
{
    nombre=nombre1;
    apellidos=apellidos1;
    inicializarNac();
}

Persona::Persona(string dni1,string nombre1,string apellidos1,struct fecha fechanac1,string lugarnac1,string paisnac1)
{
    nombre=nombre1;
    apellidos=apellidos1;
    fechanac=fechanac1;
    lugarnac=lugarnac1;
    paisnac=paisnac1;
}

void Persona::inicializarNac()
{
    fechanac.dia=NULL;
    fechanac.mes=NULL;
    fechanac.ano=NULL;
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

Persona::~Persona()
{
    int anoActual;
    anoActual=1900+ltm->tm_year;
    cout << nombre << " se despide ";
    if(fechanac.ano==0)
    {
       cout << "no tiene edad" << endl; 
    }
    else
    {
        cout << anoActual-fechanac.ano << " años de edad" << endl;
    }
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