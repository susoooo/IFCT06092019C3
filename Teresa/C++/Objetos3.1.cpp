/*1-Crea una clase que represente a una persona.
Al menos debe contener información sobre su nombre,
apellido primero y segundo, fecha de nacimiento,
lugar de nacimiento y pais de nacimiento.
Crea constructores que permitan la creación de personas sin saber sus datos,
conociendo su DNI, su nombre y apellidos, ambos, y todos los datos incluidos en la clase.

Crea objetos para cada uno de los compañeros de clase usando diferentes constructores
y haz que las clases impriman los datos que tienen sobre ellos.*/


#include <iostream>
#include <string.h>

using namespace std;

struct fecha
{
    int dia;
    int mes;
    int year;
};

class persona
{

    string nombre;
    char apellido1[15];
    char apellido2[15];
    struct fecha fechanacimiento;
    char lugar[10];
    char pais[10];
    char DNI[10];

public:

    //Constructores o métodos de la clase
    persona();
    persona(char docum[10]);
    persona(string nom,char ape1[15],char ape2[15]);
    persona(char docum[10],string nom,char ape1[15],char ape2[15]);
    persona(char docum[10],string nom,char ape1[15],char ape2[15],int dia, int mes, int year,char lug[10],char pa[10]);


    void leerDatos(); //MÉTODOS
};


persona::persona() //Aquí definimos los constructores y métodos
{
    nombre= ""; //Así se rellena todo de 0.
    memset(apellido1,0,15);
    memset(apellido2,0,15);
    fechanacimiento.dia = 0;
    fechanacimiento.mes = 0;
    fechanacimiento.year = 0;
    memset(lugar,0,10);
    memset(pais,0,10);
    memset(DNI,0,10);
}

persona::persona(char docum[10])
{

    nombre= "";
    memset(apellido1,0,15);
    memset(apellido2,0,15);
    fechanacimiento.dia = 0;
    fechanacimiento.mes = 0;
    fechanacimiento.year = 0;
    memset(lugar,0,10);
    memset(pais,0,10);
    strcpy(DNI, docum);
}

persona::persona(string nom,char ape1[15],char ape2[15])
{
    nombre=nom;
    strcpy(apellido1 , ape1);
    strcpy(apellido2 , ape2);
    fechanacimiento.dia = 0;
    fechanacimiento.mes = 0;
    fechanacimiento.year = 0;
    memset(lugar,0,10);
    memset(pais,0,10);
    memset(DNI,0,10);
}



persona::persona(char docum[10],string nom,char ape1[15],char ape2[15])
{
    strcpy(DNI, docum);
    nombre=nom;
    strcpy(apellido1 , ape1);
    strcpy(apellido2 , ape2);
    fechanacimiento.dia = 0;
    fechanacimiento.mes = 0;
    fechanacimiento.year = 0;
    memset(lugar,0,10);
    memset(pais,0,10);

}

persona::persona(char docum[10],string nom,char ape1[15],char ape2[15],int dia, int mes, int year,char lug[10],char pa[10])
{
    strcpy(DNI, docum);
    nombre=nom;
    strcpy(apellido1 , ape1);
    strcpy(apellido2 , ape2);
    fechanacimiento.dia = dia;
    fechanacimiento.mes = mes;
    fechanacimiento.year = year;
    strcpy(lugar , lug);
    strcpy(pais, pa);

}

void persona::leerDatos()
{
    cout << "Nombre: "<< nombre<<" "<<apellido1<<" " <<apellido2 << endl;
    cout << "DNI: " << DNI<< endl;
    cout << "Fecha de nacimiento: "<<fechanacimiento.dia<<"/"<<fechanacimiento.mes<<"/"<<fechanacimiento.year<< endl;
    cout << "Lugar de nacimiento"<< lugar<< endl;
    cout << "Pais de nacimiento" << pais << endl << endl;



}

int main()
{


    persona jesus("Jesus","otero","seoane");
    persona suso("33333333A","Jesus","otero","seoane");
    persona teresa("Teresa","Lopez","seoane");
    persona elvis("35526897s","Elvis","Lopez","seoane", 10,12,1980,"Lugo","Española");
    persona fran("Fran","Lopez","seoane");
    persona pedro("Pedro","Lopez","seoane");
    persona juan("Juan","Lopez","seoane");
    persona santiago("Santiago","Lopez","seoane");
    persona jose;

    jesus.leerDatos();
    suso.leerDatos();
    teresa.leerDatos();
    elvis.leerDatos();
    fran.leerDatos();
    pedro.leerDatos();
    juan.leerDatos();
    santiago.leerDatos();
    jose.leerDatos();

/*
   do
   {
    cout << "Pon el nombre: ";
   cin >> nom;
   cout << "Pon el primer apellido: ";
   cin >> ape1;
   cout << "Pon el segundo apellido: ";
   cin >> ape2;
   cout << "Pon el numero DNI: ";
   cin >> docum;
   cout << "Para salir pulsa 0, para seguir no pulses 0: ";
   cin >> Salir;

   }
   while (Salir!=0);*/


}












