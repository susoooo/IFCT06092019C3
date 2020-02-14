<<<<<<< HEAD
#include <stdio.h>

main()
{
	float euros;
	float dolares;
	float valorcambio;
	float resultado;
	
	euros = 0.0;
	dolares = 0.0;
	valorcambio = 1.33250;
	resultado = 0.0;
	
	printf("Coversion de dolares a euros.\n");
	printf("Version 1.0\n\n");
	
	printf("Introduzca el importe en dolares: ");
	scanf("%f", &dolares);
	
	euros = dolares / valorcambio;
	
	printf("El valor en euros de %f dolares es de %f euros.\n", dolares, euros);
	
	printf("\n\nFin de programa, saludos terricola!!\n.");
	
=======
#include <stdio.h>

main()
{
	float euros;
	float dolares;
	float valorcambio;
	float resultado;
	
	euros = 0.0;
	dolares = 0.0;
	valorcambio = 1.33250;
	resultado = 0.0;
	
	printf("Coversion de dolares a euros.\n");
	printf("Version 1.0\n\n");
	
	printf("Introduzca el importe en dolares: ");
	scanf("%f", &dolares);
	
	euros = dolares / valorcambio;
	
	printf("El valor en euros de %f dolares es de %f euros.\n", dolares, euros);
	
	printf("\n\nFin de programa, saludos terricola!!\n.");
	
>>>>>>> 8bc0b13d6df47f49e7d86b65488d04536bd6d34b
}