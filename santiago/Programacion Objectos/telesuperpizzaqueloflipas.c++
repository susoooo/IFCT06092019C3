#include <iostream>
#include <cstring>
#include <stdlib.h>
using namespace std;

class pizza{
	private:

		char base[10];
		char ingredientes[10][10];
		int precio;
		void inicializar();
	
	public:

		pizza(char ingre[10], int pre);
		pizza(char bas[10], char ingre[10]);
		pizza(char ingre[10]);
		~pizza();
}

pizza::inicializar()
{
	memset(base,0,10);
	memset(ingredientes,0,10);
	precion=0;

}

pizza::pizza(char ingre[10][10], int pre)
{
	strcpy(ingredientes,ingre);
	precio=pre;
}

pizza::pizza(char bas[10], char ingre[10])
{
	
}

