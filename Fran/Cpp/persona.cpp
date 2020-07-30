#include <iostream>
#include <cstring>

using namespace std;

struct fecha
{
    int dia;
    int mes;
    int anio;
};

// ---------------------- Creacion de la clase persona.

class persona
{
    string nombre;
    string apellido1;
    string apellido2;
    string dni;
    struct fecha fechaNacimiento;
    string lugarNacimiento;
    string paisNacimiento;

    public:
        persona();
        persona(string docum);
        persona(string nom, string ape1, string ape2);
        persona(string docum, string nom, string ape1, string ape2);
        persona(string nom, string ape1, string ape2, string dni, struct fecha fechaNac, string localidad, string pais);
        ~persona();

        string leerNombre();
        string leerApellido1();
        string leerApellido2();
        string leerDni();
        struct fecha leerFecha();
        string leerLugar();
        string leerPais();

        void setDni(string docum);
        void setNomApe(string nom, string ape1, string ape2);
        void setNomApeDni(string docum, string nom, string ape1, string ape2);
        void setTodo(string nom, string ape1, string ape2, string dni, struct fecha fechaNac, string localidad, string pais);

        void mostrarDatos();
};

persona::persona()
{
    nombre = "Anonimo";
    apellido1 = "";
    apellido2 = "";
    dni = "";
    fechaNacimiento.dia = 1;
    fechaNacimiento.mes = 1;
    fechaNacimiento.anio = 1900;
    lugarNacimiento = "";
    paisNacimiento = "";

}

persona::persona(string docum)
{
    nombre = "Anonimo";
    apellido1 = "";
    apellido2 = "";
    dni = docum;
    fechaNacimiento.dia = 1;
    fechaNacimiento.mes = 1;
    fechaNacimiento.anio = 1900;
    lugarNacimiento = "";
    paisNacimiento = "";
}

persona::persona(string nom, string ape1, string ape2)
{
    nombre = nom;
    apellido1 = ape1;
    apellido2 = ape2;
    dni = "";
    fechaNacimiento.dia = 1;
    fechaNacimiento.mes = 1;
    fechaNacimiento.anio = 1900;
    lugarNacimiento = "";
    paisNacimiento = "";
}

persona::persona(string docum, string nom, string ape1, string ape2)
{
    nombre = nom;
    apellido1 = ape1;
    apellido2 = ape2;
    dni = docum;
    fechaNacimiento.dia = 1;
    fechaNacimiento.mes = 1;
    fechaNacimiento.anio = 1900;
    lugarNacimiento = "";
    paisNacimiento = "";
}

persona::persona(string nom, string ape1, string ape2, string docum, struct fecha fechaNac, string localidad, string pais)
{
    nombre = nom;
    apellido1 = ape1;
    apellido2 = ape2;
    dni = docum;
    fechaNacimiento.dia = fechaNac.dia;
    fechaNacimiento.mes = fechaNac.mes;
    fechaNacimiento.anio = fechaNac.anio;
    lugarNacimiento = localidad;
    paisNacimiento = pais;
}

persona::~persona()
{
    cout << "Adios, " << nombre << endl;
}

string persona::leerNombre()
{
    return nombre;
}

string persona::leerApellido1()
{
    return apellido1;
}

string persona::leerApellido2()
{
    return apellido2;
}

string persona::leerDni()
{
    return dni;
}

struct fecha persona::leerFecha()
{
    return fechaNacimiento;
}

string persona::leerLugar()
{
    return lugarNacimiento;
}

string persona::leerPais()
{
    return paisNacimiento;
}

void persona::setTodo(string nom, string ape1, string ape2, string docum, struct fecha fechaNac, string localidad, string pais)
{
    nombre = nom;
    apellido1 = ape1;
    apellido2 = ape2;
    dni = docum;
    fechaNacimiento.dia = fechaNac.dia;
    fechaNacimiento.mes = fechaNac.mes;
    fechaNacimiento.anio = fechaNac.anio;
    lugarNacimiento = localidad;
    paisNacimiento = pais;
}

void persona::mostrarDatos()
{
    cout << endl << "------------------------------------------------------" << endl;
    cout << "Datos del alumno: " << endl;
    cout << "Nombre: " << nombre << " " << apellido1 << " " << apellido2 << endl;
    cout << "D.N.I.: " << dni << endl;
    cout << "Fecha Nacimiento: " << fechaNacimiento.dia << "-" << fechaNacimiento.mes << "-" << fechaNacimiento.anio << endl;
    cout << "Lugar nacimiento: " << lugarNacimiento << endl;
    cout << "Pais nacimiento: " << paisNacimiento << endl;
    cout << "------------------------------------------------------" << endl;
}

// ---------------------- Creacion de la clase asalariado.

class asalariado : public persona
{
    protected:
        int sueldo;
        int retencion;
        int neto;

