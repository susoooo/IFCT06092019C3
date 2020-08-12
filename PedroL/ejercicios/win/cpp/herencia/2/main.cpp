#include <iostream>
#include <vector>
#include <errno.h>
using namespace std;

class App {
	protected:
	Menu menu;
	Archivo archivo;
};

class LocalComercial {
	protected:
	string direccion;
	float metroscuadr;
	float preciomc;
	
	public:
	LocalComercial();
	LocalComercial(string direccion, float metroscuadr, float preciomc) {
		this->direccion = direccion;
		this->metroscuadr = metroscuadr;
		this->preciomc = preciomc;
	}
	
	string get_direccion() { return direccion; }
	float get_metroscuadr() { return metroscuadr; }
	float get_preciomc() { return preciomc; }
};

class Tienda : public LocalComercial {
	protected:
	float metrosfach;
	
	public:
	Tienda();
	Tienda(string direccion, float metroscuadr, float preciomc, float metrosfach) : LocalComercial(direccion, metroscuadr, preciomc) {
		this->metrosfach = metrosfach;
	}
	
	float get_metrosfach() { return metrosfach; }
};

class Hosteleria : public LocalComercial {
	protected:
	time_t tiempabierto;
	
	public:
	Hosteleria();
	Hosteleria(string direccion, float metroscuadr, float preciomc, time_t tiempabierto) : LocalComercial(direccion, metroscuadr, preciomc) {
		this->tiempabierto = tiempabierto;
	}
	
	time_t get_tiempabierto() { return tiempabierto; }
};

class Ropa : public Tienda {
	protected:
	bool probadores, aseos;
	
	public:
	Ropa();
	Ropa(string direccion, float metroscuadr, float preciomc, float metrosfach, bool probadores, bool aseos) : Tienda(direccion, metroscuadr, preciomc, metrosfach) {
		this->probadores = probadores;
		this->aseos = aseos;
	}
	
	bool get_probadores() { return probadores; }
	bool get_aseos() { return aseos; }
};

class Comida : public Tienda {
	protected:
	int liniales, cajas;
	
	public:
	Comida();
	Comida(string direccion, float metroscuadr, float preciomc, float metrosfach, int liniales, int cajas) : Tienda(direccion, metroscuadr, preciomc, metrosfach) {
		this->liniales = liniales;
		this->cajas = cajas;
	}
	
	int get_liniales() { return liniales; }
	int get_cajas() { return cajas; }
};

class Ferreteria final : public Tienda {
	protected:
	float almacenmc;
	
	public:
	Ferreteria();
	Ferreteria(string direccion, float metroscuadr, float preciomc, float metrosfach, float almacenmc) : Tienda(direccion, metroscuadr, preciomc, metrosfach)  {
		this->almacenmc = almacenmc;
	}
	
	float get_almacenmc() { return almacenmc; }
};

class Drogueria final : public Tienda {
	protected:
	bool biohazard;
	
	public:
	Drogueria();
	Drogueria(string direccion, float metroscuadr, float preciomc, float metrosfach, bool biohazard) : Tienda(direccion, metroscuadr, preciomc, metrosfach)  {
		this->biohazard = biohazard;
	}
	
	bool get_biohazard() { return biohazard; }
};

class Bar final : public Hosteleria {
	protected:
	int barras;
	
	public:
	Bar();
	Bar(string direccion, float metroscuadr, float preciomc, time_t tiempabierto, int barras) : Hosteleria(direccion, metroscuadr, preciomc, tiempabierto) {
		this->barras = barras;
	}
	
	int get_barras() { return barras; }
};

class Restaurante final : public Hosteleria {
	protected:
	int mesas;
	float comedormc, cocinamc;
	
	public:
	Restaurante();
	Restaurante(string direccion, float metroscuadr, float preciomc, time_t tiempabierto, int mesas, float comedormc, float cocinamc) : Hosteleria(direccion, metroscuadr, preciomc, tiempabierto) {
		this->mesas = mesas;
		this->comedormc = comedormc;
		this->cocinamc = cocinamc;
	}
	
	int get_mesas() { return mesas; }
	float get_comedormc() { return comedormc; }
	float get_cocinamc() { return cocinamc; }
};

class ParaLlevar final : public Hosteleria {
	protected:
	bool cocina, planevac;
	
	public:
	ParaLlevar();
	ParaLlevar(string direccion, float metroscuadr, float preciomc, time_t tiempabierto, bool cocina, bool planevac) : Hosteleria(direccion, metroscuadr, preciomc, tiempabierto) {
		this->cocina = cocina;
		this->planevac = planevac;
	}
	
	bool get_cocina() { return cocina; }
	bool get_planevac() { return planevac; }
};

class Camiseria final : public Ropa {
	protected:
	bool amedida;
	
	public:
	Camiseria();
	Camiseria(string direccion, float metroscuadr, float preciomc, float metrosfach, bool probadores, bool aseos, bool amedida) : Ropa(direccion, metroscuadr, preciomc, metrosfach, probadores, aseos) {
		this->amedida = amedida;
	}
	
	bool get_amedida() { return amedida; }
};

class Merceria final : public Ropa {
	protected:
	int mostradores;
	
	public:
	Merceria();
	Merceria(string direccion, float metroscuadr, float preciomc, float metrosfach, bool probadores, bool aseos, int mostradores) : Ropa(direccion, metroscuadr, preciomc, metrosfach, probadores, aseos) {
		this->mostradores = mostradores;
	}
	
