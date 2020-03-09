/* 1-Realizar un programa que pida tres números consecutivos (3, 4 y 5; 9, 10 y 11, etc.).
Cuando se introducen tres números consecutivos dice “gracias” y termina. 
Mientras no se introduzcan tres números consecutivos el programa sigue pidiendo números indefinidamente. */

#include <iostream>

using namespace std;

int main()
 {

int cuota;
int inicial;
int numero1;
int numero2;
int numero3;


do 
{
	cout << endl << "Inserte el primer número: "; 
	cin >> numero1;

	cout << endl << "Inserte el segundo número: "; 
	cin >> numero2;

	cout << endl << "Inserte el tercer número: "; 
	cin >> numero3;
	
	
	

}

while(!(numero1+1==numero2 && numero2+1==numero3));

cout << endl << "gracias " << endl;


return 0;

 }