    public:
        asalariado();
        asalariado(int bruto, int reten);
        asalariado(int bruto, int reten, int sueldoNeto);

        int leerSueldo();
        int leerRetencion();

        void ponerSueldo(int bruto);
        void ponerRetencion(int reten);

        void calcNeto();

        void mostrarSueldo();
};

asalariado::asalariado()
{
    sueldo = 0;
    retencion = 0;
    neto = 0;
    cout << endl << "No tengo parametros" << endl;
}

asalariado::asalariado(int bruto, int reten)
{
    sueldo = bruto;
    retencion = reten;
    cout << endl << "Tengo 2 parametros" << endl;
}

asalariado::asalariado(int bruto, int reten, int sueldoNeto)
{
    sueldo = bruto;
    retencion = reten;
    neto = sueldoNeto;
    cout << endl << "Tengo 3 parametros" << endl;
}

void asalariado::calcNeto()
{
    neto = sueldo - retencion;
}

int asalariado::leerSueldo()
{
    return sueldo;
}

int asalariado::leerRetencion()
{
    return retencion;
}

void asalariado::ponerSueldo(int bruto)
{
    sueldo = bruto;
}

void asalariado::ponerRetencion(int reten)
{
    retencion = reten;
}

void asalariado::mostrarSueldo()
{
    cout << endl << "------------------------------------------------------" << endl;
    cout << "Sueldo: " << sueldo << endl;
    cout << "Retencion: " << retencion << endl;
    cout << "------------------------------------------------------" << endl;
}

// ---------------------- Creacion de la clase obrero.

class obrero : public asalariado
{
    protected:
        string cargo;

    public:
        obrero();
        obrero(string puesto);

        string leerCargo();
        void ponerCargo(string puesto);

        void mostrarCargo();
};

obrero::obrero()
{
    cargo = "peon";
}

obrero::obrero(string puesto)
{
    cargo = puesto;
}

string obrero::leerCargo()
{
    return cargo;
}

void obrero::ponerCargo(string puesto)
{
    cargo = puesto;
}

void obrero::mostrarCargo()
{
    cout << endl << "------------------------------------------------------" << endl;
    cout << "Cargo: " << cargo << endl;
    cout << "------------------------------------------------------" << endl;
}

// ---------------------- Creacion de la clase medico.

class medico : public asalariado
{
    protected:
        int numPacientes;

    public:
        medico();
        medico(int pacientes);

        int leerPacientes();
        void ponerPacientes(int pacientes);

        void mostrarPacientes();
};

medico::medico()
{
    numPacientes = 0;
}

medico::medico(int pacientes)
{
    numPacientes = pacientes;
}

int medico::leerPacientes()
{
    return numPacientes;
}

void medico::ponerPacientes(int pacientes)
{
    numPacientes = pacientes;
}

void medico::mostrarPacientes()
{
    cout << endl << "------------------------------------------------------" << endl;
    cout << "Nº Pacientes: " << numPacientes << endl;
    cout << "------------------------------------------------------" << endl;
}

int main()
{
    struct fecha fechaNac;
    fechaNac.dia = 12;
    fechaNac.mes = 8;
    fechaNac.anio = 1911;

    persona fulanito("Pepito", "Grillo", "Perez", "12345678J", fechaNac, "Grillolandia", "Oz");

    cout << endl << "-----------------------------------------------" << endl;
    fulanito.mostrarDatos();

    asalariado gorron1(1500, 90);
    gorron1.setTodo("Nodoy", "nipalo", "alagua", "11223344C", fechaNac, "la cama", "dormilandia");

    cout << endl << "-----------------------------------------------" << endl;

    gorron1.mostrarDatos();
    gorron1.mostrarSueldo();

    asalariado gorron2(1130, 55);
    gorron2.setTodo("Nodas", "nipalo", "alagua", "11223344C", fechaNac, "la cama", "dormilandia");

    cout << endl << "-----------------------------------------------" << endl;
    gorron2.mostrarDatos();
    gorron2.mostrarSueldo();

    asalariado gorron3(1400, 76);
    gorron3.setTodo("Nodan", "nipalo", "alagua", "11223344C", fechaNac, "la cama", "dormilandia");

    cout << endl << "-----------------------------------------------" << endl;
    gorron3.mostrarDatos();
    gorron3.mostrarSueldo();

    medico elDoctor("matao");
    elDoctor.setTodo("Pongo", "Tiritas", "De Colores", "66558877G", fechaNac, "Todos sanos", "Sanitos de arriba");
    elDoctor.ponerSueldo(1600);
    elDoctor.ponerRetencion(88);

    cout << endl << "-----------------------------------------------" << endl;

    elDoctor.mostrarDatos();
    elDoctor.mostrarSueldo();
    elDoctor.mostrarPacientes();

    return 0;
}
