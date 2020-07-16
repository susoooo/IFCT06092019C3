#include <iostream>
#include <cstring>
using namespace std;

// CLASE ASIGNATURA

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
	cout << " Soy el destructor de la asignatura " << endl;
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
			if(i==0){
			cout << ("Entra en el For una vez ") << endl;
			}else
			{
			cout << ("Entra en el For ") << i+1 << (" veces") << endl;
			}
			cin >> notas[i];
			cout << notas[i] << (" Es la ") << contador+1 << (" nota") << endl;
			contador++;	
		}
}

void Ciencias::CalcularNotaMedia(){
	float nota_media;
	if(numero<1 && numero>6){
		perror("No hay notas para la asignatura de Ciencias ");
	}else{
		nota_media = ((notas[0] + notas[1] + notas[2] + notas[3] + notas[4])/numero);
		cout << ("La nota media es ") << nota_media << endl;
		}
}

// CLASE LETRAS hija de Asignatura

class Letras: public Asignatura{
	
	// Constructores
	public:
	Letras();

	// Métodos
	void Vaciar();
	void setNota(float n);
	float* getNota();
	void IntroducirNotas();
	void CalcularNotaMedia();

	protected:
	int numero;
	float notas[10];
};


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

void Letras::IntroducirNotas(){
	Vaciar();
	cout << ("Cuántas notas entre 1 y 10 quieres introducir para la asignatura? ") << endl;
	cin >> numero;	
	cout << ("Introduce las ") << numero << (" notas para la asignatura") << endl;
		int contador;
		contador=0;
		for(int i=0; i<numero; i++){
			if(i==0){
			cout << ("Entra en el For una vez ") << endl;
			}else
			{
			cout << ("Entra en el For ") << i+1 << (" veces") << endl;
			}
			cin >> notas[i];
			cout << notas[i] << (" Es la ") << contador+1 << (" nota") << endl;
			contador++;	
		}
}

void Letras::CalcularNotaMedia(){
	float nota_media;
	float mitad_nota;
	float suma=0;
	if(numero<1 && numero>11){
		perror("No hay notas para la asignatura de Ciencias ");
	}else{
		for(int i=0;i<numero;i++)
		{
		mitad_nota=notas[i];
		suma=mitad_nota+suma;
		}
		nota_media=(suma+notas[numero])/2;
		cout << ("La nota media es ") << nota_media << endl;
		}
}

// CLASE MÚSICA hija de ASIGNATURA

class Musica: public Asignatura{
	
	// Constructores
	public:
	Musica();
	~Musica();

	// Métodos
	void Vaciar();
	void setNota(float n);
	float getNota();
	void CalcularNotaMedia();

	protected:
	int numero;
	float nota;
};	


Musica::Musica(){
	Vaciar();
	cout << "Constructor sin parámetros de Música " << endl;
}

Musica::~Musica(){
	Vaciar();
	cout << " Soy el destructor de la clase Música " << endl;
}

void Musica::setNota(float n){
	nota=n;
}

float Musica::getNota(){
	return nota;	
}

void Musica::Vaciar(){
	nota=0;	
}

void Musica::CalcularNotaMedia(){
		cout << ("La nota media es ") << nota << endl;
}
	
	
// CLASE TECNOLOGICAS hija de Asignatura

class Tecnologicas: public Asignatura{
	
	// Constructores
	public:
	Tecnologicas();
	~Teconologicas();

	// Métodos
	void Vaciar();
	void setNota(float n);
	float* getNota();
	void IntroducirNotas();
	void CalcularNotaMedia();

	protected:
	float notas[5];
};


Tecnologicas::Tecnologicas(){
	Vaciar();
	cout << "Constructor sin parámetros de Tecnologicas " << endl;
}

Tecnologicas::~Asignatura(){
	Vaciar();
	cout << " Soy el destructor de Tecnológicas " << endl;
}

void Tecnologicas::setNota(float n){
	*notas=n;
}

float* Tecnologicas::getNota(){
	return notas;	
}

void Tecnologicas::Vaciar(){
	for(int i=0;i<5;i++){
	notas[i]=0;
	}		
}

void Tecnologicas::CalcularNotaMedia(){
	Vaciar();
	float nota_media;
	float suma_notas;
	float suma=0;
	
	cout << ("Introduce las 5 notas para la asignatura") << endl;
		int contador;
		contador=0;
		for(int i=0; i<5; i++){
			cin >> notas[i];
			cout << notas[i] << (" Es la ") << contador+1 << (" nota") << endl;
			suma_notas=notas[i];
			suma=suma_notas+suma;
			contador++;	
		}
		
		nota_media=suma_notas/5;
	cout << ("La nota media de Tecnológicas es ") << nota_media << endl;
}


int main() {
	/* COMPROBADO
// Prueba clase Asignatura
cout << "PRUEBAS PARA CLASE ASIGNATURA " << endl;
	Asignatura Una;
	Una.CalcularNotaMedia();
	char datos[10];
	cout << "Escribe el nombre " << endl;
	cin >> datos;
	Una.setNombre(datos);
	cout << "Escribe el codigo " << endl;
	cin >> datos;
	Una.setCodigo(datos);
	cout << Una.getNombre() << " " << Una.getCodigo() << endl;
	
	Asignatura Dos("Juan", "47");
	cout << Dos.getNombre() << " " << Dos.getCodigo() << endl;
	
// Prueba clase Ciencias
cout << "PRUEBAS PARA CLASE CIENCIAS " << endl;
	Ciencias cinco;
	cinco.IntroducirNotas();
	cinco.CalcularNotaMedia();


// Prueba clase Letras
cout << "PRUEBAS PARA CLASE LETRAS " << endl;
	Letras diez;
	diez.IntroducirNotas();
	diez.CalcularNotaMedia();
	
// Prueba de la clase Musica

	Musica Melodia;
	Melodia.setNota(9);
	Melodia.CalcularNotaMedia();
		COMPROBADO*/
		
	
// return(0);
}