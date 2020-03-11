#include <iostream>
using std::cout;
using std::cin;
using std::endl;

class Electrodomestico {
	protected:
	float potencia, watiosPH;
	int horasEncenUltCiclo;
	
	public:
	Electrodomestico(float potencia, float watiosPH, int horasEncenUltCiclo) {
		this->potencia = potencia;
		this->watiosPH = watiosPH;
		this->horasEncenUltCiclo = potencia;
	}
	
	float calcular_consumo() {
		return potencia * watiosPH * horasEncenUltCiclo;
	}
};

class Lavadora : Electrodomestico {
	public:
	Lavadora(float potencia, float watiosPH, int horasEncenUltCiclo) : Electrodomestico(potencia, watiosPH, horasEncenUltCiclo) {}
	
	float calcular_consumo() {
		return (potencia * 0.5) * watiosPH * horasEncenUltCiclo;
	}
};

class Nevera : Electrodomestico {
	public:
	Nevera(float potencia, float watiosPH, int horasEncenUltCiclo) : Electrodomestico(potencia, watiosPH, horasEncenUltCiclo) {}
	
	float calcular_consumo() {
		return potencia * (watiosPH * 0.7) * horasEncenUltCiclo;
	}
};

class Radiador : Electrodomestico {
	public:
	Radiador(float potencia, float watiosPH, int horasEncenUltCiclo) : Electrodomestico(potencia, watiosPH, horasEncenUltCiclo) {}
	
	float calcular_consumo() {
		return Electrodomestico::calcular_consumo();
	}
};

int main() {
	Lavadora * lavadora[3];
	Nevera * nevera [3];
	Radiador * radiador[3];
	float potencia, watiosPH;
	int horasEncenUltCiclo;
	
	for (int i = 0; i < 3; i++) {
		cout << "Potencia" << endl;
		cin >> potencia;
		cout << "Watios por hora" << endl;
		cin >> watiosPH;
		cout << "Horas encendido desde ultimo ciclo" << endl;
		cin >> horasEncenUltCiclo;
		lavadora[i] = new Lavadora(potencia, watiosPH, horasEncenUltCiclo);
	}
	
	for (int i = 0; i < 3; i++) {
		cout << "Potencia" << endl;
		cin >> potencia;
		cout << "Watios por hora" << endl;
		cin >> watiosPH;
		cout << "Horas encendido desde ultimo ciclo" << endl;
		cin >> horasEncenUltCiclo;
		nevera[i] = new Nevera(potencia, watiosPH, horasEncenUltCiclo);
	}
	
	for (int i = 0; i < 3; i++) {
		cout << "Potencia" << endl;
		cin >> potencia;
		cout << "Watios por hora" << endl;
		cin >> watiosPH;
		cout << "Horas encendido desde ultimo ciclo" << endl;
		cin >> horasEncenUltCiclo;
		radiador[i] = new Radiador(potencia, watiosPH, horasEncenUltCiclo);
	}
}