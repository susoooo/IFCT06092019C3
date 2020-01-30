#include <stdio.h>
#include <stdlib.h>

int media2(int num1, int num2)
{
	int media;
	
	media = (num1 + num2) / 2;
	
	return (media);
	
}

int main()
{
	int numero1;
	int numero2;
	int opcion;
	
	numero1 = 0;
	numero2 = 0;
	opcion = 0;
	
	printf("\nIntroduzca el primer numero: ");
	scanf("%d", &numero1);

	printf("\nIntroduzca el segundo numero: ");
	scanf("%d", &numero2);

	printf("\nLa media de los numeros dados es: %d \n", media2(numero1, numero2));
	
	printf("\nGracias por usar nuestro software... matao!!");		
	
	return(0);	

}