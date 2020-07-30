/*
4. Jefe de zona. Tiene despacho, tiene un secretario a su cargo, una lista de vendedores a su cargo y tiene coche de la empresa (identificado por la matrícula, marca y modelo). Incrementa su salario un 20% anual. 
Tendrá, al menos, las siguientes funciones miembro:
	• Constructores (debe rellenar la información personal y los datos principales)
	• Imprimir (debe imprimir sus datos personales y su puesto en la empresa).
	• Cambiar de secretario.
	• Cambiar de coche.
	• Dar de alta y de baja un nuevo vendedor en su zona.
*/

#ifndef JEFEZONA_H
#define JEFEZONA_H

#include <iostream>
#include "empleado.h"
#include "vendedor.h"
#include "secretario.h"

#define VENDEDORLISTMAXSIZE 64

using namespace std;

class Jefezona : public Empleado
{
	Coche Cochedeempresa;
	Vendedor * Vendedores[VENDEDORLISTMAXSIZE];
	Secretario * secrpersonal;
	int despacho;
	float incrementosalario = 20.0f;
	
	void printSecretario(void)
	{
		secrpersonal->print();
	}
	
	void printVendedores(void)
	{
		
	}
	
public:
	Jefezona(string newName, string newLastName, int DNIn, char DNIc, string AddressRoad, int AddressNumber, int newTlf, float newsalariomes, string matricula, string marcaCoche, string modeloCoche, int despacho) : Empleado(newName, newLastName, DNIn, DNIc, AddressRoad, AddressNumber, newTlf, newsalariomes)
	{
		this->Cochedeempresa.matricula = matricula;
		this->Cochedeempresa.marca = marcaCoche;
		this->Cochedeempresa.modelo = modeloCoche;
		this->despacho = despacho;
	}
	void print(void)
	{
		Empleado::print();
		cout << "Puesto: Jefe de Zona." << endl;
		cout << "Despacho: " << this->despacho << endl;
		cout << "Vehículo: " << this->Cochedeempresa.matricula << " " << this->Cochedeempresa.marca << " " << this->Cochedeempresa.modelo << endl;
		cout << "-------------------------------------------" << endl;
		cout << "Secretario: " << endl;
		printSecretario();
		cout << "Vendedores: " << endl;
		//printVendedores();
		cout << "-------------------------------------------" << endl;
	}
	void setSecretario(Secretario * newSecretario)
	{
		this->secrpersonal = newSecretario;
	}
	
	
	void CambiarCoche(string matricula, string modelo, string marca)
	{
		Cochedeempresa.matricula = matricula;
		Cochedeempresa.modelo = modelo;
		Cochedeempresa.marca = marca;
	}
};
#endif
