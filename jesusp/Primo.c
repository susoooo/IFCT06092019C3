#include <stdio.h>
#include <math.h>



int primo(int numero,int divisor)
{	
	int cont;	
	cont=0;
	for(cont=1;cont<=numero;cont++)
	{
		numero/cont;
		if(numero%cont==0)
		divisor++;	
	}	
	if(divisor==2)
		{
			printf("1");
		}
		else
		{
			printf("0");
		}
}

int main()
{	
	int numero;	
	int divisor;
	numero=0;
	divisor=0;
	
	printf("Introduzca un numero distinto de cero: ");
	scanf("%d", &numero);
	
	
	if(numero!=0 )
	{
		primo(numero,divisor);	
		
	}
	
}