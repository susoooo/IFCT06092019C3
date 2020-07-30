#include <stdio.h>
#include <math.h>
#include <stdlib.h>

main()
{
int contadorpisos;
int contadorpuertas;
int edificio[6][4];
int mayor;
int suma;
int casa;
int puertas;
char puerta[4]={'A','B','C','D'};


contadorpisos=0;
contadorpuertas=0;
suma=0;
casa=0;
mayor=0;
puertas=0;

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
for(contadorpuertas=0; contadorpuertas<4; contadorpuertas++)
	{
		for(contadorpisos=0;contadorpisos<6;contadorpisos++)
			{
				suma=suma+edificio[contadorpisos][contadorpuertas];
			}
			
		if(mayor<suma)
			{
				mayor=suma;
				puertas=contadorpuertas;	
			}
		
		suma=0;
	}

	printf("La puerta con mas habitantes es: %C con %d personas",puerta[puertas],mayor);
}