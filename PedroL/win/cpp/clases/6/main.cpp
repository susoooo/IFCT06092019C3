#include <iostream>
#include <ctime>

using namespace std;

class Persona {
	string nombre, apellido[2];
	tm fechanacim;
	
	public:
	void set_nombre(string);
	void set_apell(int, string);
	void set_fechanacim(int, int, int);
	int get_edad(void);
};

void
Persona::set_nombre(string nnom)
{
	nombre = nnom;
}

void
Persona::set_apell(int i, string napell)
{
	apellido[i] = napell;
}

void
Persona::set_fechanacim(int dia, int mes, int anyo)
{
	fechanacim.tm_mday = dia;
	fechanacim.tm_mon  = mes - 1;
	fechanacim.tm_year = anyo - 1900;
	
	mktime(&fechanacim);
}

int
Persona::get_edad(void)
{
	time_t now, dif;
	tm *edad;
	now  = time(0);
	dif  = difftime(now, mktime(&fechanacim));
	edad = localtime(&dif);
	
	return edad->tm_year;
}

int
main(void)
{
	Persona persona;
	string bufs;
	int dia, mes, anyo;
	
	cout << "Primer nombre: " << endl;
	cin >> bufs;
	persona.set_nombre(bufs);
	
	cout << "Primer apellido: " << endl;
	cin >> bufs;
	persona.set_apell(0, bufs);
	cout << "Segundo apellido: " << endl;
	cin >> bufs;
	persona.set_apell(1, bufs);
	
	cout << "Fecha de nacimiento..." << endl;
	cout << "Dia: " << endl;
	cin >> dia;
	cout << "Mes: " << endl;
	cin >> mes;
	cout << "Año: " << endl;
	cin >> anyo;
	persona.set_fechanacim(dia, mes, anyo);
	
	cout << endl << "Edad: " << persona.get_edad() << endl;
	
	return 0;
}