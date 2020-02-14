<<<<<<< HEAD
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int numeros[10];
	int * pNumeros;
	int contador;
	
	int media;
	
	media = 0;
	
	pNumeros = &numeros[0];
	
	int * pMayor;
	int * pMenor;
	
	pMayor = &numeros[0];
	pMenor = &numeros[0];	
	
	printf("Calculo de mayor y menor con punteros\n");
	printf("Version 1.0\n");
	
	for (contador = 0; contador < 10; contador++)
	{
		numeros[contador] = (rand() % 101);
	}

	for (contador = 0; contador < 10; contador++)
	{
		if (*pMayor < pNumeros[contador])
		{
			pMayor = &pNumeros[contador];
		}
		
		if (*pMenor > pNumeros[contador])
		{
			pMenor = &pNumeros[contador];
		}
		
		media = media + pNumeros[contador];
	}
	
	for (contador = 0; contador < 10; contador++)
	{
		printf("%d, ", numeros[contador]);
	}
	
	media = media / 10;
	
	printf("\nEl numero mayor es: %d \nEl numero menor es: %d \n y la media es: %d", *pMayor, *pMenor, media);

	printf("\n\n Ejecucion finalizada. Gracias por su cooperacion, humano\n");
	
	return(0);
=======
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int numeros[10];
	int * pNumeros;
	int contador;
	
	int media;
	
	media = 0;
	
	pNumeros = &numeros[0];
	
	int * pMayor;
	int * pMenor;
	
	pMayor = &numeros[0];
	pMenor = &numeros[0];	
	
	printf("Calculo de mayor y menor con punteros\n");
	printf("Version 1.0\n");
	
	for (contador = 0; contador < 10; contador++)
	{
		numeros[contador] = (rand() % 101);
	}

	for (contador = 0; contador < 10; contador++)
	{
		if (*pMayor < pNumeros[contador])
		{
			pMayor = &pNumeros[contador];
		}
		
		if (*pMenor > pNumeros[contador])
		{
			pMenor = &pNumeros[contador];
		}
		
		media = media + pNumeros[contador];
	}
	
	for (contador = 0; contador < 10; contador++)
	{
		printf("%d, ", numeros[contador]);
	}
	
	media = media / 10;
	
	printf("\nEl numero mayor es: %d \nEl numero menor es: %d \n y la media es: %d", *pMayor, *pMenor, media);

	printf("\n\n Ejecucion finalizada. Gracias por su cooperacion, humano\n");
	
	return(0);
>>>>>>> 8bc0b13d6df47f49e7d86b65488d04536bd6d34b
}	