#include <iostream>
#include <cstring>
#include <stdlib.h>
using namespace std;

class electrodomesticos
{
	protected:

		int potencia;
		int consumo_x_hora;
		int consumo;
		int horas;
		void inicializar();
		
	public:
	
		electrodomesticos();
		almacenaje_de_datos();
		calculo_de_consumo();
		~electrodomesticos();
};

class labadora : public electrodomesticos
{
	public:
	calculo_de_consumo()
	{
		consumo=(potencia*consumo_x_hora*horas)/2;
	}
};

class nevera : public electrodomesticos
{
	public:
	calculo_de_consumo()
	{
		consumo=potencia*((consumo_x_hora*70)/100)*horas;
	}
};

class radiador : public electrodomesticos
{
	public:
	calculo_de_consumo()
	{
		consumo=potencia*((consumo_x_hora*70)/100)*horas;
	}
};

void electrodomesticos::inicializar()
{
	potencia=0;
	consumo_x_hora=0;
	consumo=0;
	horas=0;
}

electrodomesticos::electrodomesticos()
{
	inicializar();
}

electrodomesticos::almacenaje_de_datos()
{
	cout<<"introducca la potencia"<<endl;
	cin>>potencia;
	cout<<"introducca consumo por hora"<<endl;
	cin>>consumo_x_hora;
	cout<<"introducca el numero de horas que lleva encendido"<<endl;
	cin>>horas;
}

electrodomesticos::calculo_de_consumo()
{
	consumo=potencia*consumo_x_hora*horas;
}

electrodomesticos::~electrodomesticos()
{
	cout<<"La potencia consumida es de "<<consumo<<"watios"<<endl;
	potencia=0;
	consumo_x_hora=0;
	consumo=0;
	horas=0;
}

int main()
{
	labadora miLavadora;
	cout<<"1º Labadora"<<endl;
	miLavadora.almacenaje_de_datos();
	miLavadora.calculo_de_consumo();
	
	labadora miLavadora2;
	cout<<"2º Labadora"<<endl;
	miLavadora2.almacenaje_de_datos();
	miLavadora2.calculo_de_consumo();
	
	labadora miLavadora3;
	cout<<"3º Labadora"<<endl;
	miLavadora3.almacenaje_de_datos();
	miLavadora3.calculo_de_consumo();
	
	nevera miNevera;
	cout<<"1ª Nevera"<<endl;
	miNevera.almacenaje_de_datos();
	miNevera.calculo_de_consumo();
	
	nevera miNevera2;
	cout<<"2ª Nevera"<<endl;
	miNevera2.almacenaje_de_datos();
	miNevera2.calculo_de_consumo();
	
	nevera miNevera3;
	cout<<"3ª Nevera"<<endl;
	miNevera3.almacenaje_de_datos();
	miNevera3.calculo_de_consumo();
	
	radiador miRadiador;
	cout<<"1º Radiador"<<endl;
	miRadiador.almacenaje_de_datos();
	miRadiador.calculo_de_consumo();
	
	radiador miRadiador2;
	cout<<"2º Radiador"<<endl;
	miRadiador2.almacenaje_de_datos();
	miRadiador2.calculo_de_consumo();
	
	radiador miRadiador3;
	cout<<"3º Radiador"<<endl;
	miRadiador3.almacenaje_de_datos();
	miRadiador3.calculo_de_consumo();
	
}