#include <stdio.h>
#include <stdlib.h>
#include <math.h>

main()
{
	int habitantes[6][4];
	
	int contpiso;
	int contcasa;
	int personas;
	// char puerta[4];
	int piso;
	int casa;
	int mayor;
	
	contpiso = 0;
	contcasa = 0;
	personas = 0;
	piso = 0;
	casa = 0;
	mayor = 0;
	
	char puerta[4] = {'A','B','C','D'};
	
	for (contpiso = 0; contpiso < 6; contpiso++)
	{
		for(contcasa = 0; contcasa < 4; contcasa++)
		{
			habitantes[contpiso][contcasa] = rand() % 11;
		}
	}
	
	for (contpiso = 0; contpiso < 6; contpiso++)
	{
		for(contcasa = 0; contcasa < 4; contcasa++)
		{
			printf(" %d -", habitantes[contpiso][contcasa]);
		}
		
		printf("\n");
	}
	
	for (contpiso = 0; contpiso < 6; contpiso++)
	{
		for(contcasa = 0; contcasa < 4; contcasa++)
		{
			if (mayor < habitantes[contpiso][contcasa])
			{
				mayor = habitantes[contpiso][contcasa];
				piso = contpiso;
				casa = contcasa;
			}
		}
	}
	
	printf("\nLa vivienda con mas habitantes del edificio es el: %d-%c con %d personas.",piso+1, letras[puertas], habitantes[piso][casa]);
	
}