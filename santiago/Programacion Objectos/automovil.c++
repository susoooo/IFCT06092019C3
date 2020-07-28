#include <iostream>
using namespace std;
class automovil
{
	private:
	bool enendido=0;
	bool apagado;
	bool abierto=0;
	bool cerrado;
	int velocidad;
	bool acelerar;
	bool frenar;
	const int p_radar=100;
	
	public:
	int menu;
	bool encender_auto();
	bool apagar_auto();
	bool abrir_auto();
	bool cerrar_auto();
	int velocidad_auto();

}

bool automovil::encender_auto()
{
	if(apagado && abierto && velocidad==0)
	{
		encendido=true;
		apagado=false;
		return(true);
	}
	else
	{
		return(false);
	}
}

bool automovil::apagar_auto()
{
	if(encendido && velocidad==0)
	{
		encendido=false
		apagado==true
		return(true);
	}
	else
	{
		return(false);
	}
}

bool automovil::abrir_auto()
{
	if(apagado && cerrado && velocidad==0)
	{
		abierto=false;
		cerrado=true;
		return(true);
	}
	else
	{
		return(false);
	}
}
bool automovil::cerrar_auto()
{
	if(abierto && apagado && velocidad==0)
	{
		cerrado=true;
		abierto=false;
		return(true);
	}
	else
	{
		return(false);
	}
}

int automovil::velocidad_auto()
{
	int contador;
	if(encendido && abierto)
	{
		if(acelerar)
		{
			for(contador=0; velocidad<400; contador++)
			{
				velocidad=contador
			}
		}
		else
		{
			if(frenar)
			{
				for(contador=0; velocidad>0; contador++)
				{
					velocidad=velocidad-contador
				}
			}
		}
	}
}

int main()
{
	automovil coche;
	cout << "encender=0" <<endl << "apagar=1"<<endl <<"abrir=2" <<endl <<"cerrar=3" <<endl <<"accelerar=+" <<endl <<"frenar=-" <<endl;
	
	do
	{
		cin >> menu;
		
		if(menu==0 && apagar_auto)
		{
			coche.encender_auto();
		
		}
		
		if(menu==1)
		{
			coche.apagar_auto();
		}
		
		if(menu==2 && cerrar_auto)
		{
			abrir_auto();
		}
		
		if(menu==3)
		{
			cerrar_auto();
		}
		
		if(menu==+)
		{
			velocidad_auto();
			frenar=false;
			acelerar=true;
		}
		
		if(menu==-)
		{
			velocidad_auto();
			acelerar=false;
			frenar=true;
		}

	}
	while(coche.cerrar_auto);
	
	
}