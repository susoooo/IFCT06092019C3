#include <stdio.h>
#include <math.h>

main()
{
	int base;
	int exponente;
	int potencia;
	int contador;
	
	base = 0;
	exponente = 0;
	potencia = 1;
	contador = 0;
		
	printf("\nIntroduce la base: ");
	scanf("%d", &base);
		
	printf("\nIntroduce el exponente: ");
	scanf("%d", &exponente);
	
	for (contador = 1; contador <= exponente; contador++)
	{
		potencia = potencia * base;
	}
	
	printf("\nEl resultado de elevar %d a %d es: %d", base, exponente, potencia);
	
}
