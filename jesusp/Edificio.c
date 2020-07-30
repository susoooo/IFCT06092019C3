#include <stdio.h>
#include <math.h>
#include <stdlib.h>

main()
{
int contadorpisos;
int contadorpuertas;
int edificio[6][4];
int piso;
int mayor;
int casa;
char puerta[4]={'A','B','C','D'};

piso=0;
contadorpisos=0;
contadorpuertas=0;
mayor=0;
piso=0;
casa=0;

for(contadorpisos=0; contadorpisos<6; contadorpisos++)
	{
		for(contadorpuertas=0;contadorpuertas<4;contadorpuertas++)
		{
			edificio[contadorpisos][contadorpuertas]=rand()%11;
		}
	}
for(contadorpisos=0; contadorpisos<6; contadorpisos++)
	{
		for(contadorpuertas=0;contadorpuertas<4;contadorpuertas++)
		{
			printf(" %d - ", edificio[contadorpisos][contadorpuertas]);
		}
		printf("\n");
	}
for(contadorpisos=0; contadorpisos<6; contadorpisos++)
	{
		for(contadorpuertas=0;contadorpuertas<4;contadorpuertas++)
		{
			mayor=edificio[contadorpisos][contadorpuertas];
			piso=contadorpisos;
			casa=contadorpuertas;
		}
		
	}
	printf("El piso con mas habitantes es: %d-%c con %d personas",piso+1,casa[puerta],mayor);
}