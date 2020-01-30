#include <stdio.h>

main()
{
	int numero1;
	int numero2;
	int suma;
	int resta;
	int multiplicacion;
	float division;
		
	numero1 = 12;
	numero2 = 3;
	suma = 0;
	resta = 0;
	multiplicacion = 0;
	division = 0.00;
	
	printf("Hola, soy Calcu+\n");
	printf("Version 1.0\n");
	printf("Programado por Fran\n");
	
	printf("\nDime el primer numero: ");
	scanf("%d", &numero1);
	
	printf("\nDime el segundo numero: ");
	scanf("%d", &numero2);

	suma = numero1 + numero2;
	resta = numero1 - numero2;
	multiplicacion = numero1 * numero2;
	division = (float) numero1 / numero2;
	
	printf("\nEl resultado de la SUMA es: %d\n", numero1 + numero2);
	printf("El resultado de la RESTA es: %d\n", resta);
	printf("El resultado de la MULTIFLICACION es: %d\n", multiplicacion);
	printf("El resultado de la DIVISION es: %f\n", division);
	
	printf("\n\n Ejecucion finalizada. Gracias por su cooperacion, humano\n");
}	


