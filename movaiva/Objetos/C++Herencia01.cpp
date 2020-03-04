/*
Toma la clase persona que has definido en el ejercicio 1 
del boletín C++Objetos_03a.txt. A partir de ella crea una 
clase asalariado que guarde información sobre el sueldo que 
cobra la persona neto al mes y la retención que se le aplica
 en la nómina. Crea al menos un constructor y un los correspondientes 
 métodos de get y set.
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
    protected:
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
    DNI=dni1;
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

class Asalariado:public Persona
{
    protected:
        float neto;
        float retencion;
    public:
        Asalariado(string dni,string nombre1,string apellidos1,struct fecha fechanac1,string lugarnac1,string paisnac1,float neto1,float retencion1);
        void setNeto(float neto1);
        float getNeto();
        void setRetencion(float retencion1);
        float getRetencion();
};

Asalariado::Asalariado(string dni,string nombre1,string apellidos1,struct fecha fechanac1,string lugarnac1,string paisnac1,float neto1,float retencion1)
{
    DNI=dni;
    nombre=nombre1;
    apellidos=apellidos1;
    fechanac=fechanac1;
    lugarnac=lugarnac1;
    paisnac=paisnac1;
    neto=neto1;
    retencion=retencion1;
}

void Asalariado::setNeto(float neto1)
{
    neto=neto1;
}

float Asalariado::getNeto()
{
    return neto;
}

void Asalariado::setRetencion(float retencion1)
{
    retencion=retencion1;
}

float Asalariado::getRetencion()
{
    return retencion;
}

int main ()
{
    
    struct fecha f;
    f.dia=5;
    f.mes=5;
    f.ano=2005;
    Asalariado a("332211445566J","Joaquin","Garcia",f,"Lugo","España",15.20,0.5);

    cout << "Asalariado" << endl;
    cout << "DNI: " << a.getDNI() << endl;
    cout << "Nombre: " << a.getNombre() << endl;
    cout << "Apellidos: " << a.getApellidos() << endl;
    cout << "Fecha de nacimiento: " << a.getFechaNac().dia << "/" << a.getFechaNac().mes << "/" << a.getFechaNac().ano << endl;
    cout << "Lugar de nacimiento: " << a.getLugarNac() << endl;
    cout << "Pais de nacimiento: " << a.getPaisNac() << endl;
    cout << "Sueldo neto: " << a.getNeto() << endl;
    cout << "Retencion: " << a.getRetencion() << endl; 

    return 0;   
}