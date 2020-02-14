<<<<<<< HEAD
#include <stdio.h>
#include <math.h>

main()
{
	int a;
	int b;
	int c;
	float resultado1;
	float resultado2;
	
	a = 0;
	b = 0;
	c = 0;
	resultado1 = 0.0;
	resultado2 = 0.0;
		
	printf("Calculo de ecuacion de segundo grado.\n");
	printf("Version 1.0\n\n");
	
	printf("Introduzca el primer coeficiente: ");
	scanf("%d", &a);
	
	printf("Introduzca el segundo coeficiente: ");
	scanf("%d", &b);
	
	printf("Introduzca el tercer coeficiente: ");
	scanf("%d", &c);
	
	resultado1 = (float)(a + sqrt( pow(b, 2) + 4 * a * c)) / 2;
	printf("El resultado de X1 es: %f\n", resultado1);
	
	if ( (pow(b, 2) + 4 * a * c) >= 0)
	{
		resultado2 = (float)(a - sqrt( pow(b, 2) + 4 * a * c)) / 2;
		printf("El resultado de X2 es: %f\n", resultado2);
	}
	else
	{
		printf("El resultado de X2 no se puede calcular con los valores dados.\n");
	}
	
	printf("\n\nFin de programa, saludos terricola!!\n.");
	
=======
#include <stdio.h>
#include <math.h>

main()
{
	int a;
	int b;
	int c;
	float resultado1;
	float resultado2;
	
	a = 0;
	b = 0;
	c = 0;
	resultado1 = 0.0;
	resultado2 = 0.0;
		
	printf("Calculo de ecuacion de segundo grado.\n");
	printf("Version 1.0\n\n");
	
	printf("Introduzca el primer coeficiente: ");
	scanf("%d", &a);
	
	printf("Introduzca el segundo coeficiente: ");
	scanf("%d", &b);
	
	printf("Introduzca el tercer coeficiente: ");
	scanf("%d", &c);
	
	resultado1 = (float)(a + sqrt( pow(b, 2) + 4 * a * c)) / 2;
	printf("El resultado de X1 es: %f\n", resultado1);
	
	if ( (pow(b, 2) + 4 * a * c) >= 0)
	{
		resultado2 = (float)(a - sqrt( pow(b, 2) + 4 * a * c)) / 2;
		printf("El resultado de X2 es: %f\n", resultado2);
	}
	else
	{
		printf("El resultado de X2 no se puede calcular con los valores dados.\n");
	}
	
	printf("\n\nFin de programa, saludos terricola!!\n.");
	
>>>>>>> 8bc0b13d6df47f49e7d86b65488d04536bd6d34b
}