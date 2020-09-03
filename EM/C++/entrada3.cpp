/*1-Realizar un programa que pida tres números consecutivos (3, 4 y 5; 9, 10 y 11,
etc.). Cuando se introducen tres números consecutivos dice “gracias” y termina. 
Mientras no se introduzcan tres números consecutivos el programa sigue pidiendo números indefinidamente.*/

#include <iostream>

using namespace std;
int main()
{
    int n1, n2, n3;


do
{
    cout<< "Inserte el primer numero (entero):";
    cin>> n1;
    cout<< "Introduzca el segundo numero (entero):";
    cin>> n2;
    cout<< "Introduzca el tercer numero (entero):";
    cin >> n3;

}
    while (!(n1+1==n2 && n2+1==n3));
        cout<< "Muchas gracias" <<endl;
  

    return 0;
}

