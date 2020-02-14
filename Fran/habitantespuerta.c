<<<<<<< HEAD
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

main()
{
	int habitantes[6][4];
	
	int contpiso;
	int contcasa;

	int suma;
	int mayor;
	int letra;
	
	contpiso = 0;
	contcasa = 0;
	suma = 0;
	mayor = 0;
	letra = 0;

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
	
	
	for(contcasa = 0; contcasa < 4; contcasa++)
	{
		for (contpiso = 0; contpiso < 6; contpiso++)
		{
			suma = suma + habitantes[contpiso][contcasa];
		}
		
		printf("\n %d \n", suma);
		
		if (mayor < suma)
			{
				mayor = suma;
				letra = contcasa;
			}
			
		suma = 0;
			
	}
	
	printf("\nLa letra con mas habitantes del edificio es el: %c con %d personas.", puerta[letra], mayor);
	
=======
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

main()
{
	int habitantes[6][4];
	
	int contpiso;
	int contcasa;

	int suma;
	int mayor;
	int letra;
	
	contpiso = 0;
	contcasa = 0;
	suma = 0;
	mayor = 0;
	letra = 0;

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
	
	
	for(contcasa = 0; contcasa < 4; contcasa++)
	{
		for (contpiso = 0; contpiso < 6; contpiso++)
		{
			suma = suma + habitantes[contpiso][contcasa];
		}
		
		printf("\n %d \n", suma);
		
		if (mayor < suma)
			{
				mayor = suma;
				letra = contcasa;
			}
			
		suma = 0;
			
	}
	
	printf("\nLa letra con mas habitantes del edificio es el: %c con %d personas.", puerta[letra], mayor);
	
>>>>>>> 8bc0b13d6df47f49e7d86b65488d04536bd6d34b
}