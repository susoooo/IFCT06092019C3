#include <iostream>
#include <cstring>
#include <stdlib.h>
using namespace std;

class persona
{
	protected:
	
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

class asalariado : public persona
{
	protected:
	
	int salario_neto;
	int salario_mes;
	int retencion;
	
	public:
	
	asalariado(char a[10], char b[10], char c[10]);
	peticion_de_salario();
	mostrar_salario();
	~asalariado();
	void inicializar();
};

class obrero:public asalariado
{
	private:
	
	char cargo[20];
	
	public:
	
	obrero(char a[10],char b[10],char[10]);
	peticion_de_cargo();
	mostrar_cargo();
	~obrero();
	void inicializar();
};

class medico:public asalariado
{
	private:
	
	int pacientes;
	int enfermos;

	public:
	
	medico(char a[10],char b[10],char[10]);
	peticion_de_numero_pacientes();
	mostrar_numero_pacientes();
	~medico();
	void inicializar();
};

persona::persona(char a[10], char b[10], char c[10])
{
	inicializar();
	strcpy(nombre,a);
	strcpy(apellidos.primer_apellido,b);
	strcpy(apellidos.segundo_apellido,c);
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

persona::~persona()
{
	cout<<"Descanse en paz"<<fecha_de_nacimiento.dia<<":";
	cout<<fecha_de_nacimiento.mes<<":"<<fecha_de_nacimiento.ano<<endl;
}

asalariado::asalariado(char a[10], char b[10], char c[10]):persona(a,b,c)
{
	inicializar();
}

void asalariado::inicializar()
{
	salario_neto=0;
	salario_mes=0;
	retencion=0;
}

asalariado::peticion_de_salario()
{
	cout << "salario_neto" << endl;
	cin >> salario_neto;
	cout << "salario_mes" << endl;
	cin >> salario_mes;
	cout << "retencion" << endl;
	cin >> retencion;
}

asalariado::mostrar_salario()
{
	cout<<salario_neto<<endl;
	cout<<salario_mes<<endl;
	cout<<retencion<<endl;
}

asalariado::~asalariado()
{
	salario_neto=0;
	salario_mes=0;
	retencion=0;
}

obrero::obrero(char a[10],char b[10],char c[10]):asalariado(a,b,c)
{
	inicializar();
}

void obrero::inicializar()
{
	memset(cargo,0,20);
}

obrero::peticion_de_cargo()
{
	cout<<"Cual es su cargo"<<endl;
	cin>>cargo;
}

obrero::mostrar_cargo()
{
	cout<<"Su cargo es: "<<cargo<<endl;
}

obrero::~obrero()
{
	memset(cargo,0,20);
}

medico::medico(char a[10],char b[10],char c[10]):asalariado(a,b,c)
{
	inicializar();
}

medico::peticion_de_numero_pacientes()
{
	cout<<"Indique el numero de pacientes"<<endl;
	cin>>pacientes;
	cout<<"Indique el numero de pacientes enfermos"<<endl;
	cin>>enfermos;
}

medico::mostrar_numero_pacientes()
{
	cout<<"El numero de pacientes es: "<<pacientes<<endl;
	cout<<"El numero de pacientes enfermos es: "<<enfermos<<endl;
}

medico::~medico()
{
	pacientes=0;
	enfermos=0;
}

void medico::inicializar()
{
	pacientes=0;
	enfermos=0;
}

struct
{
	char nombre[10];
	char primer_apellido[10];
	char segundo_apellido[10];
	char empleo[7];
}D_empleado;

inicializar_struct()
{
	memset(D_empleado.nombre,0,10);
	memset(D_empleado.primer_apellido,0,10);
	memset(D_empleado.segundo_apellido,0,10);
	memset(D_empleado.empleo,0,7);
}
Datos()
{

	cout<<"Nombre"<<endl;
	cin>>D_empleado.nombre;
	cout<<"Primer apellido"<<endl;
	cin>>D_empleado.primer_apellido;
	cout<<"Segundo apellido"<<endl;
	cin>>D_empleado.segundo_apellido;
	cout<<"Introducca su empleo"<<endl;
	cin>>D_empleado.empleo;
}

int main()
{
	char empleoo[7]={111,98,114,101,114,111,0};//inicializado obreo
	char empleom[7]={109,101,100,105,99,111,0};//inicializado medico
	
	inicializar_struct();
	Datos();
	
	
	if(strcmp(D_empleado.empleo,empleoo)==0)
	{
		obrero Personaje3(D_empleado.nombre,D_empleado.primer_apellido,D_empleado.segundo_apellido);
		Personaje3.peticion_de_cargo();
		Personaje3.mostrar_cargo();
		Personaje3.peticion_de_salario();
		Personaje3.mostrar_salario();
	}
	else
	{
		if(strcmp(D_empleado.empleo,empleom)==0)
		{
			medico Personaje3(D_empleado.nombre,D_empleado.primer_apellido,D_empleado.segundo_apellido);
			Personaje3.peticion_de_numero_pacientes();
			Personaje3.mostrar_numero_pacientes();
			Personaje3.peticion_de_salario();
			Personaje3.mostrar_salario();		
		}
		else
		{ //Default
			asalariado Personaje3(D_empleado.nombre,D_empleado.primer_apellido,D_empleado.segundo_apellido);
			Personaje3.peticion_de_salario();
			Personaje3.mostrar_salario();
		}
	}
}