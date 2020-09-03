#include <stdio.h>

int factori(int numero)
{
	int contador;
	int factorial;
	contador=0;
	factorial=1;
	for(contador=1;contador<=numero; contador++)
	{
		factorial=factorial*contador;
	}
	printf("El factorial es:%d",factorial);
}
int main()
{	
	int numero;
	numero=0;
	
	printf("Dame un numero: ");
	scanf("%d", &numero);
	if(numero==0)
	{
		printf("numero no valido");
	}
	else
	{
		factori(numero);
	}
}