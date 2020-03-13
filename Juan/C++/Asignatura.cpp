#include <iostream>
#include <cstring>
using namespace std;

class Asignatura{
	
	// Constructores:
	public:
	Asignatura();
	~Asignatura();
	Asignatura(char *nom, char *cod);

	// Métodos
	void setNombre(char *nom);
	void setCodigo(char *cod);
	char* getNombre();
	char* getCodigo();
	void Vaciar();
	void CalcularNotaMedia();

	protected:
	char nombre[30];
	char codigo[10];
};

// Constructores:
Asignatura::Asignatura(){
	Vaciar();
	cout << "Constructor sin parámetros de Asignatura " << endl;
}

Asignatura::~Asignatura(){
	Vaciar();
	cout << "Soy el destructor de la asignatura " << endl;
}

Asignatura::Asignatura(char *nom, char *cod){
	Vaciar();
	strcpy(nombre, nom);
	strcpy(codigo, cod);
}

// Métodos get y set:

void Asignatura::setNombre(char *nom){
	strcpy(nombre, nom);
}
void Asignatura::setCodigo(char *cod){
	strcpy(codigo, cod);
}

char* Asignatura::getNombre(){
	return nombre;
}
char* Asignatura::getCodigo(){
	return codigo;
}

// Métodos:

void Asignatura::Vaciar(){
	strcpy(nombre, "");
	strcpy(codigo, "");
}

void Asignatura::CalcularNotaMedia(){	
	cout << "10" << endl;
}

// CLASE CIENCIAS hija de la clase Asignatura

class Ciencias: public Asignatura{
	
	// Constructores
	public:
	Ciencias();
	Ciencias(char *nom, char *cod):Asignatura(nom, cod){}
	//Ciencias(float* notas);
	// Métodos
	void Vaciar();
	void setNota(float n);
	float* getNota();
	void IntroducirNotas();
	void CalcularNotaMedia();


	protected:
	int numero;
	float notas[5];
};

Ciencias::Ciencias(){
	Vaciar();
	cout << "Constructor sin parámetros de Ciencias " << endl;
}

void Ciencias::Vaciar(){
	numero=0;
	for(int i=0;i<5;i++){
	notas[i]=0;
	}
}

void Ciencias::setNota(float n){
	*notas=n;
}

float* Ciencias::getNota(){
return notas;	
}

void Ciencias::IntroducirNotas(){
	Vaciar();
	cout << ("Cuántas notas entre 1 y 5 quieres introducir para la asignatura? ") << endl;
	cin >> numero;	
	cout << ("Introduce las ") << numero << (" notas para la asignatura") << endl;
		int contador;
		contador=0;
		for(int i=0; i<numero; i++){
			cout << ("Entra en el For ") << i+1 << (" veces") << endl;
			cin >> notas[i];
			cout << notas[i];
			cout << contador;
			contador++;	
		}
	
/*
	if(numero<1 && numero>6){
		cout << ("Cuántas notas entre 1 y 5 quieres introducir para la asignatura? ") << endl;
		cin >> numero;	
	}else{
		cout << ("Introduce las ") << numero << (" notas para la asignatura") << endl;
		int contador;
		for(int i=0; i<numero; i++){
			cout << ("Entra en el For");
			cin >> notas[i];
			cout << notas[i];
			cout << contador;
			contador++;	
		}
	}
*/
}

void Ciencias::CalcularNotaMedia(){
	float nota_media;
	if(numero<1 && numero>6){
		perror("No hay notas para la asignatura de Ciencias ");
	}else{
		nota_media = ((notas[0] + notas[1] + notas[2] + notas[3] + notas[4])/5);
		cout << nota_media;
		}
}

class Letras: public Asignatura{
	
	// Constructores
	public:
	Letras();
	Letras(char *nom, char *cod):Asignatura(nom, cod){}
	//Letras(float* notas);
	// Métodos
	void Vaciar();
	void setNota(float n);
	float* getNota();
	void CalcularNotaMedia();


	protected:
	float notas[10];
};




// CLASE LETRAS hija de Asignatura

Letras::Letras(){
	Vaciar();
	cout << "Constructor sin parámetros de Letras " << endl;
}

void Letras::setNota(float n){
	*notas=n;
}

float* Letras::getNota(){
	return notas;	
}

void Letras::Vaciar(){
	for(int i=0;i<10;i++){
	notas[i]=0;
	}		
}

void Letras::CalcularNotaMedia(){
	//float nota_media;
	//int numero;
	//nota_media = ((*notas[0] + *notas[1] + *notas[2] + *notas[3] + *notas[4] + *notas[5] + *notas[6] + *notas[7] + *notas[8] + *notas[9])/10);
	//cout << nota_media;
}

int main() {
	/*
	Asignatura Diez;
	Diez.CalcularNotaMedia();
	Asignatura Once;
	Once.setNombre("Juan");
	Once.setCodigo("11");
	cout << Once.getNombre() << " " << Once.getCodigo() << endl;
	*/
	Ciencias cinco;
	cinco.IntroducirNotas();
	cinco.CalcularNotaMedia();
	
return(0);
}