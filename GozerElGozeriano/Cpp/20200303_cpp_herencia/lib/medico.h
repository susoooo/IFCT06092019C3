/*
2-A partir de la clase asalariado, define ahora un par de clases: obrero y médico. En la clase obrero, guarda el nombre del cargo que desempeña. Para la clase médico, guarda información sobre la cantidad de pacientes que tiene a su cargo. Crea los constructores y metodos get y set que creas necesarios.
*/


#ifndef H_MEDICO
#define H_MEDICO

#include "asalariado.h"

class Medico : public Asalariado
{
	protected:
	int numPacientes;
	
	public:
	Medico(int ttlpacientes, float salmes, float retnom, int nDni, char cDni, string nombre, string ln1, string ln2, int dnac, int mnac, int anac, string ciudadnac, string paisnac) : Asalariado(salmes, retnom, nDni, cDni, nombre, ln1, ln2, dnac, mnac, anac, ciudadnac, paisnac)
	{
		this->numPacientes = ttlpacientes;
	}
	void setpacientes(int ttlpacientes);
	int getpacientes(void);
	void print(void);
};

void Medico::setpacientes(int ttlpacientes)
{
	this->numPacientes = ttlpacientes;
}

int Medico::getpacientes(void)
{
	return(this->numPacientes);
}

void Medico::print()
{
	cout << "DNI: " << this->nif.getDNI() << endl;
	cout << "Nombre: " << this->name << endl;
	cout << "Apellidos: " << this->lastname1 << " " << this->lastname2 << endl;
	cout << "Fecha de nacimiento: " << this->borndate.anyo << "/" << this->borndate.mes << "/" << this->borndate.dia << endl;
	cout << "Ciudad: " << this->ciudad << endl;
	cout << "Pais: " << this->pais << endl;
	cout << "Sueldo: " << this->salariomes << " maravedies/mes." << endl;
	cout << "Retención: " << this->retencion << "%" << endl;
	cout << "Número de pacientes: " << this->numPacientes << endl;
	cout << "-------------------------------------------" << endl;
}

#endif