	int get_mostradores() { return mostradores; }
};

class Sombreria final : public Ropa {
	protected:
	int expositores;
	
	public:
	Sombreria();
	Sombreria(string direccion, float metroscuadr, float preciomc, float metrosfach, bool probadores, bool aseos, int expositores) : Ropa(direccion, metroscuadr, preciomc, metrosfach, probadores, aseos) {
		this->expositores = expositores;
	}
	
	int get_expositores() { return expositores; }
};

class Fruteria final : public Comida {
	protected:
	bool frigorifica;
	
	public:
	Fruteria();
	Fruteria(string direccion, float metroscuadr, float preciomc, float metrosfach, int liniales, int cajas, bool frigorifica) : Comida(direccion, metroscuadr, preciomc, metrosfach, liniales, cajas) {
		this->frigorifica = frigorifica;
	}
	
	bool get_frigorifica() { return frigorifica; }
};

class Carniceria final : public Comida {
	protected:
	int frigorificos;
	
	public:
	Carniceria();
	Carniceria(string direccion, float metroscuadr, float preciomc, float metrosfach, int liniales, int cajas, int frigorificos) : Comida(direccion, metroscuadr, preciomc, metrosfach, liniales, cajas) {
		this->frigorificos = frigorificos;
	}
	
	int get_frigorificos() { return frigorificos; }
};

class Panaderia final : public Comida {
	protected:
	bool cafeteria;
	int armarios;
	
	public:
	Panaderia();
	Panaderia(string direccion, float metroscuadr, float preciomc, float metrosfach, int liniales, int cajas, int armarios) : Comida(direccion, metroscuadr, preciomc, metrosfach, liniales, cajas) {
		this->cafeteria = cafeteria;
		this->armarios = armarios;
	}
	
	bool get_cafeteria() { return cafeteria; }
	int get_armarios() { return armarios; }
};

class Archivo {
	std::vector<Camiseria>vCamiserias;
	std::vector<Merceria>vMercerias;
	std::vector<Sombreria>vSombrerias;
	std::vector<Fruteria>vFruterias;
	std::vector<Carniceria>vCarnicerias;
	std::vector<Panaderia>vPanaderias;
	std::vector<Ferreteria>vFerreterias;
	std::vector<Drogueria>vDroguerias;
	std::vector<Bar>vBares;
	std::vector<Restaurante>vRestaurantes;
	std::vector<ParaLlevar>vParaLlevar;
	
	std::string labels[10] = {
		"Camiseria",
		"Merceria",
		"Sombreria"
		"Fruteria",
		"Carniceria",
		"Panaderia",
		"Ferreteria",
		"Drogueria",
		"Bares",
		"Restaurantes",
		"Para LLevar",
	};
	enum Nlabels {
		CAMISERIA,
		MERCERIA,
		SOMBRERIA,
		FRUTERIA,
		CARNICERIA,
		PANADERIA,
		FERRETERIA,
		DROGUERIA,
		BARES,
		RESTUARIANTES,
		PARALLEVAR,
	};
	
	public:
	void inter_anadir () {
		int i, op;
		string direccion;
		float metroscuadr;
		float preciomc;
		i = 0;
		
		for (auto x: labels) {
			cout << i++ << ". " << x << endl;
		}
		cout << endl;
		
		do {
			cin >> op;
			
			i = 0;
			if (op > PARALLEVAR || op <= 0) {
				cout << "Opcion invalida" << endl;
				i = 1;
			}
		} while (i);
		
		switch (op) {
			case 0:
			//Comida(string direccion, float metroscuadr, float preciomc, float metrosfach, int liniales, int cajas)
			Camiseria * camiseria = new Camiseria(in_str("Direccion"), in_float("Metros cuadrados"), in_float("Precio por metro cuadrado"), in_float("Metros de fachada"), in_bool("Probadores?"), in_bool("Aseos?"), in_bool("A medida?"));
			break;
			/* ... */
		}
	}
	
	std::string in_str(const char * const str) {
		std::string res;
		
		cout << str << ":" << endl;
		cin >> res;
		
		return res;
	}
	time_t in_time(const char * const str) {
		time_t res;
		
		return res;
	}
	bool in_bool(const char * const str) {
		bool res;
		char op;
		
		do {
			cout << str << " [y/n]:" << endl;
			cin >> op;
			
			switch (op) {
				case 'y':
				res = true;
				break;
				
				case 'n':
				res = false;
				break;
				
				default:
				cout << "escriba 'y' o 'n'" << endl;
			}
		} while (op != 'y' || op != 'n');
		
		return res;
	}
	float in_float(const char * const str) {
		float res;
		
		cout << str << ":" << endl;
		cin >> res;
		
		return res;
	}
	int in_int(const char * const str) {
		int res;
		
		cout << str << ":" << endl;
		cin >> res;
		
		return res;
	}
};

class Menu : App {
	public:
	void menu_principal() {
		int op;
		cout << "1. Añadir" << endl
		     << "2. Listar" << endl
			 << "3. Eliminar" << endl;
		cin >> op;
		
		switch (op) {
			case 1:
			archivo.inter_anadir();
			break;
		} 
	}
};

int main() {
	return errno;
}