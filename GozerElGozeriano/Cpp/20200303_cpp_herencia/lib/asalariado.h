/*
1-Toma la clase persona que has definido en el ejercicio 1 del boletín C++Objetos_03a.txt. A partir de ella crea una clase asalariado que guarde información sobre el sueldo que cobra la persona neto al mes y la retención que se le aplica en la nómina. Crea al menos un constructor y un los correspondientes métodos de get y set.
*/

#ifndef H_ASALARIADO
#define H_ASALARIADO

#include "persona.h"

class Asalariado : public Persona
{
	protected:
	float salariomes;
	float retencion;
	
	public:
	Asalariado(float salmes, float retnom);
	Asalariado(float salmes, float retnom, int dni, char dniletter) : Persona(dni,dniletter)
	{
		this->salariomes=salmes;
		this->retencion=retnom;
	}
	Asalariado(float salmes, float retnom, int nDni, char cDni, string nombre, string ln1, string ln2, int dnac, int mnac, int anac, string ciudadnac, string paisnac) : Persona(nDni, cDni, nombre, ln1, ln2, dnac, mnac, anac, ciudadnac, paisnac)
	{
		this->salariomes=salmes;
		this->retencion=retnom;
	}
	void setsalariomes(float salmes);
	void setretencion(float retnom);
	float getsalariomes(void);
	float getretencion(void);
	void print(void);
};

Asalariado::Asalariado(float salmes, float retnom)
{
	this->salariomes=salmes;
	this->retencion=retnom;
}

void Asalariado::print()
{
	cout << "DNI: " << nif.getDNI() << endl;
	cout << "Nombre: " << name << endl;
	cout << "Apellidos: " << lastname1 << " " << lastname2 << endl;
	cout << "Fecha de nacimiento: " << borndate.anyo << "/" << borndate.mes << "/" << borndate.dia << endl;
	cout << "Ciudad: " << ciudad << endl;
	cout << "Pais: " << pais << endl;
	cout << "Sueldo: " << salariomes << " maravedies/mes." << endl;
	cout << "Retención: " << retencion << "%" << endl;
	cout << "-------------------------------------------" << endl;
}

void Asalariado::setsalariomes(float salmes)
{
	this->salariomes=salmes;
}

void Asalariado::setretencion(float retnom)
{
	this->retencion=retnom;
}

float Asalariado::getsalariomes(void)
{
	return(this->salariomes);
}

float Asalariado::getretencion(void)
{
	return(this->retencion);
}

#endif
