#include <stdio.h>
#include <math.h>

main()
{
	int alto;
	int ancho;
	int contfilas;
	int contespacios;
	int contaster;
	int espacios;
	int asteriscos;
	
	alto = 0;
	ancho = 0;
	contfilas = 0;
	contespacios = 0;
	contaster = 0;
	espacios = 0;
	asteriscos = 1;
	
	printf("\nIntroduce el alto del rombo: ");
	scanf("%d", &alto);
	
	printf("\nIntroduce el ancho del rombo: ");
	scanf("%d", &ancho);
	
	espacios = ancho / 2;
	
	for (contfilas = 1; contfilas <= alto; contfilas++)
	{
		for (contespacios = 0; contespacios <= espacios; contespacios++)
		{
			printf(" ");
		}
		
		for (contaster = 1; contaster <= asteriscos; contaster ++)
		{
			printf("*");
		}
		
		espacios--;
		asteriscos = asteriscos + 2;
		
		printf("\n");
		
	}
	
	espacios = 3;
	asteriscos = ancho - 2;
	
	for (contfilas = 1; contfilas <= alto + 1; contfilas++)
	{
		for (contespacios = 1; contespacios < espacios; contespacios++)
		{
			printf(" ");
		}
		
		for (contaster = asteriscos; contaster >= 1; contaster --)
		{
			printf("*");
		}
		
		espacios++;
		asteriscos = asteriscos - 2;
		
		printf("\n");
		
	}
	
}