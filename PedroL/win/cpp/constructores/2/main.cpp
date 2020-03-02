#include <iostream>
#include <ctime>

using namespace std;



class Persona {
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
	Persona(string, string, string, int, string, string, int day, int mon, int year);
	
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
	Persona(ndni);
}

Persona::Persona(string nnombre, string npapell, string nsapell, int ndni, string nciudnacim, string npaisnacim, int day, int mon, int year)
{
	time_t now;
	struct tm *ndate;
		
	time(&now);
	ndate = localtime(&now);
	
	Persona(nnombre, npapell, nsapell, ndni);
	ciudnacim = nciudnacim;
	paisnacim = npaisnacim;
	
	fechanacim.tm_mday = day;
	fechanacim.tm_mon = mon;
	fechanacim.tm_year = year;
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
	
	

	return 0;
}