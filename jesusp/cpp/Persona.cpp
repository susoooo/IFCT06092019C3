#include <iostream>
#include <cstring>

using namespace std;

struct Fecha
{
    int dia, mes, anho;
};

class persona
{
char dni[9];
char nombre[20];
char Pape[30];
char Sape[30];
struct Fecha fechnac;
char Lunac[25];
char Panac[20];

public:
persona();
persona(char *ndi);
persona(char *name, char *apell1, char *apell2);
persona(char *ndi, char *name, char *apell1, char *apell2, struct Fecha fechan, char *lugar, char *pais);
void imprimir ();
~persona();
};

persona::persona ()
{
    strcpy(dni, "");
    strcpy(nombre,"");
    strcpy(Pape, "");
    strcpy(Sape, "");
    fechnac.dia = 1;
    fechnac.mes = 1;
    fechnac.anho = 1900;
    strcpy(Lunac, "");
    strcpy(Panac,"");
}

persona::persona (char *ndi)
{
    strcpy(dni, ndi);
    strcpy(nombre,"");
    strcpy(Pape, "");
    strcpy(Sape, "");
    fechnac.dia = 1;
    fechnac.mes = 1;
    fechnac.anho = 1900;
    strcpy(Lunac, "");
    strcpy(Panac,"");
}

persona::persona(char *name, char *apell1, char *apell2)
{
    strcpy(dni, "");
    strcpy(nombre, name);
    strcpy(Pape, apell1);
    strcpy(Sape,apell2);
    fechnac.dia = 1;
    fechnac.mes = 1;
    fechnac.anho = 1900;
    strcpy(Lunac, "");
    strcpy(Panac,"");
}

persona::persona(char *ndi,char *name, char *apell1, char *apell2, struct Fecha fechan, char *lugar, char *pais)
{
    strcpy(dni, ndi);
    strcpy(nombre, name);
    strcpy(Pape, apell1);
    strcpy(Sape, apell2);
    fechnac.dia = fechan.dia;
    fechnac.mes = fechan.mes;
    fechnac.anho = fechan.anho;
    strcpy(Lunac,lugar );
    strcpy(Panac,pais );
}

void persona::imprimir()
{
    cout << dni << endl;
    cout << nombre << " " << Pape <<" "<< Sape << endl;
    cout << fechnac.dia << "-" << fechnac.mes << "-" << fechnac.anho << endl;
    cout << Lunac<< endl;
    cout << Panac<< endl;
}

persona::~persona ()
{
    int edad;
    edad = 0;
    cout << "Descanse en paz " << nombre << endl;
    edad =(9, 3, 2020) -(fechnac.dia, fechnac.mes, fechnac.anho);
    cout << "Tenia "<< edad << " anios"<< endl;
}

int main()
{
    Fecha Nacimiento;
    Nacimiento.dia =12;
    Nacimiento.mes =3;
    Nacimiento.anho =1989;
    persona suso;
    persona jesus("21345678A");
    persona fran("Francisco", "Fuentes", "Aguado");
    persona tere;
    persona elvis;
    persona pedro;
    persona santiago;
    persona juan("56723428G","Juan", "Lopez", "Garcia", Nacimiento, "Sarria(Lugo)", "Espanha");
    printf("Hola");
    suso.imprimir();
    jesus.imprimir();
    fran.imprimir();
    tere.imprimir();
    elvis.imprimir();
    pedro.imprimir();
    santiago.imprimir();
    juan.imprimir();
}
