#include <iostream>
#include <ctime>

using namespace std;



class Persona 
{
	string nombre, papell, sapell;
	int dni;
	string ciudnacim, paisnacim;
	struct tm fechanacim;
	int edad;
		
	public:
	Persona() {}
	Persona(int);
	Persona(string, string, string);
	Persona(string, string, string, int);
	Persona(string, string, string, int, string, string, int dia, int mes, int anyo);
	
	void print_data(void);
	
	~Persona()
	{
		cout << nombre << ": Adios..." << endl;
		cout << "Descanse en paz, edad: " << edad << endl;
	}
};

Persona::Persona(int ndni)
{
	dni = ndni;
}

Persona::Persona(string nnombre, string npapell, string nsapell)
{
	nombre = nnombre;
	papell = npapell;
	sapell = nsapell;
}

Persona::Persona(string nnombre, string npapell, string nsapell, int ndni)
{
	Persona(nnombre, npapell, nsapell);
	dni = ndni;
}

Persona::Persona(string nnombre, string npapell, string nsapell, int ndni, string nciudnacim, string npaisnacim, int dia, int mes, int anyo)
{
	time_t now;
	struct tm *ndate;
		
	time(&now);
	ndate = localtime(&now);
	
	Persona(nnombre, npapell, nsapell, ndni);
	ciudnacim = nciudnacim;
	paisnacim = npaisnacim;
	
	fechanacim.tm_mday = dia;
	fechanacim.tm_mon = mes;
	fechanacim.tm_year = anyo;
	mktime(&fechanacim);
	
	edad = ndate->tm_year - fechanacim.tm_year;
}

void Persona::print_data(void)
{
	cout << "Nombre: " << nombre << endl;
	cout << "Apellidos: " << papell << " " << sapell << endl;
	cout << "DNI: " << dni << endl;
	cout << "Lugar de nacimiento :" << ciudnacim << ", " << paisnacim << endl;
	cout << "Fecha de nacimiento: " << fechanacim.tm_mday << '/' << fechanacim.tm_mon << '/' << fechanacim.tm_year << endl;
}



int
main()
{
	Persona alumno[10];
	string nombre, papell, sapell, ciudnacim, paisnacim;
	int dni, dia, mes, anyo;
	
	for (int i = 0 ; i < 10 ; i++)
	{
		cout << "Alumno " << i << endl;
		
		cout << "\tNombre: "; cin >> nombre;
		cout << "\tPrimer apellido: "; cin >> papell;
		cout << "\tSegundo apellido: "; cin >> sapell;
		
		cout << "\tDNI: "; cin >> dni;
		
		cout << "\tCiudad de nacimiento: "; cin >> ciudnacim;
		cout << "\tPais de nacimiento: "; cin >> paisnacim;
		
		cout << "\tDia de nacimiento: "; cin >> dia;
		cout << "\tMes de nacimiento: "; cin >> mes;
		cout << "\tAño de nacimiento: "; cin >> anyo;
		
		alumno[i] = Persona(nombre, papell, sapell, dni, ciudnacim, paisnacim, dia, mes, anyo);
		
		cout << endl;
	}

	return 0;
}