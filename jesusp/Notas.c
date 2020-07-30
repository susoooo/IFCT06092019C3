#include <stdio.h>

main()
{
float notas[40];
int contador;
float suma;
float media;
float mayor;
float menor;

media=0.0;
contador=0;
suma=0.0;
mayor=0.0;
menor=0.0;

for(contador=1;contador<=40; contador++)
	{
		notas[contador]=rand()%11;
		printf("Notas:%f\n", notas[contador]);
		suma=suma+notas[contador];
		if(notas[contador]> mayor)
		{
			mayor=notas[contador];
		}
		if(notas[contador]< menor)
		{
			menor=notas[contador];
		}
	}
	media=suma/40;
	printf("La media es: %f", media);
	printf("\n La mejor nota es: %f", mayor);
	printf("\n La peor nota es: %f", menor);
}