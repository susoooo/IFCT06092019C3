#include <stdio.h>
#include <math.h>

main()
{
	int numero1;
	int numero2;
	int numero3;
	int numero4;
	int media;
	
	numero1 = 0;
	numero2 = 0;
	numero3 = 0;
	numero4 = 0;
	
	media = 0;
	
	printf("Calculo de la media.\n");
	printf("Version 1.0\n\n");
	
	printf("Introduzca el primer numero: ");
	scanf("%d", &numero1);

	printf("Introduzca el segundo numero: ");
	scanf("%d", &numero2);
	
	printf("Introduzca el tercer numero: ");
	scanf("%d", &numero3);
	
	printf("Introduzca el cuarto numero: ");
	scanf("%d", &numero4);
	
	media = (numero1 + numero2 + numero3 + numero4) / 4;
	
	printf("\nLa media de los numeros dados es: %d\n", media);
	
	printf("\n\nFin de programa, saludos terricola!!\n");
}