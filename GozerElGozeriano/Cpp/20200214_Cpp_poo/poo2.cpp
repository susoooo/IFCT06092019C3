/*
2-Crea una clase que represente un punto en el espacio.
Crea tres objetos puntos y posicionalos en el espacio de forma aleatoria.
*/

#include <iostream>
#include <time.h>
#define TOTALPOINTS 3
#define MAXSIZE 20

using namespace std;

class point
{
	float x;
	float y;
	
	public:
		void createRandomPoint();
		void printPoint();
		bool inPoint(int,int);
};

void point::createRandomPoint()
{
	x = rand()%MAXSIZE;
	y = rand()%MAXSIZE;
}

void point::printPoint()
{
	cout << "X=" << x << endl;
	cout << "Y=" << y << endl;
}

bool point::inPoint(int x1,int y2)
{
	if(x1==x && y2==y) return true;
	return false;
}

int main(void)
{
	int contador;
	int contador2;
	int contador3;
	class point points[TOTALPOINTS];
	
	srand((unsigned int)time(NULL));
	
	for(contador=0;contador<TOTALPOINTS;contador++)
		points[contador].createRandomPoint();
		
	for(contador=0;contador<TOTALPOINTS;contador++)
		points[contador].printPoint();
		
	for(contador=MAXSIZE;contador>0;contador--)
	{
		cout << "|";
		for(contador2=0;contador2<MAXSIZE;contador2++)
		{
			for(contador3=0;contador3<TOTALPOINTS;contador3++)
			{
				if(points[contador3].inPoint(contador2,contador))
				{
					cout << "*";
					contador3=TOTALPOINTS;
				}
				else
				{
					cout << " ";
				}
			}
		}
		cout << endl;
	}
	for(contador=0;contador<MAXSIZE;contador++)
		cout << "--";
	cout << endl;
}
