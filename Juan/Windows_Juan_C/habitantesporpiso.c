/* Ejercicio 8: Arrays multidimensionales. Edificio1.
Se quiere controlar el número de habitantes de un edificio con 6 pisos y 4 puertas (A,
B, C, y D) en cada piso.
Realizar un programa que pida al usuario que introduzca el número de habitantes de
cada puerta del edificio. El programa debe decir la vivienda (piso y puerta) que más
habitantes tiene del edificio. */

#include <stdio.h>

void main(){

int pisos[6][4];
int masViviendas[6][4];
int contadorPisos;
int contadorPuertas;
int masHab;
int masPisos;
int masPuertas;
int menosHab;
int menosPisos;
int menosPuertas;
char puertas[4]={'A','B','C','D'};
masHab=0;
menosHab=0;

for(contadorPisos=0;contadorPisos<6;contadorPisos++)
{
	for(contadorPuertas=0;contadorPuertas<4;contadorPuertas++)
	{
	printf("Introduce el número de habitantes de la puerta %c en el %dº piso\n", puertas[contadorPuertas], contadorPisos+1);
	scanf("%d", &pisos[contadorPisos][contadorPuertas]);	
	}
}

for(contadorPisos=0;contadorPisos<6;contadorPisos++)
{
	for(contadorPuertas=0;contadorPuertas<4;contadorPuertas++)
	{
		printf("La puerta %c del %dº piso tiene %d habitantes\n", puertas[contadorPuertas], contadorPisos+1, pisos[contadorPisos][contadorPuertas]);
	}
}
// Calcular la vivienda con más habitantes:
	for(contadorPisos=0;contadorPisos<6;contadorPisos++)
	{
		for(contadorPuertas=0;contadorPuertas<4;contadorPuertas++)
	{
		if(masHab<pisos[contadorPisos][contadorPuertas])
		{
			masHab=pisos[contadorPisos][contadorPuertas];
			masPisos=contadorPisos+1;
			masPuertas=contadorPuertas;
		}
		else
		{
		}	
	}
	}
	
	for(contadorPisos=0;contadorPisos<6;contadorPisos++)
	{
		for(contadorPuertas=0;contadorPuertas<4;contadorPuertas++)
		{
			if(masHab==pisos[contadorPisos][contadorPuertas])
			{
				masViviendas[contadorPisos][contadorPuertas];
			}
		}
	}
// Calcular la vivienda con menos habitantes:
	for(contadorPisos=0;contadorPisos<6;contadorPisos++)
	{
		for(contadorPuertas=0;contadorPuertas<4;contadorPuertas++)
	{
		if(menosHab<pisos[contadorPisos][contadorPuertas])
		{
			menosHab=pisos[contadorPisos][contadorPuertas];
			menosPisos=contadorPisos+1;
			menosPuertas=contadorPuertas;
		}
		else
		{
			if(pisos[contadorPisos][contadorPuertas]!=0)
			{
				menosHab=pisos[contadorPisos][contadorPuertas];
			}
		}	
	}	
	}
	
}

