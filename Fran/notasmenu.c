#include <stdio.h>
#include <stdlib.h>
#include <math.h>

main()
{
	float notas[100];
	float mayor;
	float menor;
	float media;
	float nota;
	int alumno;
	int opcion;
	
	mayor = 0.0;
	menor = 10.0;
	media = 0.0;
	alumno = 0;
	nota = 0;

	for	(alumno = 0; alumno < 100; alumno++)
	{
		notas[alumno] = 0.0;
	}
	
/*	
	for (alumno = 0; alumno < 40; alumno++)
	{
		printf("\nIntroduce la nota del alumno %d: ", alumno+1);
		scanf("%f", &notas[alumno]);
	}
*/
		
	do
	{
		printf("\n\nElija una opcion: ");
		printf("\n------------------");
		printf("\n1. Listado de notas.");
		printf("\n2. Calcular nota mas baja.");
		printf("\n3. Calcular nota mas alta.");
		printf("\n4. Calcular la media.");
		printf("\n5. Agregar nota.");
		printf("\n0. Salir.\n");
		
		scanf("%d", &opcion);
		
		switch (opcion)
		{
			case 1:
				printf("\nLas notas introducidas son:");
		
				for (alumno = 0; alumno < 100; alumno++)
				{				
					printf("\nNota del alumno %d: %.2f", alumno, notas[alumno]);
				}
				
			break;
			
			case 2:
				for (alumno = 0; alumno < 100; alumno++)
				{
					if (notas[alumno] < menor)
					{
						menor = notas[alumno];
					}
				}
				
				printf("\nLa nota mas baja ha sido de: %f", menor);
				
			break;
			
			case 3:
				for (alumno = 0; alumno < 100; alumno++)
				{	
					if (notas[alumno] > mayor)
					{	
						mayor = notas[alumno];
					}
				}
				
				printf("\nLa nota mas alta ha sido de: %f", mayor);
				
			break;
			
			case 4:
				for (alumno = 0; alumno < 100; alumno++)
				{
					media = media + notas[alumno];
				}
				media = media / 100;
				
				printf("\nLa media de las notas es de: %f", media);
				
			break;
			
			case 5:
				do 
				{
					printf("\nIntroduzca el numero del alumno (0-100): ");
					scanf("%d", alumno);
				}
				while (alumno < 0 || alumno > 100);
				
				do 
				{
					printf("\nIntroduzca la nota del alumno (0-10): ");
					scanf("%.2f", nota);
				}
				while (nota < 0 || nota > 10);
				
				notas[alumno] = nota;
				
			break;
			
			default:
			
				printf("\n Hasta luego cocodrilo....!!");
		}
	}
	while(opcion != 0);

}