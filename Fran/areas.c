<<<<<<< HEAD
#include <stdio.h>
#include <math.h>

main()
{
	int lado1;
	int lado2;
	int altura;
	int area;
	int opcion;
	
	lado1 = 0;
	lado2 = 0;
	altura = 0;
	area = 0.0;
	opcion = 0;
		
	printf("Calculo de areas.\n");
	printf("Version 1.0\n\n");
	
	printf("Elija una opcion: \n");
	printf("1. Area de un triangulo\n");
	printf("2. Area de un trapecio\n");
	printf("3. Area de un rectangulo\n");
	printf("-----------------------------\n");
	scanf("%d", &opcion);
	
	if (opcion == 1)
	{
		printf("\nCalculo del area de un triangulo:");
		printf("\nIntroduzca longitud de la base:");		
		scanf("%d", &lado1);
		
		printf("\nIntroduzca longitud de la altura:");		
		scanf("%d", &lado2);
		
		area = lado1 * lado2 / 2;
		printf("\nEl area del triangulo es: %d", area);
	}
	else
	{
		if (opcion == 2)
		{
			printf("\nCalculo del area de un trapecio:");
			printf("\nIntroduzca el primer lado:");
			scanf("%d", &lado1);
			
			printf("\nIntroduzca el segundo lado:");
			scanf("%d", &lado2);
			
			printf("\nIntroduzca la altura del trapecio:");
			scanf("%d", &altura);
			
			if (lado1 > lado2)
			{
				area = altura * (lado1 - lado2 / 2);
				printf("\nEl area del trapecio es: %d", area);
			}
			else
			{
				area = altura * (lado2 - lado1 / 2);
				printf("\nEl area del trapecio es: %d", area);
			}			
		}
		else
		{
			if (opcion == 3)
			{
				printf("\nCalculo del area de un rectangulo:");
				printf("\nIntroduzca el primer lado:");
				scanf("%d", &lado1);
				
				printf("\nIntroduzca el segundo lado:");
				scanf("%d", &lado2);
				
				area = lado1 * lado2;
				
				printf("\nEl area del rectangulo es: %d", area);
			}
			else
			{
				printf("\nOpcion erronea.");
			}
		}
	}
	
	
	printf("\n\nFin de programa, saludos terricola!!\n.");
	
=======
#include <stdio.h>
#include <math.h>

main()
{
	int lado1;
	int lado2;
	int altura;
	int area;
	int opcion;
	
	lado1 = 0;
	lado2 = 0;
	altura = 0;
	area = 0.0;
	opcion = 0;
		
	printf("Calculo de areas.\n");
	printf("Version 1.0\n\n");
	
	printf("Elija una opcion: \n");
	printf("1. Area de un triangulo\n");
	printf("2. Area de un trapecio\n");
	printf("3. Area de un rectangulo\n");
	printf("-----------------------------\n");
	scanf("%d", &opcion);
	
	if (opcion == 1)
	{
		printf("\nCalculo del area de un triangulo:");
		printf("\nIntroduzca longitud de la base:");		
		scanf("%d", &lado1);
		
		printf("\nIntroduzca longitud de la altura:");		
		scanf("%d", &lado2);
		
		area = lado1 * lado2 / 2;
		printf("\nEl area del triangulo es: %d", area);
	}
	else
	{
		if (opcion == 2)
		{
			printf("\nCalculo del area de un trapecio:");
			printf("\nIntroduzca el primer lado:");
			scanf("%d", &lado1);
			
			printf("\nIntroduzca el segundo lado:");
			scanf("%d", &lado2);
			
			printf("\nIntroduzca la altura del trapecio:");
			scanf("%d", &altura);
			
			if (lado1 > lado2)
			{
				area = altura * (lado1 - lado2 / 2);
				printf("\nEl area del trapecio es: %d", area);
			}
			else
			{
				area = altura * (lado2 - lado1 / 2);
				printf("\nEl area del trapecio es: %d", area);
			}			
		}
		else
		{
			if (opcion == 3)
			{
				printf("\nCalculo del area de un rectangulo:");
				printf("\nIntroduzca el primer lado:");
				scanf("%d", &lado1);
				
				printf("\nIntroduzca el segundo lado:");
				scanf("%d", &lado2);
				
				area = lado1 * lado2;
				
				printf("\nEl area del rectangulo es: %d", area);
			}
			else
			{
				printf("\nOpcion erronea.");
			}
		}
	}
	
	
	printf("\n\nFin de programa, saludos terricola!!\n.");
	
>>>>>>> 8bc0b13d6df47f49e7d86b65488d04536bd6d34b
}