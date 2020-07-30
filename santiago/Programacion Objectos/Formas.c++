#include <iostream>
#include <cstring>
#include <stdlib.h>
using namespace std;

class cordenadas
{
	private:
	
		float x;
		float y;
		float z;

	public:
		cordenadas();
		establecidas();
		obtencionx();
		obtenciony();
		obtencionz();
		cambiarx(float argx);
		cambiary(float argy);
		cambiarz(float argz);
		~cordenadas();
};

class Forma
{
	protected:
		char Color[10];
		inicializar();
		cordenadas FCoord;//FCoord es un objeto de la clase cordenadas
		char nombreDforma[10];
		float Area;
		float perimetro;
		
	public:
		Forma();
		Datoforma();
		Imprimir();
		ObtenerColor();
		CambiarColor();
		MoverLaForma();
		~Forma();
};



class rectangulo : public Forma
{
	protected:
		float LadoMenor;
		float LadoMayor;
		//float Area;
		//float perimetro;
		inicializar();
		
	public:
		rectangulo();
		Ladosrand();
		Imprimir();
		CalcularElArea();
		CalcularElPerimetro();
		CambiarElTamano();//Cambiar el tamaño del rectángulo.
		~rectangulo();
};

class cuadrado : public rectangulo
{
	public:
		cuadrado();
		Ladosrand();
		Imprimir();
		~cuadrado();
};

class elipse : public Forma
{
	protected:
		float radioMayor;
		float radioMenor;
		inicializar();

	public:
		elipse();
		Datos();
		calcuArea();
		imprimir();
		~elipse();
};

class circulo : public elipse
{
	public:
		circulo();
		Datos();
		imprimir();
		~circulo();
};

cordenadas::cordenadas()
{
	establecidas();
}

cordenadas::establecidas()
{
	x=0, y=0, z=0;
	x=rand();
	y=rand();
	z=rand();
}

cordenadas::obtencionx()
{
	return(x);
}

cordenadas::obtenciony()
{
	return(y);
}

cordenadas::obtencionz()
{
	return(z);
}

cordenadas::cambiarx(float argx)
{
	x=argx;
}

cordenadas::cambiary(float argy)
{
	y=argy;
}

cordenadas::cambiarz(float argz)
{
	z=argz;
}

cordenadas::~cordenadas()
{
	x=0;
	y=0;
	z=0;
}

Forma::Forma()
{
	inicializar();
}

Forma::inicializar()
{
	memset(Color,0,10);
	memset(nombreDforma,0,10);
}

Forma::Datoforma()
{
	cout<<"Introducca la forma de objeto"<<endl;
	cin>>nombreDforma;
}

Forma::Imprimir()
{

	cout<<"El objeto es un "<<nombreDforma<<endl;
	cout<<"De color "<<Color<<endl;
	cout<<"Su centro es:"<<endl;
	cout<<"x= "<<FCoord.obtencionx()<<endl;
	cout<<"y= "<<FCoord.obtenciony()<<endl;
	cout<<"z= "<<FCoord.obtencionz()<<endl;
}

Forma::ObtenerColor()
{
	cout<<"El color es"<<endl;
	cout<<Color<<endl;
}

Forma::CambiarColor()
{
	memset(Color,0,10);
	cout<<"Introducca el color"<<endl;
	cin>>Color;
}

Forma::MoverLaForma()
{
	float posicionx=0, posiciony=0, posicionz=0;
	cout<<"introducca la coordenada x"<<endl;
	cin>>posicionx;
	
	cout<<"introducca la coordenada y"<<endl;
	cin>>posiciony;
	
	cout<<"introducca la coordenada z"<<endl;
	cin>>posicionz;
	
	float argx=0, argy=0, argz=0; 
	
	argx=posicionx*FCoord.obtencionx();
	FCoord.cambiarx(argx);
	
	argy=posiciony*FCoord.obtenciony();
	FCoord.cambiary(argy);
	
	argz=posicionz*FCoord.obtencionz();
	FCoord.cambiarz(argz);
}

