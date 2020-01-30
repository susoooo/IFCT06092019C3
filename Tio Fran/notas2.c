#include <stdio.h>
#include <stdlib.h>
#include <math.h>

main()
{
	float mayor;
	float menor;
	float media;
	int contador;
	int alumnos;
	
	mayor = 0.0;
	menor = 10.0;
	media = 0.0;
	contador = 0;
	alumnos = 0;
	
	do
	{
		printf("\nIntroduzca el numero de alumnos:");
		scanf("%d", &alumnos);
	}
	while(alumnos < 1 && alumnos > 100);
		
	float notas[alumnos];
	
	for	(contador = 0; contador < alumnos; contador++)
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

	for (contador = 0; contador < alumnos; contador++)
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
	
	for (contador = 0; contador < alumnos; contador++)
	{
		
		printf("\n Nota del alumno %d: %f", contador+1, notas[contador]);
	}
	
	printf("\nLa nota mas baja ha sido de: %f", menor);
	printf("\nLa nota mas alta ha sido de: %f", mayor);	
	
	printf("\nLa media de las notas es de: %f", media / alumnos);	

}