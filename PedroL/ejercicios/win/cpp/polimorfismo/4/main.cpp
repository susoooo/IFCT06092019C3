#include <iostream>
#include <vector>
using std::cout;
using std::cin;
using std::endl;

class Empleado {
	protected:
	std::string nombre, apellido, direccion;
	int dni, anyosantig, telefono;
	float salario;
	Empleado * supervisor;
	
	public:
	Empleado() {}
	Empleado(std::string nunombre, std::string nuapell, std::string nudir, int nudni, int nuanyosan, int nutelef, float nusalario) {
		nombre = nunombre;
		apellido = nuapell;
		direccion = nudir;
		dni = nudni;
		anyosantig = nuanyosan;
		telefono = nutelef;
		salario = nusalario;
	}
	std::string get_nombre()    { return nombre; }
	std::string get_apellido()  { return apellido; }
	std::string get_direccion() { return direccion; }
	int get_dni(int nudni)      { return dni; }
	int get_anyosantig()        { return anyosantig; }
	int get_telefono()          { return telefono; }
	float get_salario()         { return salario; }
	Empleado* get_supervisor()  { return supervisor; }
	
	void set_nombre(std::string nunombre)    { nombre = nunombre; }
	void set_apellido(std::string nuapell)   { apellido = nuapell;}
	void set_direccion(std::string nudir)    { direccion = nudir; }
	void set_dni(int nudni)                  { dni = nudni; }
	void set_anyosantig(int nuanyoan)        { anyosantig = nuanyoan; }
	void set_telefono(int nutelef)           { telefono = nutelef; }
	void set_supervisor(Empleado * nusuperv) { supervisor = nusuperv; }
	
	virtual float aument_salario() = 0;
	
	void imprimir() {
		cout << "Empleado " << nombre << ' ' << apellido << endl
		     << "DNI: " << dni << endl
		     << "Telefono: " << telefono << endl
		     << "Direccion: " << direccion << endl << endl
		     << "Salario: " << salario << endl
		     << "Años de antigüedad: " << anyosantig << endl;
	}
};

class Secretario : public Empleado {
	protected:
	std::string despacho;
	int numfax;
	
	public:
	Secretario() {}
	Secretario(int nusalario) { salario = nusalario; }
	Secretario(std::string nunombre, std::string nuapell, std::string nudir, int nudni, int nuanyosan, int nutelef, float nusalario, std::string nudesp, int nunumfax) : Empleado(nunombre, nuapell, nudir, nudni, nuanyosan, nutelef, nusalario) {
		despacho = nudesp;
		numfax = nunumfax;
	}
	
	float aument_salario() { return (salario * 1.05); }
	
	void imprimir() {
		Empleado::imprimir();
		cout << "Despacho: " << despacho << endl
		     << "Numero de fax: " << numfax << endl;
	}
};

class Vendedor : public Empleado {
	protected:
	struct Coche {
		std::string matricula, marca, modelo;
	} coche;
	int telefmovil;
	std::string areaventas;
	std::vector<std::string> listaclientes;
	float porcencomision;
	
	public:
	Vendedor() {}
	Vendedor(int nusalario) { salario = nusalario; }
	Vendedor(std::string nunombre, std::string nuapell, std::string nudir, int nudni, int nuanyosan, int nutelef, float nusalario, Coche nucoche, int nutelfmov, std::string nuareaven, std::vector<std::string> nulistaclien, float nuporcencom) : Empleado(nunombre, nuapell, nudir, nudni, nuanyosan, nutelef, nusalario) {
		coche = nucoche;
		telefmovil = nutelfmov;
		areaventas = nuareaven;
		listaclientes = nulistaclien;
		porcencomision = nuporcencom;
	}
	
	void alta_cliente(std::string nuclien) { listaclientes.push_back(nuclien); }
	void baja_cliente(std::vector<std::string>::const_iterator i) { listaclientes.erase(i); }
	
	float aument_salario() { return (salario * 1.10); }
	
	void imprimir() {
		Empleado::imprimir();
		cout << "Coche: " << coche.marca << coche.modelo << coche.matricula << endl
		     << "Telefono movil: " << telefmovil << endl
		     << "Area de ventas: " << areaventas << endl
			 << "Porcentaje de comision: " << porcencomision << endl
		     << "Lista de clientes:" << endl;
		for (auto&& x: listaclientes) {
			cout << x << endl;
		}
	}
};

class JefeDeZona : public Empleado {
	protected:
	struct Coche {
		std::string matricula, marca, modelo;
	} coche;
	std::string despacho;
	Secretario * secretario;
	std::vector<Vendedor*> listavendedores;
	
	public:
	JefeDeZona() {}
	JefeDeZona(int nusalario) { salario = nusalario; }
	JefeDeZona(std::string nunombre, std::string nuapell, std::string nudir, int nudni, int nuanyosan, int nutelef, float nusalario, Coche nucoche, std::string nudesp, Secretario * nusecretario, std::vector<Vendedor*> nulistven) : Empleado(nunombre, nuapell, nudir, nudni, nuanyosan, nutelef, nusalario) {
		coche = nucoche;
		despacho = nudesp;
		secretario = nusecretario;
		listavendedores = nulistven; 
	}
	
	void set_secretario(Secretario * nusecretario) { secretario = nusecretario; }
	void set_coche(Coche nucoche) { coche = nucoche; }
	
	void alta_vendedor(Vendedor * nuvend) { listavendedores.push_back(nuvend); }
	void baja_vendedor(std::vector<Vendedor*>::const_iterator i) { listavendedores.erase(i); }
	
	float aument_salario() { return (salario * 1.20); }
	
	void imprimir() {
		Empleado::imprimir();
		cout << "Coche: " << coche.marca << coche.modelo << coche.matricula << endl
		     << "Despacho: " << despacho << endl
		     << "Secretario: " << secretario->get_nombre() << endl
		     << "Lista de clientes:" << endl;
		for (auto&& x: listavendedores) {
			cout << x << endl;
		}
	}
};

int main() {
	Secretario secretario;
	Vendedor vendedor;
	JefeDeZona jefedezona;
	
	cout << secretario.aument_salario() << endl
	     << vendedor.aument_salario() << endl
	     << jefedezona.aument_salario() << endl;
	
	return 0;
}