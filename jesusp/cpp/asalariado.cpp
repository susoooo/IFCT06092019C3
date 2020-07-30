#include <iostream>
#include <cstring>

using namespace std;

struct Fecha
{
    int dia, mes, anho;
};

class persona
{
public:
persona();
persona(char *name, char *apell1, char *apell2, struct Fecha fechan);
char* getDni(void);
void LeerDatos();

protected:
char dni[9];
char nombre[20];
char Pape[30];
char Sape[30];
struct Fecha fechnac;
char Lunac[25];
char Panac[20];
};

class asalariado:public persona
{
public:
asalariado(float sal, float ret);
asalariado(char *name, char *apell1, char *apell2, struct Fecha fechan, float sal, float ret);
asalariado(char *name, char *apell1, char *apell2, struct Fecha fechan);

float LeerSalario();
void setSalarioNeto(float sal, float ret);

protected:
float salario;
float retencion;
float multi;
float neto;
};

class obrero:public asalariado
{
public:
obrero(float sal, float ret, char *puesto);
protected:
char cargo[15];
};

class medico:public asalariado
{
public:
medico(char *name, char *apell1, char *apell2, struct Fecha fechan, int pac);
int LeerNpac();
void Datosmed(void);
protected:
int pacientes;
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

persona::persona(char *name, char *apell1, char *apell2, struct Fecha fechan)
{
    strcpy(dni, "");
    strcpy(nombre, name);
    strcpy(Pape, apell1);
    strcpy(Sape, apell2);
    fechnac.dia = fechan.dia;
    fechnac.mes = fechan.mes;
    fechnac.anho = fechan.anho;
    strcpy(Lunac,"" );
    strcpy(Panac,"" );
}

char *persona::getDni()
{
    cout << dni << endl;
    return dni;
}

void persona::LeerDatos()
{
    cout << nombre << " " << Pape <<" "<< Sape << endl;
    cout << fechnac.dia << "-" << fechnac.mes << "-" << fechnac.anho << endl;
}

asalariado::asalariado(char *name, char *apell1, char *apell2, struct Fecha fechan, float sal, float ret):persona(name, apell1, apell2, fechan)
{
    salario = sal;
    retencion = ret;
}
asalariado::asalariado(char *name, char *apell1, char *apell2, struct Fecha fechan):persona(name, apell1, apell2, fechan)
{

}
asalariado::asalariado(float sal, float ret):persona()
{
    salario = sal;
    retencion = ret;
}

float asalariado::LeerSalario()
{
    cout << salario << endl;
    return salario;

}

void asalariado::setSalarioNeto(float sal, float ret)
{
    multi = 0.0;
    neto = 0.0;
    salario = sal;
    retencion = ret;
    multi = sal*ret;
    neto = sal-multi;
    cout << "Salario Bruto: "<< sal <<endl;
    cout << "Total retencion: "<< multi << endl;
    cout << "Salario Neto: " << neto << endl;
}

obrero::obrero(float sal, float ret, char *puesto):asalariado(sal, ret)
{
strcpy(cargo, puesto);
}

medico::medico(char *name, char *apell1, char *apell2, struct Fecha fechan,int pac):asalariado(name, apell1, apell2, fechan)
{
    pacientes = pac;
}

int medico::LeerNpac()
{
    cout << pacientes << endl;
    return pacientes;
}

void medico::Datosmed(void)
{
    cout << nombre << " " << Pape <<" "<< Sape << endl;
    cout << fechnac.dia << "-" << fechnac.mes << "-" << fechnac.anho << endl;
    cout << pacientes << " pacientes" << endl;
}
int main()
{
Fecha natal;
natal.dia = 4;
natal.mes = 6;
natal.anho = 1989;
Fecha med;
med.dia = 11;
med.mes = 2;
med.anho = 1977;
persona adan("Adan", "Martinez", "Adanez", natal);
adan.LeerDatos();
asalariado Luis(2000, 0.25);
Luis.LeerSalario();
asalariado Carlos("Carlos", "Sanchez", "Marin", natal, 2100, 0.25);
asalariado Cristina("Cristina", "Galvez", "Perez", natal, 2200, 0.3);
Carlos.setSalarioNeto(2100, 0.25);
Cristina.setSalarioNeto(2275.5, 0.3);
medico Wendy("Wendy", "Olsen", "Garcia", med,25);
Wendy.Datosmed();
}
