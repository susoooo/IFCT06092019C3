/*
Crea un programa que, utilizando las clases anteriores, 
cree un objeto para almacenar datos sobre una persona 
que no es asalariada, un asalariado que no es médico 
ni obrero, sobre dos asalariados y sobre un médico. 
Todos los objetos creados deberán contener datos en 
sus propiedades. Haz que el programa muestre los datos 
de los distintos objetos creados por pantalla.
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
        void mostrarDatos();
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

void Persona::mostrarDatos()
{
    cout << "DNI: " << DNI << endl;
    cout << "Nombre: " << nombre << endl;
    cout << "Apellidos: " << apellidos << endl;
    cout << "Fecha de nacimiento: " << fechanac.dia << "/" << fechanac.mes << "/" << fechanac.ano << endl;
    cout << "Lugar de nacimiento: " << lugarnac << endl;
    cout << "Pais de nacimiento: " << paisnac << endl;
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
        void mostrarDatos();
};

Asalariado::Asalariado(string dni,string nombre1,string apellidos1,struct fecha fechanac1,string lugarnac1,string paisnac1,float neto1,float retencion1):Persona(dni,nombre1,apellidos1,fechanac1,lugarnac1,paisnac1)
{
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

void Asalariado::mostrarDatos()
{
    Persona::mostrarDatos();
    cout << "Sueldo neto: " << neto << endl;
    cout << "Retencion: " << retencion << endl; 
}

class Obrero:public Asalariado
{
    protected:
        string cargo;
    public:
        Obrero(string dni,string nombre1,string apellidos1,struct fecha fechanac1,string lugarnac1,string paisnac1,float neto1,float retencion1,string cargo);
        void setCargo(string cargo1);
        string getCargo();
        void mostrarDatos();
};

Obrero::Obrero(string dni,string nombre1,string apellidos1,struct fecha fechanac1,string lugarnac1,string paisnac1,float neto1,float retencion1,string cargo1):Asalariado(dni,nombre1,apellidos1,fechanac1,lugarnac1,paisnac1,neto1,retencion1)
{   
    cargo=cargo1;
}

void Obrero::setCargo(string cargo1)
{
    cargo=cargo1;
}

string Obrero::getCargo()
{
    return cargo;
}

void Obrero::mostrarDatos()
{
    Asalariado::mostrarDatos();
    cout << "Cargo: " << cargo << endl;
}

class Medico:public Asalariado
{
    protected:
        int pacientes;
    public:
        Medico(string dni,string nombre1,string apellidos1,struct fecha fechanac1,string lugarnac1,string paisnac1,float neto1,float retencion1,int pacientes1);
        void setPacientes(int pacientes1);
        int getPacientes();
        void mostrarDatos();
};

Medico::Medico(string dni,string nombre1,string apellidos1,struct fecha fechanac1,string lugarnac1,string paisnac1,float neto1,float retencion1,int pacientes1):Asalariado::Asalariado(dni,nombre1,apellidos1,fechanac1,lugarnac1,paisnac1,neto1,retencion1)
{
    pacientes=pacientes1;
}

void Medico::setPacientes(int pacientes1)
{
    pacientes=pacientes1;
}

int Medico::getPacientes()
{
    return pacientes;
}

void Medico::mostrarDatos()
{
    Asalariado::mostrarDatos();
    cout << "Pacientes: " << pacientes << endl;
}

int main ()
{
    
    struct fecha f;
    f.dia=5;
    f.mes=5;
    f.ano=2005;
    
    Persona p("33549024B","Maite","Fernandez",f,"Granada","Espana");
    cout << "Persona" << endl;
    p.mostrarDatos();
    
    Asalariado a1("33221144J","Joaquin","Garcia",f,"Lugo","Espana",1000.20,0.5);
    cout << "Asalariado 1" << endl;
    a1.mostrarDatos();

    Asalariado a2("22114556L","Martin","Garcia",f,"Pontevedra","Espana",750.20,0.5);
    cout << "Asalariado 2" << endl;
    a2.mostrarDatos();

    Asalariado a3("11445566K","Joaquin","Garcia",f,"Ferrol","Espana",800.20,0.5);
    cout << "Asalariado 3" << endl;
    a3.mostrarDatos();

    Medico m("44556623H","Joaquin","Garcia",f,"Madrid","Espana",2200.20,0.5,4);
    cout << "Medico" << endl;
    m.mostrarDatos();

    return 0;   
}