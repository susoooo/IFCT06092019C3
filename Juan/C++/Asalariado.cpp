#include <iostream>
#include <cstring>
using namespace std;

struct Fecha{
	Fecha(){dia=0; mes=0; ano=0;}
	int dia;
	int mes;
	int ano;
};

class Persona{
	int edad;
	char nombre[30];
	char primer_apellido[50];
	char segundo_apellido[50];
	char lugar_nacimiento[10];
	char pais_nacimiento[10];
	struct Fecha fecha_nacimiento;

	public:
	// Constructor
	Persona();
	Persona(char *pdni2);
	Persona(char *p_a, char *s_a);
	Persona(char *nom, int e);
	Persona(char *dni2, char *p_a, char *s_a);
	Persona(int e, char *dni2, char *nom, char *p_a, char *s_a, 
	char *l_n, char *p_n, struct Fecha f_n);
	~Persona();
	
	char dni[10];
	// Métodos set y get
	void setEdad(int e);
	void setDni(char *dni2);
	void setNombre(char *nom);
	void setPrimer_apellido(char *p_a);
	void setSegundo_apellido(char *s_a);
	void setLugar_nacimiento(char *l_n);
	void setPais_nacimiento(char *p_n);
	void setFecha_nacimiento(struct Fecha f_n);
	int getEdad();
	char* getDni();
	char* getNombre();
	char* getPrimer_apellido();
	char* getSegundo_apellido();
	char* getLugar_nacimiento();
	char* getPais_nacimiento();
	struct Fecha getFecha_nacimiento();

	// Métodos
	void MostrarPersona();
	void ModificarPersona(int e, char *dni2, char *nom,
	char *p_a, char *s_a, char *l_n, char *p_n, struct Fecha f_n);
	void Vaciar();
};

// Constructores:

Persona::Persona(){
	Vaciar();
cout << "Constructor sin parámetros" << endl;
}

Persona::~Persona(){
	cout << "Soy el destructor " << nombre << " " << primer_apellido << " "<< segundo_apellido << endl;
}

Persona::Persona(char *c){
	Vaciar();
	strcpy(dni, c);
}

Persona::Persona(char *p_a, char *s_a){
	Vaciar();
	strcpy(primer_apellido, p_a);
	strcpy(segundo_apellido, s_a);
}

Persona::Persona(char *nom, int e){
	Vaciar();
	strcpy(nombre,nom);
	edad= e;	
}

Persona::Persona(char *dni2, char *p_a, char *s_a){
	Vaciar();
	strcpy(dni, dni2);
	strcpy(primer_apellido, p_a);
	strcpy(segundo_apellido, s_a);
}

Persona::Persona(int e, char *dni2, char *nom, char *p_a,
 char *s_a, char *l_n, char *p_n, struct Fecha f_n){
	Vaciar();
	edad=e;
	strcpy(dni, dni2);
	strcpy(nombre, nom);
	strcpy(primer_apellido, p_a);
	strcpy(segundo_apellido, s_a);
	strcpy(lugar_nacimiento, l_n);
	strcpy(pais_nacimiento, p_n);
	fecha_nacimiento=f_n;	
}
// Métodos set:
void Persona::setEdad(int e){
	edad=e;
}

void Persona::setDni(char *dni2){
	strcpy(dni, dni2);
}

void Persona::setNombre(char *nom){
	strcpy(nombre, nom);
}

void Persona::setPrimer_apellido(char *p_a){
	strcpy(primer_apellido, p_a);
}

void Persona::setSegundo_apellido(char *s_a){
	strcpy(segundo_apellido, s_a);
}

void Persona::setLugar_nacimiento(char *l_n){
	strcpy(lugar_nacimiento, l_n);
}

void Persona::setPais_nacimiento(char *p_n){
	strcpy(pais_nacimiento, p_n);
}

void Persona::setFecha_nacimiento(struct Fecha f_n){
	fecha_nacimiento=f_n;
}

