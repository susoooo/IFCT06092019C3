#include <iostream>
#include <ctime>
#include <stdio.h>

using namespace std;



class Telesuperetc
{
	protected:
	FILE* log;
	float preciobase[3] = { 1.0, 2.0, 3.0 };
	float precioingred[5] = { 1.0, 1.0, 2.0, 2.0, 2.0 };
	
	public:
	Telesuperetc() { log = fopen("log.txt", "a"); }
};

class Pizza : Telesuperetc
{
	float precio;
	enum Base
	{
		FINA,
		NORMAL,
		GRUESA,
	};
	int base;
	enum Ingredientes
	{
		QUESO,
		JAMON,
		SETAS,
		ACEITUNAS,
		PEPPERONI,
	};
	int ingredientes[5];
	
	public:
	Pizza(float nuprecio, int nubase, int *nuingred);
	Pizza(int nubase, int *nuingred);
	Pizza(int *nuingred);
	
	~Pizza();
};

Pizza::Pizza(float nuprecio, int nubase, int *nuingred)
{
	for (int i = 0 ; i < 5 ; i++)
	{
		ingredientes[i] = nuingred[i];
	}
	
	precio = nuprecio;
	base = (nubase == -1 ? NORMAL : nubase);
}

Pizza::Pizza(int nubase, int *nuingred)
{
	int subtot = 0;
	
	for (int i = 0 ; i < 5 ; i++)
	{
		if (nuingred[i])
		{
			subtot += precioingred[i];
		}
	}
	
	for (int i = 0 ; i < 3 ; i++)
	{
		subtot += (nubase == i ? preciobase[i] : 0);
	}
	
	Pizza(subtot, nubase, nuingred);
}

Pizza::Pizza(int *nuingred)
{
	int nubase = 1;
	
	Pizza(nubase, nuingred);
}

Pizza::~Pizza()
{
	cout << "Se va a destruir pizza de " << precio << " Euros." << endl;
	
	fwrite(&precio, sizeof(float), 1, log);
}



int
main()
{
	int ingred[5] = { 1, 0, 0, 0, 0 };
	int base = 2;
	Pizza menu1 = Pizza(base, ingred);
	
	return 0;
}