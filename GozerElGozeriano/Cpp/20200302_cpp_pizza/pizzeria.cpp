/*
4-Crea una clase que represente una pizza de la cadena de pizzas telesuperpizzaqueloflipas. Dicha clase debe guardar información al menos sobre la base elegida, los ingredientes seleccionados, y el precio de la misma. Crea constructores que permitan crear la pizza sin especificar la base (en cuyo caso se escogerá la base "normal"). Crea otro constructor que permita crear una pizza sin especificarle el precio. En dicho caso, deberá calcular automáticamente el precio (en base p.e. del precio de la base escogida y del número de ingredientes solicitados). Crea un constructor que permita crear una pizza especificando solo los ingredientes a utilizar.

5-Crea un destructor de la pizza que imprima un mensaje con el precio de la pizza y diciendo que se va a destruir. Crea otro destructor que guarde el precio de la pizza en un archivo de texto antes de destruir el objeto. 
*/

#include <iostream>
#include <string>
#include "lib/pizza.h"

using namespace std;

int main(void)
{
	class Pizza pizz1(Normal, Peperonni, Pina, Queso, Tomate, Ninguno, 9.99f);
	class Pizza pizz2(Peperonni, Pina, Queso, Tomate, Ninguno, 11.99f);
	class Pizza pizz3(Rellena, Pina, Anchoas, Tomate, Ninguno, Ninguno);
	class Pizza pizz4(Peperonni, Anchoas, Queso, Tomate, Pina);
	
	pizz1.print();
	pizz2.print();
	pizz3.print();
	pizz4.print();
	return(0);
}
