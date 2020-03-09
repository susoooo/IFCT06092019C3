/*
Crea una clase que represente una pizza de la cadena 
de pizzas telesuperpizzaqueloflipas. Dicha clase debe 
guardar información al menos sobre la base elegida, 
los ingredientes seleccionados, y el precio de la misma. 
Crea constructores que permitan crear la pizza sin especificar 
la base (en cuyo caso se escogerá la base "normal"). Crea otro 
constructor que permita crear una pizza sin especificarle el 
precio. En dicho caso, deberá calcular automáticamente el 
precio (en base p.e. del precio de la base escogida y del 
número de ingredientes solicitados). Crea un constructor 
que permita crear una pizza especificando solo los ingredientes 
a utilizar.
*/

#include <iostream>

#define MAX_INGREDIENTES 5

#define MAX_BASE 3

using namespace std;

string ingredientes[MAX_INGREDIENTES]={"Queso","Bacon","Champiñones","Tomate","Aceitunas"};

float precioIngrediente[MAX_INGREDIENTES]={0.50,1.50,0.20,0.20,0.20};

string tamanoBase[MAX_BASE]={"Pequena","Mediana","Grande"};

float precioBase[MAX_BASE]={15.0,18.0,20.0};

class Pizza
{
    private:
        int tipoBase;
        int ingre[MAX_INGREDIENTES];
        float precio;
        void inicializarIn();
        float calcularPrecio();
    public:
        Pizza(int tipo,int in[],float p);
        Pizza(int in[],float p);
        Pizza(int tipo,int in[]);
        Pizza(int in[]);
        void mostrarDatos();
};

Pizza::Pizza(int tipo,int in[],float p)
{
    inicializarIn();
    tipoBase=tipo;
    for(int i=0;i<MAX_INGREDIENTES;i++)
    {
        ingre[i]=in[i];
    }
    precio=p;
}

Pizza::Pizza(int in[],float p)
{
    inicializarIn();
    tipoBase=1;
    for(int i=0;i<MAX_INGREDIENTES;i++)
    {
        ingre[i]=in[i];
    }
    precio=p;
}

Pizza::Pizza(int tipo,int in[])
{
    inicializarIn();
    tipoBase=tipo;
    for(int i=0;i<MAX_INGREDIENTES;i++)
    {
        ingre[i]=in[i];
    }
    precio=calcularPrecio();
}

Pizza::Pizza(int in[])
{
    inicializarIn();
    tipoBase=1;
    for(int i=0;i<MAX_INGREDIENTES;i++)
    {
        ingre[i]=in[i];
    }
    precio=calcularPrecio();
}

void Pizza::mostrarDatos()
{
    cout << "Base: " << tamanoBase[tipoBase] << endl;
    cout << "Ingredientes: ";
    for(int i=0; i<MAX_INGREDIENTES;i++)
    {
        if(ingre[i]!=-1)
        {
            cout << ingredientes[ingre[i]] << " ";
        }
    }
    cout << endl;
    cout << "Precio: " << precio << endl;
}

void Pizza::inicializarIn()
{
    for(int i=0;i<MAX_INGREDIENTES;i++)
    {
        ingre[i]=-1;
    }
}

float Pizza::calcularPrecio()
{
    float precio;
    precio=precioBase[tipoBase];
    for(int i=0; i<MAX_INGREDIENTES;i++)
    {
        if(ingre[i]!=-1)
        {
            precio+=precioIngrediente[ingre[i]];
        }
    }
    return precio;
}

int main()
{
    int in[]={0,1,3,-1,-1};

    Pizza p0(in);

    p0.mostrarDatos();

    Pizza p1(0,in,15);

    p1.mostrarDatos();

    Pizza p2(2,in);

    p2.mostrarDatos();

    return 0;
}
