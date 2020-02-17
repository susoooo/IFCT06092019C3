<<<<<<< HEAD
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

main()
{
	float notas[40];
	float mayor;
	float menor;
	float media;
	int contador;
	
	mayor = 0.0;
	menor = 10.0;
	media = 0.0;
	contador = 0;
		
	for	(contador = 0; contador < 40; contador++)
	{
		notas[contador] = rand() % 11;
	}

/*	
	for (contador = 0; contador < 40; contador++)
	{
		printf("\nIntroduce la nota del alumno %d: ", contador+1);
		scanf("%f", &notas[contador]);
	}
*/

	for (contador = 0; contador < 40; contador++)
	{
		media = media + notas[contador];
		
		if (notas[contador] > mayor)
		{
			mayor = notas[contador];
		}
		else
		{
			if (notas[contador] < menor)
			{
				menor = notas[contador];
			}
		}	
	}
	
	printf("\nLas notas introducidas son:");
	
	for (contador = 0; contador < 40; contador++)
	{
		
		printf("\n Nota del alumno %d: %f", contador+1, notas[contador]);
	}
	
	printf("\nLa nota mas baja ha sido de: %f", menor);
	printf("\nLa nota mas alta ha sido de: %f", mayor);	
	
	printf("\nLa media de las notas es de: %f", media / 40);	

=======
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

main()
{
	float notas[40];
	float mayor;
	float menor;
	float media;
	int contador;
	
	mayor = 0.0;
	menor = 10.0;
	media = 0.0;
	contador = 0;
		
	for	(contador = 0; contador < 40; contador++)
	{
		notas[contador] = rand() % 11;
	}

/*	
	for (contador = 0; contador < 40; contador++)
	{
		printf("\nIntroduce la nota del alumno %d: ", contador+1);
		scanf("%f", &notas[contador]);
	}
*/

	for (contador = 0; contador < 40; contador++)
	{
		media = media + notas[contador];
		
		if (notas[contador] > mayor)
		{
			mayor = notas[contador];
		}
		else
		{
			if (notas[contador] < menor)
			{
				menor = notas[contador];
			}
		}	
	}
	
	printf("\nLas notas introducidas son:");
	
	for (contador = 0; contador < 40; contador++)
	{
		
		printf("\n Nota del alumno %d: %f", contador+1, notas[contador]);
	}
	
	printf("\nLa nota mas baja ha sido de: %f", menor);
	printf("\nLa nota mas alta ha sido de: %f", mayor);	
	
	printf("\nLa media de las notas es de: %f", media / 40);	

>>>>>>> 8bc0b13d6df47f49e7d86b65488d04536bd6d34b
}