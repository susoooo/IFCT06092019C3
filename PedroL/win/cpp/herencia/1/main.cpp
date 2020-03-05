#include <ctime>
#include <iostream>
#include <errno.h>
using namespace std;


class Persona  {
	string nombre, papell, sapell;
	int dni;
	string ciudnacim, paisnacim;
	struct tm fechanacim;
	int edad;
		
	public:
	Persona() {}
	Persona(int ndni) { dni = ndni; }
	Persona(string, string, string);
	Persona(string, string, string, int);
	Persona(string, string, string, int, string, string, int dia, int mes, int anyo);
	
	void print_data(void);
	
	~Persona() {
		cout << nombre << ": Adios..." << endl;
		cout << "Descanse en paz, edad: " << edad << endl;
	}
};

Persona::Persona(string nnombre, string npapell, string nsapell) {
	nombre = nnombre;
	papell = npapell;
	sapell = nsapell;
}

Persona::Persona(string nnombre, string npapell, string nsapell, int ndni) {
	Persona(nnombre, npapell, nsapell);
	dni = ndni;
}

Persona::Persona(string nnombre, string npapell, string nsapell, int ndni, string nciudnacim, string npaisnacim, int dia, int mes, int anyo) {
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

void Persona::print_data(void) {
	cout << "Nombre: " << nombre << endl;
	cout << "Apellidos: " << papell << " " << sapell << endl;
	cout << "DNI: " << dni << endl;
	cout << "Lugar de nacimiento :" << ciudnacim << ", " << paisnacim << endl;
	cout << "Fecha de nacimiento: " << fechanacim.tm_mday << '/' << fechanacim.tm_mon << '/' << fechanacim.tm_year << endl;
}


class Asalariado : public Persona {
	protected:
	float sueldo, retenc;
	
	public:
	Asalariado();
	Asalariado(float nusueldo, float nuretenc) {
		set_sueldo(nusueldo);
		set_retenc(nuretenc);
	}
	void set_sueldo(float nusueldo) { sueldo = nusueldo; }
	void set_retenc(float nuretenc) { retenc = nuretenc; }
	float leer_sueldo() { return sueldo; }
	float leer_retenc() { return retenc; }
};


class Obrero : public Asalariado {
	string cargo;
	
	public:
	Obrero();
	Obrero(const char* nucargo) { set_cargo(nucargo); }
	void set_cargo(const char* nucargo) { cargo = nucargo; }
};


class Medico : public Asalariado {
	int numpacient;
	
	public:
	Medico();
	Medico(int nunumpac) { set_numpacient(nunumpac); }
	void set_numpacient(int nunumpac) { numpacient = nunumpac; }
};


int main() {
	Persona * pers1 = new Persona(34301414);
	Asalariado * asal1 = new Asalariado();
	Asalariado * asalv = new Asalariado[2]();
	Medico * doc = new Medico();
	
	return errno;
}