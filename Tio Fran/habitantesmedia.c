#include <stdio.h>
#include <stdlib.h>
#include <math.h>

main()
{
	int habitantes[6][4];
	
	int contpiso;
	int contcasa;

	int piso;
	int suma;
	float media;
	
	contpiso = 0;
	contcasa = 0;
	piso = 0;
	suma = 0;
	media = 0;

	
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
			suma = suma + habitantes[contpiso][contcasa];
		}
		
		printf("\n %d \n", suma);
		media = (float) suma / 4;
		suma = 0;
		
		printf("\nLa media de habitantes del piso: %d es de %.2f personas.",piso+1, media);
	
	}
	
	
}