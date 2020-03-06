/*
4-Crea una clase que represente una pizza de la cadena de pizzas telesuperpizzaqueloflipas. Dicha clase debe guardar información al menos sobre la base elegida, los ingredientes seleccionados, y el precio de la misma. Crea constructores que permitan crear la pizza sin especificar la base (en cuyo caso se escogerá la base "normal"). Crea otro constructor que permita crear una pizza sin especificarle el precio. En dicho caso, deberá calcular automáticamente el precio (en base p.e. del precio de la base escogida y del número de ingredientes solicitados). Crea un constructor que permita crear una pizza especificando solo los ingredientes a utilizar.

5-Crea un destructor de la pizza que imprima un mensaje con el precio de la pizza y diciendo que se va a destruir. Crea otro destructor que guarde el precio de la pizza en un archivo de texto antes de destruir el objeto. 
*/

#ifndef PIZZA_H
#define PIZZA_H

#include <iostream>
#include <string>
#include <fstream>
#define INGRPRIZE 0.50f
#define NORMPRIZE 5.00f
#define FINPRIZE 5.50f
#define RELLPRIZE 7.00f


using namespace std;

enum base {Normal, Fina, Rellena};
enum ingr {Ninguno, Peperonni, Queso, Tomate, Bacon, Jamon, Anchoas, Pina};

class Pizza
{
	base baseSelect;
	ingr ingrSelect[5];
	float prize;
	
	void createPizza(base nBase, ingr ingr1, ingr ingr2, ingr ingr3, ingr ingr4, ingr ingr5, float prize);
	float PrizeCalculator(void);
	string getbasename(void);
	string getingrname(ingr ingred);
	
	public:
	Pizza(base nBase, ingr ingr1, ingr ingr2, ingr ingr3, ingr ingr4, ingr ingr5, float prize);
	Pizza(ingr ingr1, ingr ingr2, ingr ingr3, ingr ingr4, ingr ingr5, float prize);
	Pizza(base nBase, ingr ingr1, ingr ingr2, ingr ingr3, ingr ingr4, ingr ingr5);
	Pizza(ingr ingr1, ingr ingr2, ingr ingr3, ingr ingr4, ingr ingr5);
	~Pizza(void);
			
	void print(void);
};

void Pizza::createPizza(base nBase, ingr ingr1, ingr ingr2, ingr ingr3, ingr ingr4, ingr ingr5, float fprize)
{
	baseSelect=nBase;
	ingrSelect[0]=ingr1;
	ingrSelect[1]=ingr2;
	ingrSelect[2]=ingr3;
	ingrSelect[3]=ingr4;
	ingrSelect[4]=ingr5;
	if(fprize<0)
		prize=PrizeCalculator();
	else
		prize=fprize;
	
}

Pizza::Pizza(base nBase, ingr ingr1, ingr ingr2, ingr ingr3, ingr ingr4, ingr ingr5, float prize)
{
	createPizza(nBase,ingr1,ingr2,ingr3,ingr4,ingr5,prize);
}

Pizza::Pizza(ingr ingr1, ingr ingr2, ingr ingr3, ingr ingr4, ingr ingr5, float prize)
{
	createPizza(base::Normal,ingr1,ingr2,ingr3,ingr4,ingr5,prize);
}

Pizza::Pizza(base nBase, ingr ingr1, ingr ingr2, ingr ingr3, ingr ingr4, ingr ingr5)
{
	createPizza(nBase,ingr1,ingr2,ingr3,ingr4,ingr5,-1);
}

Pizza::Pizza(ingr ingr1, ingr ingr2, ingr ingr3, ingr ingr4, ingr ingr5)
{
	createPizza(base::Normal,ingr1,ingr2,ingr3,ingr4,ingr5,-1);
}

Pizza::~Pizza(void)
{
	cout << "Se va a destruir la pizza por " << prize << " maravedies." << endl;
	ofstream out("PizzaPrizes.pp", ofstream::app);
	int n;
	out << "PIZZA:" << endl;
	out << "Base: " << getbasename() << endl;
	out << "Ingredientes: ";
	for(n=0;n<5;n++)
		if(ingrSelect[n]!=Ninguno) out << getingrname(ingrSelect[n]) << " ";
	out << endl;
	out << "Precio: " << prize << " maravedies." << endl;
	out << "-------------------------------------------" << endl;
    out.close();
}

float Pizza::PrizeCalculator(void)
{
	float prize;
	int n;
	prize = 0.0f;
	switch(baseSelect)
	{
		case Normal: prize += NORMPRIZE; break;
		case Fina: prize += FINPRIZE; break;
		case Rellena: prize += RELLPRIZE; break;
	}
	for(n=0;n<5;n++)
	{
		if(ingrSelect[n]!=ingr::Ninguno) prize += INGRPRIZE;
	}
	return(prize);
}

string Pizza::getbasename(void)
{
	switch(this->baseSelect)
	{
		case Normal: return("Normal");
		case Fina: return("Fina");
		case Rellena: return("Rellena");
	}
}

string Pizza::getingrname(ingr ingred)
{
	switch(ingred)
	{
		case Ninguno: return("");
		case Peperonni: return("Peperonni");
		case Queso: return("Queso");
		case Tomate: return("Tomate");
		case Bacon: return("Bacon");
		case Jamon: return("Jamon");
		case Anchoas: return("Anchoas");
		case Pina: return("Piña");
	}
}

void Pizza::print(void)
{
	int n;
	cout << "PIZZA:" << endl;
	cout << "Base: " << getbasename() << endl;
	cout << "Ingredientes: ";
	for(n=0;n<5;n++)
		if(ingrSelect[n]!=Ninguno) cout << getingrname(ingrSelect[n]) << " ";
	cout << endl;
	cout << "Precio: " << prize << " maravedies." << endl;
	cout << "-------------------------------------------" << endl;
}

#endif
