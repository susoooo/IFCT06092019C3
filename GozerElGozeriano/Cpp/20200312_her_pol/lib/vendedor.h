/*
3. Vendedor. Tiene coche de la empresa (identificado por la matricula, marca y modelo), teléfono móvil, área de venta, lista de clientes y porcentaje que se lleva de las ventas en concepto de comisiones. Incrementa su salario un 10% anual.
Tendrá, al menos, las siguientes funciones miembro:
	• Constructores (debe rellenar la información personal y los datos principales)
	• Imprimir (debe imprimir sus datos personales y su puesto en la empresa).
	• Dar de alta un nuevo cliente.
	• Dar de baja un cliente.
	• Cambiar de coche.
*/

#ifndef VENDEDOR_H
#define VENDEDOR_H

#include <iostream>
#include "empleado.h"

#define CLIENTLISTMAXSIZE 64

using namespace std;

struct Coche
{
	string matricula;
	string marca;
	string modelo;
};

class Vendedor : public Empleado
{
	Coche Cochedeempresa;
	int movil;
	string areadeventa;
	string Clientes[CLIENTLISTMAXSIZE];
	float porcentajeventa;
	float incrementosalario = 10.0f;
	bool status;
	
	int findclient(string clientname)
	{
		bool found = false;
		int location = 0;
		while(!found && location<CLIENTLISTMAXSIZE)
		{
			if(Clientes[location]==clientname)
				found = true;
			else
				location++;
		}
		if(found)
			return(location);
		return(-1);
	}
	
	void printClientes(void)
	{
		int n;
		int count;
		count = 0;
		for(n=0;n<CLIENTLISTMAXSIZE;n++)
		{
			if(Clientes[n]!="")
			{
				cout << Clientes[n] << endl;
				count++;
			}
		}
		if(!count) cout << "No hay clientes." << endl;
	}
	
public:
	Vendedor(string newName, string newLastName, int DNIn, char DNIc, string AddressRoad, int AddressNumber, int newTlf, float newsalariomes, string matricula, string marcaCoche, string modeloCoche, int movil, string areadeventa, float porcentajeventa) : Empleado(newName, newLastName, DNIn, DNIc, AddressRoad, AddressNumber, newTlf, newsalariomes)
	{
		this->Cochedeempresa.matricula = matricula;
		this->Cochedeempresa.marca = marcaCoche;
		this->Cochedeempresa.modelo = modeloCoche;
		this->movil = movil;
		this->areadeventa = areadeventa;
		this->porcentajeventa = porcentajeventa;
		int n;
		for(n=0;n<CLIENTLISTMAXSIZE;n++) this->Clientes[n]="";
		this->status=0;
	}
	void print(void)
	{
		Empleado::print();
		cout << "Puesto: Vendedor." << endl;
		cout << "Vehículo: " << this->Cochedeempresa.matricula << " " << this->Cochedeempresa.marca << " " << this->Cochedeempresa.modelo << endl;
		cout << "movil: " << this->movil << endl;
		cout << "Porcentaje de venta: " << this->porcentajeventa << endl;
		cout << "Área de venta: " << this->areadeventa << endl;
		cout << "Clientes: " << endl;
		printClientes();
		cout << "-------------------------------------------" << endl;
	}
	void AltaCliente(string clientname)
	{
		int location = findclient("");
		if(location>-1)
		{
			Clientes[location] = clientname;
			cout << "Nuevo cliente guardado." << endl;
		}
		else
		{
			cout << "La lista de clientes está llena." << endl;	
		}
	}
	
	void BajaCliente(string clientname)
	{
		int location = findclient(clientname);
		if(location>-1)
		{
			Clientes[location] = "";
			cout << "Cliente borrado." << endl;
		}
		else
		{
			cout << "No se ha encontrado el cliente." << endl;
		}
	}
	
	void CambiarCoche(string matricula, string modelo, string marca)
	{
		Cochedeempresa.matricula = matricula;
		Cochedeempresa.modelo = modelo;
		Cochedeempresa.marca = marca;
	}
	
	void setStatus(bool status)
	{
		this->status=status;
	}
};
#endif
