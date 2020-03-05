#include <iostream>
#include <cstring>
using namespace std;

struct Fecha{
	Fecha(){dia=0; mes=0; ano=0;}
	int dia;
	int mes;
	int ano;
};

class Persona{

	char dni[9];
	char nombre[30];
	char primer_apellido[50];
	char segundo_apellido[50];
	char lugar_nacimiento[10];
	char pais_nacimiento[10];
	struct Fecha fecha_nacimiento;
	void Vacia();

	public:
	// Constructor
	Persona();
	Persona(char *dni2);
	Persona(char p_a[], char s_a[]);
	Persona(int dni2, char p_a[], char s_a[]);
	Persona(int dni2, char nom[], char p_a[], char s_a[], char l_n[], 
	char p_n[], struct Fecha fecha_nacimiento);
	~Persona();

	void Lee();
	void Modifica(int dni2, char nom[], char p_a[], char s_a[], char l_n[], 
	char p_n[], struct Fecha fecha_nacimiento);
	
};

// Constructores:

Persona::Persona(){
cout << "Constructor sin parámetros" << endl;
}

Persona::~Persona(){
	cout << "Soy el destructor" << endl;
}

Persona::Persona(char *c){
	
strcpy(dni, c);
}

Persona::Persona(char *p_a, char *s_a){
	
	&primer_apellido=p_a;
	&segundo_apellido=s_a;
}

Persona::Persona(int dni2, char *p_a, char *s_a){
	
	dni=dni2;
	primer_apellido[]=p_a;
	segundo_apellido[]=s_a;
}

Persona::Persona(int dni2, char *nom, char *p_a, char *s_a, char *l_n,
 char *p_n, struct Fecha *f_n){

	dni[]=dni2;
	nombre[]=nom;
	primer_apellido[]=p_a;
	segundo_apellido[]=s_a;
	lugar_nacimiento[]=l_n;
	pais_nacimiento[]=p_n;
	fecha_nacimiento[]=f_n;
}

// Métodos

Persona::Modifica(int dni2, char *nom, char *p_a, char *s_a, char *l_n,
 char *p_n, struct Fecha f_n){

	dni=dni2;
	nombre=nom;
	primer_apellido=p_a;
	segundo_apellido=s_a;
	lugar_nacimiento=l_n;
	pais_nacimiento=p_n;
	fecha_nacimiento=f_n;
}

Persona::Lee(){
	cout << per.dni << per.nombre << per.primer_apellido <<
	per.segundo_apellido << per.lugar_nacimiento <<
	per.pais_nacimiento << per.fecha_nacimiento << end1;
}

Persona::Vacia(){
	
	strcpy(dni,"");
	strcpy(nombre,"");
	strcpy(primer_apellido,"");
	strcpy(segundo_apellido,"");
	strcpy(lugar_nacimiento,"");
	strcpy(pais_nacimiento,"");
	fecha_nacimiento=f_n.Fecha();
}

int main() {
	
Persona Suso("34563534G");
Suso.Lee();
Persona Fran("López", "González");
Fran.Lee();
Persona Jose("33327474J", "Vila", "Arias");
Jose.Lee();
}
