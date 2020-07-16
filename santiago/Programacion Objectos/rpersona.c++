#include <iostream>
#include <cstring>
#include <stdlib.h>
using namespace std;

class persona{
	private:
	
		char nombre[10];
		struct 
		{
			char primer_apellido[10];
			char segundo_apellido[10];
		} apellidos;
		
		struct 
		{
			int dia;
			int mes;
			int ano;
		}fecha_de_nacimiento;
		
		char lugar_de_nacimiento[8];
		char pais_de_nacimiento[30];
		int DNI;
		void inicializar();
		
	public:
	
		persona();
		persona(int n);
		persona(char a[10], char b[10], char c[10]);
		persona(int n, char a[10], char b[10], char c[10]);
		persona(char a[10], char b[10], char c[10], int n,int fd, int fm, int fa, char na[8], char pais[30]);
		void imprimir();
		~persona();
};

persona::persona(){};

persona::persona(int n)
{
	inicializar();
	DNI=n;
}

persona::persona(char a[10], char b[10], char c[10])
{
	inicializar();
	strcpy(nombre,a);
	strcpy(apellidos.primer_apellido,b);
	strcpy(apellidos.segundo_apellido,c);
}

persona::persona(int n, char a[10], char b[10], char c[10])
{
	inicializar();
	DNI=n;
	strcpy(nombre,a);
	strcpy(apellidos.primer_apellido,b);
	strcpy(apellidos.segundo_apellido,c);
}

persona::persona(char a[10], char b[10], char c[10], int n, int fd, int fm, int fa, char na[8], char pais[30])
{
	inicializar();
	strcpy(nombre,a);
	strcpy(apellidos.primer_apellido,b);
	strcpy(apellidos.segundo_apellido,c);
	DNI=n;
	fecha_de_nacimiento.dia=fd;
	fecha_de_nacimiento.mes=fm;
	fecha_de_nacimiento.ano=fa;
	strcpy(lugar_de_nacimiento,na);
	strcpy(pais_de_nacimiento,pais);
}

void persona::inicializar()
{
	memset(nombre,0,10);
	memset(apellidos.primer_apellido,0,10);
	memset(apellidos.segundo_apellido,0,10);
	fecha_de_nacimiento.dia=0;
	fecha_de_nacimiento.mes=0;
	fecha_de_nacimiento.ano=0;
	memset(lugar_de_nacimiento,0,8);
	memset(pais_de_nacimiento,0,30);
	DNI=0;
}

void persona::imprimir()
{
	cout<<"Nombre: "<<nombre<<endl;
	cout<<"Primer apellido: "<<apellidos.primer_apellido<<endl;
	cout<<"Segundo apellido: "<< apellidos.segundo_apellido<<endl;
	cout<<"Fecha de nacimiento: "<<fecha_de_nacimiento.dia<<":";
	cout<<fecha_de_nacimiento.mes<<":"<<fecha_de_nacimiento.ano<<endl;
	cout<<"lugar de nacimiento: "<<lugar_de_nacimiento<<endl;
	cout<<"DNI: "<<DNI<<endl;
}

persona::~persona()
{
	cout<<"Descanse en paz"<<fecha_de_nacimiento.dia<<":";
	cout<<fecha_de_nacimiento.mes<<":"<<fecha_de_nacimiento.ano<<endl;
}

int main()
{
	persona Personaje;
	persona Personaje2(1234567890);
	persona Personaje3("jesus","otero","seoane");
	persona Personaje4(1835462079,"victor","gonzalez","lopez");
	persona Personaje5("ruben","rubinos","fernandez",456321789,6,9,1990,"lugo","espana");
	persona Personaje6("ana","lopez","otero");
	persona Personaje7(163254150,"hugo","ferreiro","peinado");
	persona Personaje8("nombre","apellido","apellido",2987654321,00,00,0000,"lugar","pais");
	persona Personaje9("Manolo","gomez","lavado");
	persona Personaje10("Anton","detodos","lossantos");

	Personaje.imprimir();
	Personaje2.imprimir();
	Personaje3.imprimir();
	Personaje4.imprimir();
	Personaje5.imprimir();
	Personaje6.imprimir();
	Personaje7.imprimir();
	Personaje8.imprimir();
	Personaje9.imprimir();
	Personaje10.imprimir();

}