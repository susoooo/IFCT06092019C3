#include <iostream>
#include <stdlib.h>
using namespace std;
class cordenadas
{
	private:
		float x;
		float y;
		float z;

	public:
		void establecidas();
		void mostrarcordenadas();
};

void cordenadas::establecidas(void)
{
	x=rand();
	y=rand();
	z=rand();
}

void cordenadas::mostrarcordenadas()
{
	cout << x << endl;
	cout << y << endl;
	cout << z << endl;
}

int main()
{
	cordenadas miObjeto;
	miObjeto.establecidas();
	miObjeto.mostrarcordenadas();
	
	cordenadas miObjeto2;
	miObjeto2.establecidas();
	miObjeto2.mostrarcordenadas();
	
	cordenadas miObjeto3;
	miObjeto3.establecidas();
	miObjeto3.mostrarcordenadas();
	
}