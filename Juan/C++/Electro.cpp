#include <iostream>
#include <cstring>
using namespace std;

class Electro{
	
	float potencia;
	float consumo_hora;
	float horas_on;
	
	// Constructores:
	
	Electro();
	~Electro();
	Electro(float p, float cons, float hor);
	void Electro::setPotencia(float p){
	potencia=p;
}

void Electro::setConsumo_hora(float cons){
	consumo_hora= cons;
}

	void setHoras_on(float hor);
	void getPotencia();
	void getConsumo_hora();
	void getHoras_on();
	void Vaciar();
	void CalcularConsumo();
	
};


// Constructores:

Electro::Electro(){

cout << "Constructor sin parámetros" << endl;
}

Electro::~Electro(){
	cout << "Soy el destructor " << endl;
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
	return p;
}

float Electro::getConsumo_hora(){
	return cons;
}

float Electro::getHoras_on(){
	return hor;
}

// Métodos:

void Electro::Vaciar(){
	potencia=0;
	consumo_hora=0;
	horas_on=0;
}

void Electro::CalcularConsumo(){	
	float consumo;
	consumo= po * cons * hor;
	cout << consumo << "Kwh" << endl;
}





class lavadora:: public Electro{
	
	void Electro::CalcularConsumo(float po, float cons, float hor){	
}

}

int main() {

Electro Ele(1200, 80, 24);
Ele.CalcularConsumo();

return(0);
}
