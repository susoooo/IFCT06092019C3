/*
A partir de la clase asalariado, define ahora 
un par de clases: obrero y médico. En la clase 
obrero, guarda el nombre del cargo que desempeña. 
Para la clase médico, guarda información sobre la 
cantidad de pacientes que tiene a su cargo. Crea 
los constructores y metodos get y set que creas 
necesarios.
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
    Asalariado a("332211445566J","Joaquin","Garcia",f,"Lugo","España",15.20,0.5);

    a.mostrarDatos();

    return 0;   
}