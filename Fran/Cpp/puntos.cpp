#include <iostream>
#include <windows.h>

using namespace std;

#include <time.h>

class puntos
{
    int coord1;
    int coord2;

    public:
        void dibujarPunto (int horiz, int verti);
};

void dibujarPunto (int coordHor, int coordVer)
{
    COORD coord;

    coord.X = coordHor;
    coord.Y = coordVer;

    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);

    cout << "*";
}

int main()
{
    int posHoriz;
    int posVerti;
    int contador;

    srand(time(NULL));

    for (contador = 0; contador < 3; contador++)
    {
        posHoriz = rand() % 21;
        posVerti = rand() % 30;

        dibujarPunto(posHoriz, posVerti);
    }
    getchar();
}
