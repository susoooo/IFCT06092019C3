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
	int mayor;
	
	contpiso = 0;
	contcasa = 0;
	piso = 0;
	suma = 0;
	mayor = 0;

	
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
		
		if (mayor < suma)
			{
				mayor = suma;
				piso = contpiso;
			}
			
		suma = 0;
			
	}
	
	printf("\nEl piso con mas habitantes del edificio es el: %d con %d personas.",piso+1, mayor);
	
}