#include <iostream>
#include <vector>
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

int main() {
	Tecnologias * tecnologias;
	Ciencias * ciencias;
	Letras * letras;
	Musica * musica;
	std::string nombre;
	int id;
	float notas[10];
	
	cout << "Tecnologias" << endl;
	cout << "Nombre:" << endl;
	cin >> nombre;
	cout << "ID" << endl;
	cin >> id;
	for (int i = 0; i < 5; i++) {
		cout << "Nota " << i << endl;
		cin >> notas[i];
	}
	tecnologias = new Tecnologias(nombre, id, notas);
	
	cout << "Ciencias" << endl;
	cout << "Nombre:" << endl;
	cin >> nombre;
	cout << "ID" << endl;
	cin >> id;
	for (int i = 0; i < 5; i++) {
		cout << "Nota " << i << endl;
		cin >> notas[i];
	}
	ciencias = new Ciencias(nombre, id, notas);
	
	cout << "Letras" << endl;
	cout << "Nombre:" << endl;
	cin >> nombre;
	cout << "ID" << endl;
	cin >> id;
	for (int i = 0; i < 10; i++) {
		cout << "Nota " << i << endl;
		cin >> notas[i];
	}
	letras = new Letras(nombre, id, notas);
	
	cout << "Musica" << endl;
	cout << "Nombre:" << endl;
	cin >> nombre;
	cout << "ID" << endl;
	cin >> id;
	cout << "Nota" << endl;
	cin >> notas[0];
	musica = new Musica(nombre, id, notas[0]);
} 