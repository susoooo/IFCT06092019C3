#include <stdio.h>
#include <math.h>

main()
{
int numero;
float notas[100];
int contador;
float suma;
float media;
float mayor;
float menor;

numero=0;
media=0.0;
contador=0;
suma=0.0;
mayor=0.0;
menor=0.0;
printf("Introduce un numero:");
scanf("%d",&numero);

if (numero>0 && numero<=100)
	{
		for(contador=0;contador<numero; contador++)
			{
				notas[numero]=rand()%11;
				printf("Notas:%f\n", notas[numero]);
				suma=suma+notas[numero];
				if(notas[numero]> mayor)
					{
						mayor=notas[numero];
					}
				if(notas[numero]< menor)
					{
						menor=notas[numero];
					}
			}
		media=suma/contador;
		printf("La media es: %f", media);
		printf("\n La mejor nota es: %f", mayor);
		printf("\n La peor nota es: %f", menor);
	}
}