#include <stdio.h>
#include <math.h>
#include <stdlib.h>

main()
{
int contadorpisos;
int contadorpuertas;
int edificio[6][4];
int suma;
int media;
int puertas;
char puerta[4]={'A','B','C','D'};


contadorpisos=0;
contadorpuertas=0;
suma=0;
puertas=0;
media=0;

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
for(contadorpisos=0; contadorpisos<1; contadorpisos++)
	{
		for(contadorpuertas=1;contadorpuertas<=4;contadorpuertas++)
			{
                suma=suma+edificio[contadorpisos][contadorpuertas];
                puertas=contadorpuertas;
			}
		media=suma/puertas;
		printf("La media del primer piso es: %d personas",media);
	}
suma=0;
media=0;
for(contadorpisos=1; contadorpisos<2; contadorpisos++)
	{
		for(contadorpuertas=1;contadorpuertas<=4;contadorpuertas++)
			{
                suma=suma+edificio[contadorpisos][contadorpuertas];
                puertas=contadorpuertas;
			}
		media=suma/puertas;
		printf("\nLa media del segundo piso es: %d personas",media);
	}
suma=0;
media=0;
for(contadorpisos=2; contadorpisos<3; contadorpisos++)
	{
		for(contadorpuertas=1;contadorpuertas<=4;contadorpuertas++)
			{
                suma=suma+edificio[contadorpisos][contadorpuertas];
                puertas=contadorpuertas;
			}
		media=suma/puertas;
		printf("\nLa media del tercer piso es: %d personas",media);
	}
suma=0;
media=0;
for(contadorpisos=3; contadorpisos<4; contadorpisos++)
	{
		for(contadorpuertas=1;contadorpuertas<=4;contadorpuertas++)
			{
                suma=suma+edificio[contadorpisos][contadorpuertas];
                puertas=contadorpuertas;
			}
		media=suma/puertas;
		printf("\nLa media del cuarto piso es: %d personas",media);
	}
suma=0;
media=0;
for(contadorpisos=4; contadorpisos<5; contadorpisos++)
	{
		for(contadorpuertas=1;contadorpuertas<=4;contadorpuertas++)
			{
                suma=suma+edificio[contadorpisos][contadorpuertas];
                puertas=contadorpuertas;
			}
		media=suma/puertas;
		printf("\nLa media del quinto piso es: %d personas",media);
	}
suma=0;
media=0;
for(contadorpisos=5; contadorpisos<6; contadorpisos++)
	{
		for(contadorpuertas=1;contadorpuertas<=4;contadorpuertas++)
			{
                suma=suma+edificio[contadorpisos][contadorpuertas];
                puertas=contadorpuertas;
			}
		media=suma/puertas;
		printf("\nLa media del sexto piso es: %d personas",media);
	}
}
