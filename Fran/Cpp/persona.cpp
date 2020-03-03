#include <iostream>
#include <cstring>

using namespace std;

struct fecha
{
    int dia;
    int mes;
    int anio;
};

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

    void leerDatos();
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

void persona::leerDatos()
{
    cout << endl << "------------------------------------------------------" << endl;
    cout << "Datos del alumno: " << endl;
    cout << "Nombre: " << apellido1 << " " << apellido2 << " " << nombre << endl;
    cout << "D.N.I.: " << dni << endl;
    cout << "Fecha Nacimiento: " << fechaNacimiento.dia << "-" << fechaNacimiento.mes << "-" << fechaNacimiento.anio << endl;
    cout << "Lugar nacimiento: " << lugarNacimiento << endl;
    cout << "Pais nacimiento: " << paisNacimiento << endl;
    cout << "------------------------------------------------------" << endl;
}


int main()
{
    struct fecha fechaNac;
    persona fran("11111111a");
    persona jesus("22222222b", "Jesus", "otero", "seoane");
    persona teresa("teresa", "apellido1", "apellido2");
    persona elvis("elvis", "machaca", "teclas");
    persona pedro;
    fechaNac.dia = 12;
    fechaNac.mes = 8;
    fechaNac.anio = 1990;
    persona santiago("santiago", "apellido1", "apellido2", "33333333c", fechaNac, "Lugo", "España");
    persona juan("44444444d", "juan", "1apellido", "2apellido");
    persona jose;
    persona suso;
    persona pedro2;


    fran.leerDatos();
    system("pause");
    teresa.leerDatos();
    pedro.leerDatos();

    return 0;
}
