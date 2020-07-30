#include <iostream>

using namespace std;

class Punto
{

    int x;
    int y;
    int z;

    public:
    void cambiarx(int a);
    void cambiary(int b);
    void cambiarz(int c);
};

void Punto::cambiarx(int a)
{
    x = a;
}

void Punto::cambiary(int b)
{
    y = b;
}

void Punto::cambiarz(int c)
{
    z = c;
}

int main()
{

    int e;
    int f;
    int g;

    Punto obj;
    cout << "Dame un numero:";
    cin >> e;
    cout << "Dame un segundo numero:";
    cin >> f;
    cout << "Dame un tercer numero:";
    cin >> g;

    obj.cambiarx(e);
    obj.cambiary(f);
    obj.cambiarz(g);


    cout << "Las coordenadas son: "<< "\n" << e << "\n" <<  f <<"\n" << g;
    cout << endl;
    return 0;

}
