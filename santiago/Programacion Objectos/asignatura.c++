#include <iostream>
#include <cstring>
#include <stdlib.h>
using namespace std;

class asignatura
{
	protected:
		char nombre[10];
		int IDcode;
		inicializar();
		float media;
		float media2;
		Datos();

	public:
		asignatura();
		virtual leerNota()=0;
		virtual nota_media()=0;
		virtual mostrarNota()=0;
		~asignatura();
};

class ciencias : public asignatura
{
	protected:
		int notas[5];
		
	public:
		ciencias(){memset(notas,0,5);};
		nota_media();
		leerNota();
		mostrarNota();
		~ciencias(){memset(notas,0,5);};
};

class letras : public asignatura
{
	protected:
		int notas[10];

	public:
		letras(){memset(notas,0,10);};
		nota_media();
		leerNota();
		mostrarNota();
		~letras(){memset(notas,0,10);};
};

class musicas : public asignatura
{
	protected:
		int nota;
		
	public:
		musicas(){nota=0;};
		nota_media();
		leerNota();
		mostrarNota();
		~musicas(){nota=0;};
};

class tecnologias : ciencias
{
	protected:
		int nota_de_practicas[5];

	public:
		tecnologias(){memset(notas,0,5);};
		nota_media();
		leerNota();
		mostrarNota();
		~tecnologias(){memset(notas,0,5);};
};

asignatura::inicializar()
{
	memset(nombre,0,10);
	media=0;
	media2=0;
	IDcode=0;
}

asignatura::asignatura()
{
	inicializar();
}

asignatura::Datos()
{
	cout<<"introducca su nombre"<<endl;
	cin>>nombre;
	cout<<"introducca su codigo de identificacion"<<endl;
	cin>>IDcode;
}
asignatura::~asignatura()
{
	inicializar();
}

ciencias::leerNota()
{
	int contador;
	cout<<"Ciencias"<<endl;
	for(contador=0; contador<5; contador++)
	{
		cout<<"introducca su "<<contador+1<<"nota"<<endl;
		cin>>notas[contador];
	}
}

ciencias::nota_media()
{
	int contador;
	for(contador=0; contador<5; contador++)
	{
		media=media+notas[contador];
	}
	media=media/5;
}

ciencias::mostrarNota()
{
	cout<<"la nota media de ciencias es: "<<media<<endl;
}

letras::leerNota()
{
	int contador;
	cout<<"Letras"<<endl;
	for(contador=0; contador<10; contador++)
	{
		cout<<"introducca su "<<contador+1<<"nota"<<endl;
		cin>>notas[contador];
	}
}

letras::nota_media()
{
	int contador;
	for(contador=0; contador<9; contador++)
	{
		media=media+notas[contador];
	}
	media=((media/9)+notas[9])/2;
}

letras::mostrarNota()
{
	cout<<"la nota media de letras es: "<<media<<endl;
}

musicas::leerNota()
{
	cout<<"Musicas"<<endl;
	cout<<"introducca su nota"<<endl;
	cin>>nota;
}

musicas::nota_media()
{
	if(nota>10)
	{
		nota=nota/10;
	}
}

musicas::mostrarNota()
{
	cout<<"la nota media de musica es: "<<nota<<endl;
}

tecnologias::leerNota()
{
	asignatura::Datos();
	ciencias::leerNota();
	int contador;
	cout<<"Tecnologias"<<endl;
	for(contador=0; contador<5; contador++)
	{
		cout<<"introducca su "<<contador+1<<"nota de practicas"<<endl;
		cin>>nota_de_practicas[contador];
	}
}

tecnologias::nota_media()
{
	ciencias::nota_media();
	int contador;
	for(contador=0; contador<5; contador++)
	{
		media2=media2+nota_de_practicas[contador];
	}
	media2=(media*0.7)+((media2/5)*0.3);
	
}

tecnologias::mostrarNota()
{
	cout<<"la nota media de tecnologia es: "<<media2<<endl;
}

int main()
{
	tecnologias objU0;
	objU0.leerNota();
	objU0.nota_media();
	objU0.mostrarNota();
	
	ciencias objU1;
	objU1.leerNota();
	objU1.nota_media();
	objU1.mostrarNota();
	
	letras objU2;
	objU2.leerNota();
	objU2.nota_media();
	objU2.mostrarNota();
	
	musicas objU3;
	objU3.leerNota();
	objU3.nota_media();
	objU3.mostrarNota();
}