// Métodos get:
int Persona::getEdad(){
	return edad;
}

char* Persona::getDni(){
	return dni;
}

char* Persona::getNombre(){
	return nombre;
}

char* Persona::getPrimer_apellido(){
	return primer_apellido;
}

char* Persona::getSegundo_apellido(){
	return segundo_apellido;
}

char* Persona::getLugar_nacimiento(){
	return lugar_nacimiento;
}

char* Persona::getPais_nacimiento(){
	return pais_nacimiento;
}

struct Fecha Persona::getFecha_nacimiento(){
	return fecha_nacimiento;
}

// Métodos:

void Persona::ModificarPersona(int e, char *dni2, char *nom, char *p_a, 
	char *s_a, char *l_n, char *p_n, struct Fecha f_n){
	edad=e;
	strcpy(dni, dni2);
	strcpy(nombre, nom);
	strcpy(primer_apellido, p_a);
	strcpy(segundo_apellido, s_a);
	strcpy(lugar_nacimiento, l_n);
	strcpy(pais_nacimiento, p_n);
	fecha_nacimiento=f_n;
}

void Persona::MostrarPersona(){
	
	cout << edad <<  dni <<  nombre << primer_apellido 
	<< segundo_apellido << lugar_nacimiento <<
	pais_nacimiento << fecha_nacimiento.dia << endl;
}

void Persona::Vaciar(){
	edad=0;
	strcpy(dni,"");
	strcpy(nombre,"");
	strcpy(primer_apellido,"");
	strcpy(segundo_apellido,"");
	strcpy(lugar_nacimiento,"");
	strcpy(pais_nacimiento,"");
	fecha_nacimiento.dia = 0;
	fecha_nacimiento.mes = 0;
	fecha_nacimiento.ano = 0;
}

class Asalariado: public Persona{

	//Constructor
	public:
	Asalariado();
	Asalariado(char *dni2, float s, float retencion);
	Asalariado(char *dni2, float s, float retencion, float sueldo_neto);
	
	// Métodos
	void setSueldo(float s);
	void setSueldo_neto(float n_m);
	void setRetencion(float ret);
	float getSueldo();
	float getSueldo_neto();
	float getRetencion();
	float calcularSueldo_neto();
	
	protected:
	float sueldo;
	float sueldo_neto;
	float retencion;
	
};

Asalariado::Asalariado(){
	Vaciar();
}

Asalariado::Asalariado(char *dni2, float s, float ret){
	strcpy(dni, dni2);
	sueldo=s;
	retencion=ret;
}


Asalariado::Asalariado(char *dni2, float s, float ret, float s_n){
	strcpy(dni, dni2);
	sueldo=s;
	retencion=ret;
	sueldo_neto=s_n;
}

void Asalariado::setSueldo(float s){
	sueldo=s;
}

void Asalariado::setSueldo_neto(float s_n){
	sueldo_neto=s_n;
}

void Asalariado::setRetencion(float ret){
	retencion=ret;
}

float Asalariado::getSueldo(){
	return sueldo;
}

float Asalariado::getSueldo_neto(){
	return sueldo_neto;
}

float Asalariado::getRetencion(){
	return retencion;
}

// Método

float Asalariado::calcularSueldo_neto(){
	float sueldo_neto;
	
	sueldo_neto= sueldo * (retencion/100);
	return sueldo_neto;
}

int main() {
	struct Fecha f;
	f.dia=12;
	f.mes=12;
	f.ano=2002;
Persona Juan(47,"34563534G", "Juan", "Rodriguez", "Soto", "Lugo", "España", f);
Juan.MostrarPersona();
Persona Fran("Lopez ", "Gonzalez");
Fran.MostrarPersona();
Persona Jose("33327474J ", "Vila ", "Arias ");
Jose.MostrarPersona();
Asalariado Suso("33222111D", 900, 21);
cout << Suso.calcularSueldo_neto() << endl;

return(0);
}
