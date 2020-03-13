/*1-Defina una clase Forma que tenga los siguientes miembros de datos:
	- Color
	- Coordenada del centro de la forma (objeto Punto)
	- Nombre de la forma (char *)
  Y, al menos, las siguientes funciones miembro:
	- Imprimir
	- Obtener y cambiar el color
	- Mover la forma (o sea, su centro)

 Defina una clase hija Rectangulo que tenga los siguientes miembros como datos:
	- Lado menor.
	- Lado mayor.

  Y, al menos, las siguientes funciones miembro:
	- Imprimir. Debe imprimir qué se trata de un rectángulo mostrando su nombre,
	color, centro y lado. Debería usarse la función Imprimir
	de la clase base para realizar parte de este trabajo.

	- Calcular el área (lado menor * lado mayor).

	- Calcular el perímetro. (2 * lado menor + 2 * lado mayor).

	- Cambiar el tamaño del rectángulo. Recibe como parámetro un factor de escala.


	Así, por ejemplo, si el factor vale 2,
	 el rectángulo duplicará su tamaño y si es 0,5 se reducirá a la mitad.

Realice un programa que pruebe el funcionamiento de estas clases.
Debe crear objetos y comprobar el correcto funcionamiento de las funciones miembro.

*/


#include <iostream>
#include <string.h>

using namespace std;


struct coordenadas
{
    float coord_x;
    float coord_y;
};

class Forma
{

protected:

    string Color;
    struct coordenadas centro;
    string Nombre;

public:

    Forma();
    Forma(string col,struct coordenadas cent, string Nom);

     void Imprimir();


     fijarcolor(string col);
     string sacarcolor();

     fijarpunto (struct coordenadas cent);
};


Forma::Forma()
{
    Color= "";
    centro.coord_x = 0.0;
    centro.coord_y = 0.0;
    Nombre= "";
}

Forma::Forma(string col,struct coordenadas cent, string Nom)

{
    Color= col;
    centro.coord_x = cent.coord_x;
    centro.coord_y = cent.coord_y;
    Nombre= Nom;
}

void Forma::Imprimir()
{
    cout << "Color: " <<Color<< endl;
    cout << "Coordenada del centro de la forma: " <<centro.coord_x<<","<<centro.coord_y<< endl;
    cout << "Nombre de la forma: " <<Nombre<< endl;
}


Forma::fijarcolor(string col)
{
    Color = col;
}

string Forma::sacarcolor()
{
    return(Color);
}

Forma::fijarpunto(struct coordenadas cent)
{
    centro = cent;
}


class Rectangulo : public Forma
{
protected:

    float lmayor;
    float lmenor;

public:

    Rectangulo();
    Rectangulo(float mayor, float menor);

    void Imprimir();


    float calculoarea()
    {
       float area;
       area = 0.0;

        area = lmayor * lmenor;

        return (area);
    }

       float calculoperimetro()
    {
       float perimetro;
       perimetro = 0.0;

        perimetro = 2 * lmayor + 2 * lmenor;

        return (perimetro);
    }

    void fijarescala(float escala)
    {
        lmayor= lmayor * escala;
        lmenor= lmenor * escala;
    }

     float sacarescala();
};


 Rectangulo::Rectangulo()
{
    lmayor=  0.0;
    lmenor = 0.0;
}

Rectangulo::Rectangulo(float mayor, float menor)

{
    lmayor=  mayor;
    lmenor = menor;
}


  void  Rectangulo::Imprimir()
{
    cout << "Color: " <<Color<< endl;
    cout << "Coordenada del centro de la forma: " <<centro.coord_x<<","<<centro.coord_y<< endl;
    cout << "Nombre de la forma: " <<Nombre<< endl;
    cout << "Lado mayor " << lmayor<< endl;
    cout << "Lado menor " << lmenor << endl;
}

main()
{
    struct coordenadas centro;

    centro.coord_x = 5.0;
    centro.coord_y = 2.5;


cout << "Programas formas " << endl;

Forma redonda ("azul",centro,"redonda");

redonda.fijarcolor("rojo");
redonda.Imprimir();

    centro.coord_x = 4.0;
    centro.coord_y = 2.2;

redonda.fijarpunto(centro);

redonda.Imprimir();


}

































