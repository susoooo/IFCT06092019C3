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
cout << "Constructor sin parámetros" << endl;
}

Electro::~Electro(){
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

class Lavadora: public Electro{
	
	public:
	Lavadora(float p, float cons, float hor):Electro(p, cons, hor){}
	~Lavadora(){
	cout << "Soy el destructor de la lavadora" << endl;
	}
	void CalcularConsumo();
};

void Lavadora::CalcularConsumo(){
	float consumo;
	consumo= (potencia/2) * consumo_hora * horas_on;
	cout << consumo << " Kwh" << endl;
}

class Nevera:public Electro{
	public:
	Nevera(float p, float cons, float hor):Electro( p, cons, hor){}
	~Nevera(){
	cout << "Soy el destructor de la nevera" << endl;
	}
	void CalcularConsumo();
};

void Nevera::CalcularConsumo(){
	float consumo;
	consumo= potencia * (0.7 * consumo_hora) * horas_on;
	cout << consumo << " Kwh" << endl;
}

class Radiador:public Electro{
	public:
	Radiador(float p, float cons, float hor):Electro( p, cons, hor){}
	~Radiador(){
	cout << "Soy el destructor del radiador" << endl;
	}
};

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
Nevera nev[3];
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
cin >> "%f " >> &pot >> "%f " >> &cons >> "%f" >> &hor >> endl;
nev[i].setPotencia=pot;
nev[i].setConsumo_hora=cons;
nev[i].setHoras_on=hor;

cout << "Introduce los datos del radiador " << i << endl;
cin >> "%f " >> &pot >> "%f " >> &cons >> "%f" >> &hor >> endl;
rad[i].setPotencia=pot;
rad[i].setConsumo_hora=cons;
rad[i].setHoras_on=hor;

}

return(0);
}
