/*1-Toma la clase persona que has definido en el ejercicio 1 del boletín C++Objetos_03a.txt.
A partir de ella crea una clase asalariado que guarde información sobre el sueldo que cobra
la persona neto al mes y la retención que se le aplica en la nómina.
Crea al menos un constructor y un los correspondientes métodos de get y set.

*/

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

    struct fecha fechanacimiento;
    char lugar[10];
    char pais[10];

protected:

    string nombre;
    char apellido1[15];
    char apellido2[15];
    char DNI[10];


public:

    //Constructores o métodos de la clase
    persona();
    persona(char docum[10]);
    persona(string nom,char ape1[15],char ape2[15]);
    persona(char docum[10],string nom,char ape1[15],char ape2[15]);
    persona(char docum[10],string nom,char ape1[15],char ape2[15],int dia, int mes, int year,char lug[10],char pa[10]);
    /*~persona();*/

    fijarnombre(string nom);
    string sacarnombre();

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


persona::fijarnombre(string nom)
{
    nombre=nom;
}

string persona::sacarnombre()
{
    return(nombre);
}


/*persona::~persona()
{

    cout<< "Adios "<< nombre<<endl;
}*/

void persona::leerDatos()
{
    cout << "Nombre: "<< nombre<<" "<<apellido1<<" " <<apellido2 << endl;
    cout << "DNI: " << DNI<< endl;
    cout << "Fecha de nacimiento: "<<fechanacimiento.dia<<"/"<<fechanacimiento.mes<<"/"<<fechanacimiento.year<< endl;
    cout << "Lugar de nacimiento"<< lugar<< endl;
    cout << "Pais de nacimiento" << pais << endl << endl;

}


class Asalariado : public persona
{
    int sbruto;
    float retencion;
    float neto;

public:

    //Definiendo métodos
    Asalariado();

    Asalariado(int bruto);

    Asalariado(int bruto, float reten );  //todos los constructores se llaman igual que la clase

    Asalariado(int bruto, float reten, float net);

    fijarbruto (int bruto); //método set
    fijarretencion (float reten);

    int sacarbruto(); //método get
    float sacarretencion();

    /*metodos nuestros*/
     float calcularneto(int bruto, float reten);

    void leerDatos();
};


//programando constructores

Asalariado::Asalariado()
{
    sbruto= 0;
    retencion= 0;
    neto = 0;
}

Asalariado::Asalariado(int bruto, float reten)
   {

    sbruto= bruto;
    retencion= reten;
    neto = bruto-(bruto * reten);
   }

   Asalariado::Asalariado(int bruto, float reten, float net)
   {

    sbruto= bruto;
    retencion= reten;
    neto= net;
   }


Asalariado::fijarbruto (int bruto)
{
    sbruto=bruto;
}


Asalariado::fijarretencion (float reten)
{
    retencion= reten;
}


int Asalariado:: sacarbruto()
{
    return(sbruto);
}

float Asalariado:: sacarretencion()
{
    return(retencion);
}



float Asalariado::calcularneto(int bruto, float reten)

   {
    sbruto= bruto;
    retencion= reten;

    neto = bruto-(bruto * reten);

    return(neto);
   }


   void Asalariado::leerDatos()
{
    cout << "Salario bruto: "<< sbruto << endl;
    cout << "Retencion: " << retencion<< endl;
    cout << "Salario neto: "<<neto<< endl<<endl;


}


  /*2-A partir de la clase asalariado, define ahora un par de clases: obrero y médico.
En la clase obrero, guarda el nombre del cargo que desempeña.
Para la clase médico, guarda información sobre la cantidad de pacientes que tiene a su cargo.
Crea los constructores y metodos get y set que creas necesarios.*/

class obrero: public Asalariado
{

protected:

    string cargo;

public:

    obrero(string car);

    fijarcargo(string car);

    string sacarcargo();
};

obrero::obrero(string car)
{
    cargo= car;
}

obrero::fijarcargo(string car)
{
    cargo= car;
}

string obrero:: sacarcargo()
{
    return(cargo);
}

class medico: public Asalariado
{
    protected:

int numpacientes;


public:

    medico(int num);

    fijarnumpacientes(int num);

    int sacarnumpacientes();

    void leerDatos();
};

medico::medico(int num)
{
    numpacientes= num;
}

medico::fijarnumpacientes(int num)
{
    numpacientes= num;
}

int medico::sacarnumpacientes()
{
    return(numpacientes);
}

void medico::leerDatos()
{
    persona::leerDatos();
    cout << "Número Pacientes: "<< numpacientes << endl;
    Asalariado::leerDatos();
}


/*3-Crea un programa que, utilizando las clases anteriores,
cree un objeto para almacenar datos sobre una persona que no es asalariada,
un asalariado que no es médico ni obrero, sobre dos asalariados y sobre un médico.
Todos los objetos creados deberán contener datos en sus propiedades.
Haz que el programa muestre los datos de los distintos objetos creados por pantalla.*/

int main()
{

    persona Pepe("Pepe","Lopez","Lopez");//persona no asalariada

    Asalariado Ana (1000,0.02);// persona asalariada que no es médico ni obrero

    Asalariado Manuel (1050,0.02);// persona asalariada

  //  Asalariado Raul (1200,0.02);// persona asalariada

    medico Raul(40); //médico

    Raul.fijarnombre("Raul");
    Raul.sacarnombre();

    Raul.fijarbruto(1500);
    Raul.sacarbruto();

    Raul.fijarretencion (0.04);
    Raul.sacarretencion();

    Pepe.leerDatos();
    Ana.leerDatos();
    Manuel.leerDatos();
    Raul.leerDatos();
}

