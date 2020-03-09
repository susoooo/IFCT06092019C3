/*
3-Realice un programa que cree una forma, cambie su color y la mueva cinco puntos hacia la derecha.
*/

#include <iostream>
#include "lib/forma.h"

using namespace std;

int main(void)
{
	class Forma newForm(Rojo, 3.0,4.5,"Cacharro");
	
	newForm.print();
	
	newForm.setColor(Negro);
	newForm.moveForm(5.0f,0.0f);
	
	newForm.print();
	
	return(0);
}