Forma::~Forma()
{
	inicializar();
}

rectangulo::rectangulo()
{
	inicializar();
}

rectangulo::inicializar()
{
	LadoMayor=0;
	LadoMenor=0;
	Area=0;
	perimetro=0;
}

rectangulo::Ladosrand()
{
	LadoMayor=rand();
	LadoMenor=rand();
}

rectangulo::Imprimir()
{
	cout<<"Su lado mayor es "<<LadoMayor<<endl;
	cout<<"Su lado menor es "<<LadoMenor<<endl;	
}

rectangulo::CalcularElArea()
{
	Area=LadoMayor*LadoMenor;
}

rectangulo::CalcularElPerimetro()
{
	perimetro=(2*LadoMayor)+(2*LadoMenor);
}

rectangulo::CambiarElTamano()
{
	float factorDescala;
	factorDescala=0;
	
	cout<<"introducca el factor de escala"<<endl;
	cin>>factorDescala;
	LadoMayor=LadoMayor*factorDescala;
	LadoMenor=LadoMenor*factorDescala;
	cout<<"tamano cambiado"<<endl;
}

rectangulo::~rectangulo()
{
	inicializar();
}

elipse::elipse()
{
	inicializar();
}

elipse::inicializar()
{
	radioMayor=0;
	radioMenor=0;
}

elipse::Datos()
{
	cout<<"introducca el tamano del radio mayor"<<endl;
	cin>>radioMayor;
	cout<<"introducca el tamano del radio menor"<<endl;
	cin>>radioMenor;
}

elipse::calcuArea()
{
	Area=3.141516*(radioMayor*radioMenor);
}

elipse::imprimir()
{
	cout<<"El area de la elipse es "<<Area<<endl;
}

elipse::~elipse()
{
	inicializar();
}

cuadrado::cuadrado()
{
	inicializar();
}

cuadrado::Ladosrand()
{
	LadoMayor=rand();
	LadoMenor=LadoMayor;
}

cuadrado::Imprimir()
{
	cout<<"Su lado es "<<LadoMenor<<endl;	
}

cuadrado::~cuadrado()
{
	LadoMayor=0;
	LadoMayor=0;
}

circulo::circulo()
{
	inicializar();
}

circulo::Datos()
{
	cout<<"introducca el tamano del radio"<<endl;
	cin>>radioMayor;
	radioMenor=radioMayor;
}

circulo::imprimir()
{
	cout<<"El area de la circulo es "<<Area<<endl;
}

circulo::~circulo()
{
	inicializar();
}

int main()
{
	char Cc;
	
	Forma objforma;
	objforma.Datoforma();
	objforma.Imprimir();
	objforma.ObtenerColor();
	
	Cc=0;
	cout<<"Quiere cambiar el color pulse c"<<endl;
	cin>>Cc;
		
		if(Cc=='c')
			{objforma.CambiarColor();}
	
	Cc=0;
	cout<<"Quiere morver la forma pulse M"<<endl;
	cin>>Cc;
	
		if(Cc=='M')
			{objforma.MoverLaForma();}
	
	rectangulo Objrectangulo;
	Objrectangulo.Ladosrand();
	Objrectangulo.Imprimir();
	Objrectangulo.CalcularElArea();
	Objrectangulo.CalcularElPerimetro();
	Objrectangulo.CambiarElTamano();
	
	elipse Objelipse;
	Objelipse.Datos();
	Objelipse.calcuArea();
	Objelipse.imprimir();
	
	cuadrado Objcuadrado;
	Objcuadrado.Ladosrand();
	Objcuadrado.Imprimir();
	Objcuadrado.CalcularElArea();
	Objcuadrado.CalcularElPerimetro();
	Objcuadrado.CambiarElTamano();
	
	circulo Objcirculo;
	Objcirculo.Datos();
	Objcirculo.calcuArea();
	Objcirculo.imprimir();

}