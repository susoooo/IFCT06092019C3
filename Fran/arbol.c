<<<<<<< HEAD
#include <stdio.h>

main()
{
	
	int alto;
	int ancho;
	int contfilas;
	int contespacios;
	int contaster;
	int espacios;
	int asteriscos;
	int contador;
	
	contador = 0;
	
	printf("\nIntroduce el alto del arbol: ");
	scanf("%d", &alto);
	
	printf("\nIntroduce el ancho del arbol: ");
	scanf("%d", &ancho);
	
	espacios = ancho / 2;
	
	for (contfilas = 1; contfilas <= alto; contfilas++)
	{
		for (contespacios = 0; contespacios <= espacios; contespacios++)
		{
			printf(" ");
		}		
		
		for (contaster = 1; contaster <= ancho-asteriscos; contaster ++)
		{
			printf("*");
		}
		
		espacios--;
		asteriscos++;
		
		printf("\n");	
	}

	contador = 1;
	
=======
#include <stdio.h>

main()
{
	
	int alto;
	int ancho;
	int contfilas;
	int contespacios;
	int contaster;
	int espacios;
	int asteriscos;
	int contador;
	
	contador = 0;
	
	printf("\nIntroduce el alto del arbol: ");
	scanf("%d", &alto);
	
	printf("\nIntroduce el ancho del arbol: ");
	scanf("%d", &ancho);
	
	espacios = ancho / 2;
	
	for (contfilas = 1; contfilas <= alto; contfilas++)
	{
		for (contespacios = 0; contespacios <= espacios; contespacios++)
		{
			printf(" ");
		}		
		
		for (contaster = 1; contaster <= ancho-asteriscos; contaster ++)
		{
			printf("*");
		}
		
		espacios--;
		asteriscos++;
		
		printf("\n");	
	}

	contador = 1;
	
>>>>>>> 8bc0b13d6df47f49e7d86b65488d04536bd6d34b
}