// 1-Realizar un programa que pida que se tres números consecutivos (3, 4 y 5; 9, 10 y 11,etc.). Cuando se introducen tres números consecutivos dice “gracias” y termina. Mientras no se introduzcan tres números consecutivos el programa sigue pidiendo números indefinidamente.

#include <iostream>

using namespace std;

int main(void)
{
  string a,b,c;
  int status;

  status = 0;

  while(status==0){
    cout << "N1? ";
    cin >> a;
    cout << "N2? ";
    cin >> b;
    cout << "N3? ";
    cin >> c;

    
    if (stoi(a) && stoi(b) && stoi(c)) {
        status = 1;
    }
    else {
      a = '\0';
      b = '\0';
      c = '\0';
    }
  }

  cout << "Your numbers are: " << a << "," << b << "," << c << endl;
  return 0;
}



