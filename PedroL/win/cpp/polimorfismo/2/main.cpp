#include <iostream>
#include <vector>
#include <errno.h>
using std::cout;
using std::cin;
using std::endl;

class Asignatura {
	protected:
	std::string nombre;
	int id;
	
	public:
	Asignatura(std::string nombre, int id) {
		this->nombre = nombre;
		this->id = id;
	}
	
	float get_nota_media() {
		return 10.0;
	}
};

class Ciencias : Asignatura {
	protected:
	float notas[5];
	
	public:
	Ciencias(std::string nombre, int id, float * notas) : Asignatura(nombre, id) {
		for (int i = 0; i < 5; i++) {
			this->notas[i] = notas[i];
		}
	}
	
	float get_nota_media() {
		float res = 0.0;
		
		for (int i = 0; i < 5; i++) {
			res += notas[i];
		}
		
		return (res / 5);
	}
};

class Letras : Asignatura {
	float notas[10];
	
	public:
	Letras(std::string nombre, int id, float * notas) : Asignatura(nombre, id) {
		for (int i = 0; i < 10; i++) {
			this->notas[i] = notas[i];
		}
	}
	
	float get_nota_media() {
		float res = 0.0;
		
		for (int i = 0; i < 9; i++) {
			res += notas[i];
		}
		res = (res / 9) * 5;
		res += (notas[9] * 0.5);
		
		return res;
	}
};

class Musica : Asignatura {
	float nota;
	
	public:
	Musica(std::string nombre, int id, float nota) : Asignatura(nombre, id) {
		this->nota = nota;
	}
	
	float get_nota_media() {
		return nota;
	}
};

class Tecnologias : Ciencias {
	float notasPrac[5];
	
	public:
	Tecnologias(std::string nombre, int id, float * notas) : Ciencias(nombre, id, notas) {
	}
	
	float get_nota_media() {
		float mediaPrac;
		mediaPrac = 0;
		
		for (int i = 0; i < 5; i++) {
			mediaPrac += notasPrac[i];
		}
		mediaPrac /= 5;
		
		return ( (mediaPrac * 0.3) + (Ciencias::get_nota_media() * 0.7) );
	}
};

class Arch {
	protected:
	std::vector<Tecnologias> v_asigntecn;
	std::vector<Ciencias> v_asigncien;
	std::vector<Letras> v_asignletr;
	std::vector<Musica> v_asignmusi;
};

class Gen : Arch {
	std::string names[4] = {
		"Tecnologias",
		"Ciencias",
		"Letras",
		"Musica",
	};
	
	public:
	void gen_asign(int num) {
		std::string nombre;
		int id;
		float notas[10];
		
		cout << names[num] << endl;
		cout << "Nombre:" << endl;
		cin >> nombre;
		cout << "ID" << endl;
		cin >> id;
		
		switch (num) {
			case 0:
			agr_notas(notas, 5);
			gen_tecn(nombre, id, notas);
			cout << v_asigntecn.at(0).get_nota_media();
			break;
			
			case 1:
			agr_notas(notas, 5);
			gen_cien(nombre, id, notas);
			break;
			
			case 2:
			agr_notas(notas, 10);
			gen_letr(nombre, id, notas);
			break;
			
			case 3:
			agr_notas(notas, 1);
			gen_musi(nombre, id, notas[0]);
			break;
		}
	}
	
	void agr_notas(float * notas, int cuen) {
		for (int i = 0; i < cuen; i++) {
			cout << "Nota " << i << endl;
			cin >> notas[i];
		}
	}
	
	/* EXAMPLE OF METHODS WORTH TEMPLATIZING, IN MY OPINION */
	
	void gen_tecn(std::string nombre, int id, float * notas) {
		Tecnologias * tecnologias = new Tecnologias(nombre, id, notas);
		v_asigntecn.push_back(std::move(*tecnologias));
	}
	
	void gen_cien(std::string nombre, int id, float * notas) {
		Ciencias * ciencias = new Ciencias(nombre, id, notas);
		v_asigncien.push_back(std::move(*ciencias));
	}
	
	void gen_letr(std::string nombre, int id, float * notas) {
		Letras * letras = new Letras(nombre, id, notas);
		v_asignletr.push_back(std::move(*letras));
	}
	
	void gen_musi(std::string nombre, int id, float notas) {
		Musica * musica = new Musica(nombre, id, notas);
		v_asignmusi.push_back(std::move(*musica));
	}
};

int main() {
	Gen gen;
	int op;
	
	cout << "Crear asignatura" << endl
	     << "[1]Tecnologias" << endl
	     << "[2]Ciencias" << endl
	     << "[3]Letras" << endl
	     << "[4]Musica" << endl;
	cin >> op;
	gen.gen_asign(op - 1);
	
	return errno;
 	//B^)<-<
} 