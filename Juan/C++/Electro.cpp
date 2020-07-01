#include <iostream>
#include <cstring>
using namespace std;

class Electro{
	
	// Constructores:
	public:
	Electro();
	~Electro();
	Electro(float p, float cons, float hor);
	
	void setPotencia(float p);
	void setConsumo_hora(float cons);
	void setHoras_on(float hor);
	float getPotencia();
	float getConsumo_hora();
	float getHoras_on();
	void Vaciar();
	void CalcularConsumo();

	protected:
	float potencia;
	float consumo_hora;
	float horas_on;
	
};


// Constructores:

Electro::Electro(){
	Vaciar();
	cout << "Constructor sin parámetros de Electro" << endl;
}

Electro::~Electro(){
	Vaciar();
	cout << "Soy el destructor del Electro" << endl;
}

Electro::Electro(float p, float cons, float hor){
	Vaciar();
	potencia=p;
	consumo_hora=cons;
	horas_on=hor;
}

// Métodos get y set:

void Electro::setPotencia(float p){
	potencia=p;
}
void Electro::setConsumo_hora(float cons){
	consumo_hora= cons;
}
void Electro::setHoras_on(float hor){
	horas_on= hor;
}
float Electro::getPotencia(){
	return potencia;
}
float Electro::getConsumo_hora(){
	return consumo_hora;
}
float Electro::getHoras_on(){
	return horas_on;
}

// Métodos:

void Electro::Vaciar(){
	potencia=0;
	consumo_hora=0;
	horas_on=0;
}

void Electro::CalcularConsumo(){	
	float consumo;
	consumo= potencia * consumo_hora * horas_on;
	cout << consumo << " Kwh" << endl;
}
// Clase Lavadora hija de la clase Electro
class Lavadora:public Electro{
	
	public:
	Lavadora();
	Lavadora(float p, float cons, float hor):Electro(p, cons, hor){}
	~Lavadora(){
	cout << "Soy el destructor de la lavadora" << endl;
	}
	void CalcularConsumo();
};

Lavadora::Lavadora(){
cout << "Constructor sin parámetros de Lavadora" << endl;
}

void Lavadora::CalcularConsumo(){
	float consumo;
	consumo= (potencia/2) * consumo_hora * horas_on;
	cout << consumo << " Kwh" << endl;
}

// Clase Nevera hija de la clase Electro
class Nevera:public Electro{
	public:
	Nevera();
	Nevera(float p, float cons, float hor):Electro(p, cons, hor){}
	~Nevera(){
	cout << "Soy el destructor de la nevera" << endl;
	}
	void CalcularConsumo();
};

Nevera::Nevera(){
cout << "Constructor sin parámetros de Nevera" << endl;
}

void Nevera::CalcularConsumo(){
	float consumo;
	consumo= potencia * (0.7 * consumo_hora) * horas_on;
	cout << consumo << " Kwh" << endl;
}

// Clase Radiador hija de la clase Electro
class Radiador:public Electro{
	public:
	Radiador();
	Radiador(float p, float cons, float hor):Electro(p, cons, hor){}
	~Radiador(){
	cout << "Soy el destructor del radiador" << endl;
	}
};

Radiador::Radiador(){
cout << "Constructor sin parámetros de Radiador" << endl;
}


int main() {
/*
Electro Ele(1200, 80, 24);
Ele.CalcularConsumo();
Lavadora Lava(1200, 80, 24); 
Lava.CalcularConsumo();
Nevera Neve(1200, 80, 24);
Neve.CalcularConsumo();
Radiador Radia(1200, 80, 24);
Radia.CalcularConsumo();
*/
float pot=0;
float cons=0;
float hor=0;
Lavadora lav[3];
Radiador rad[3];

for(int i=1; i<=3; i++){
cout << "Introduce los datos de la lavadora " << i << endl;
cin >> pot;
cin >> cons;
cin >> hor;
lav[i].setPotencia(pot);
lav[i].setConsumo_hora(cons);
lav[i].setHoras_on(hor);
lav[i].CalcularConsumo();

cout << "Introduce los datos de la nevera " << i << endl;
cin >> pot;
cin >> cons;
cin >> hor;
Nevera nev(pot,cons,hor);
nev.CalcularConsumo();

cout << "Introduce los datos del radiador " << i << endl;
cin >> pot;
cin >> cons;
cin >> hor;
rad[i].setPotencia(pot);
rad[i].setConsumo_hora(cons);
rad[i].setHoras_on(hor);
rad[i].CalcularConsumo();
}

return(0);
}
