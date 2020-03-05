/*
2-A partir de la clase asalariado, define ahora un par de clases: obrero y médico. En la clase obrero, guarda el nombre del cargo que desempeña. Para la clase médico, guarda información sobre la cantidad de pacientes que tiene a su cargo. Crea los constructores y metodos get y set que creas necesarios.
*/


#ifndef H_OBRERO
#define H_OBRERO

#include "asalariado.h"

class Obrero : public Asalariado
{
	protected:
	string cargo;
	
	public:
	Obrero(string newcargo, float salmes, float retnom, int nDni, char cDni, string nombre, string ln1, string ln2, int dnac, int mnac, int anac, string ciudadnac, string paisnac) : Asalariado(salmes, retnom, nDni, cDni, nombre, ln1, ln2, dnac, mnac, anac, ciudadnac, paisnac)
	{
		this->cargo = newcargo;
	}
	void setcargo(string newcargo);
	string getcargo(void);
	void print(void);
};

void Obrero::setcargo(string newcargo)
{
	this->cargo = newcargo;
}

string Obrero::getcargo(void)
{
	return(this->cargo);
}

void Obrero::print()
{
	cout << "DNI: " << this->nif.getDNI() << endl;
	cout << "Nombre: " << this->name << endl;
	cout << "Apellidos: " << this->lastname1 << " " << this->lastname2 << endl;
	cout << "Fecha de nacimiento: " << this->borndate.anyo << "/" << this->borndate.mes << "/" << this->borndate.dia << endl;
	cout << "Ciudad: " << this->ciudad << endl;
	cout << "Pais: " << this->pais << endl;
	cout << "Sueldo: " << this->salariomes << " maravedies/mes." << endl;
	cout << "Retención: " << this->retencion << "%" << endl;
	cout << "Cargo: " << this->cargo << endl;
	cout << "-------------------------------------------" << endl;
}

#endif
