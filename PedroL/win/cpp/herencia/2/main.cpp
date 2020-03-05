#include <iostream>
#include <vector>
#include <errno.h>
using namespace std;


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
	Tienda(float metrosfach) {
		this->metrosfach = metrosfach;
	}
	
	float get_metrosfach() { return metrosfach; }
};


class Hosteleria : public LocalComercial {
	protected:
	time_t tiempabierto;
	
	public:
	Hosteleria();
	Hosteleria(time_t tiempabierto) {
		this->tiempabierto = tiempabierto;
	}
	
	time_t get_tiempabierto() { return tiempabierto; }
};


class Ropa : public Tienda {
	protected:
	bool probadores, aseos;
	
	public:
	Ropa();
	Ropa(bool probadores, bool aseos) {
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
	Comida(int liniales, int cajas) {
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
	Ferreteria(float almacenmc) {
		this->almacenmc = almacenmc;
	}
	
	float get_almacenmc() { return almacenmc; }
};


class Drogueria final : public Tienda {
	protected:
	bool biohazard;
	
	public:
	Drogueria();
	Drogueria(bool biohazard) {
		this->biohazard = biohazard;
	}
	
	bool get_biohazard() { return biohazard; }
};


class Bar final : public Hosteleria {
	protected:
	int barras;
	
	public:
	Bar();
	Bar(int barras) {
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
	Restaurante(int mesas, float comedormc, float cocinamc) {
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
	ParaLlevar(bool cocina, bool planevac) {
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
	Camiseria(bool amedida) {
		this->amedida = amedida;
	}
	
	bool get_amedida() { return amedida; }
};


class Merceria final : public Ropa {
	protected:
	int mostradores;
	
	public:
	Merceria();
	Merceria(int mostradores) {
		this->mostradores = mostradores;
	}
	
	int get_mostradores() { return mostradores; }
};


class Sombreria final : public Ropa {
	protected:
	int expositores;
	
	public:
	Sombreria();
	Sombreria(int expositores) {
		this->expositores = expositores;
	}
	
	int get_expositores() { return expositores; }
};


class Fruteria final : public Comida {
	protected:
	bool frigorifica;
	
	public:
	Fruteria();
	Fruteria(bool frigorifica) {
		this->frigorifica = frigorifica;
	}
	
	bool get_frigorifica() { return frigorifica; }
};


class Carniceria final : public Comida {
	protected:
	int frigorificos;
	
	public:
	Carniceria();
	Carniceria(int frigorificos) {
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
	Panaderia(bool cafeteria, int armarios) {
		this->cafeteria = cafeteria;
		this->armarios = armarios;
	}
	
	bool get_cafeteria() { return cafeteria; }
	int get_armarios() { return armarios; }
};

class Menu {
	
	public:
	void menu_princ() {
		int op;
		
		cout << "Elija funcion" << endl;
		cin >> op;
		
		switch (op) {
			case 0:
			/* ... */
			break;
			
			default:
		}
	}
};

class MenuAnadir : public Menu {
	string direccion;
	float metroscuadr;
	float preciomc;
	float metrosfach;
	time_t tiempabierto;
	bool probadores, aseos;
	int liniales, cajas;
	
	enum Local {
		CAMISERIA,
		MERCERIA,
		SOMBRERIA,
		FRUTERIA,
		CARNICERIA,
		PANADERIA,
		FERRETERIA,
		DROGUERIA,
		BAR,
		RESTAURANTE,
		PARALLEVAR,
	};
	int op;
		
	public:
	void mostrar_menu() {
		cout << "Elija tienda";
		cin >> op;
		
		datos_clase_local();
		
		if (op <= 7) {
			datos_clase_tienda();
		} else {
			datos_clase_hosteleria();
		}
		
		if (op <= 2) datos_clase_ropa();
		if (op <= 5 && op >= 3) datos_clase_comida();
		
		switch (op) {
			case 0:
			/* ... */
			break;
			
			default:
		}
	}
	
	void datos_clase_local() {
		cin >> direccion;
		cin >> metroscuadr;
		cin >> preciomc;
	}
	
	void datos_clase_tienda() {
		cin >> metrosfach;
	}
	
	void datos_clase_hosteleria() {
		cin >> tiempabierto;
	}
	
	void datos_clase_ropa() {
		cin >> probadores;
		cin >> aseos;
	}
	
	void datos_clase_comida() {
		cin >> liniales;
		cin >> cajas;
	}
};


int main() {
	/* ... */
	
	return errno;
}