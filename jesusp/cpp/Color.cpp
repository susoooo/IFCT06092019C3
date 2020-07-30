#include <iostream>
#include <cstring>
using namespace std;

class Forma
{
protected:
char color[20];
int punto;
char *forma;

public:
Forma();
char OBcolor();
char cambiarColor(char *col);
void moverForma(int punt);
};

class Rectangulo:public Forma
{
    public:
    Rectangulo(int lmen, int lmay);
    Rectangulo(char *col, int p, char *fo, int lmen, int lmay);
    Rectangulo
};

char Forma::OBcolor()
{
    return *color;

}

char Forma::cambiarColor(char *col)
{
    strcpy(color, col);

}

void Forma::moverForma(int punt)
{
    punto = punt;
}

void main()
{

}
