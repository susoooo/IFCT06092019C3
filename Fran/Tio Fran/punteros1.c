#include <stdio.h>
#include <stdlib.h>

int main()
{
	int numero1;
	int numero2;
	int * pNumero1;
	int * pNumero2;
	
	numero1 = 0;
	numero2 = 0;
	
	pNumero1 = &numero1;
	pNumero2 = &numero2;
	
	
	printf("\n┌────────────────────────────────┐");
	printf("\n│ Opciones disponibles:          │");
	printf("\n│ 1. Factorial de un numero.     │");
	printf("\n│ 2. Combinacion de n elementos. │");
	printf("\n│ 3. Ordenar un array.           │");
	printf("\n│ 0. Salir del programa.         │");
	printf("\n╚────────────────────────────────╝");
		
	printf("\nIntroduzca un numero: \n");
	scanf("%d", &numero1);

	printf("\nIntroduzca otro numero: \n");
	scanf("%d", &numero2);
	
	printf("\n El resultado de la suma de %d y %d es: %d ",*pNumero1, *pNumero2, *pNumero1+*pNumero2);
	
	return(0);
}