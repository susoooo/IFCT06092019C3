#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
int cifra1;
int cifra2;
int cifra3;

cout << "Dame un numero:";
cin >> cifra1;
cout << "Dame otro numero:";
cin >> cifra2;

while (cifra2!=cifra1+1)
    {
      cout <<"Dame un numero consecutivo:";
      cin >> cifra2;
    }
cout << "Dame un tercer numero: ";
cin >> cifra3;

if (cifra3=!cifra2+1)
{
    cout << "Dame un tercer numero:";
    cin >> cifra3;
}

cout << "Gracias. Lo has conseguido.";
}




