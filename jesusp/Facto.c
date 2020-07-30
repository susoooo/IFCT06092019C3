#include <stdio.h>

main()
{
	int factorial;
	int numero;
	
	numero=0;
	factorial=1;
	printf("Dame un numero:");
	scanf("%d",&numero);
	
	if(numero<0)
	{
		printf("numero no valido");
	}
	else
	{
		while(numero>0)
		{
			factorial=numero*factorial;
			numero--;
		}
	}
	printf("El factorial es: %d", factorial);
	
	
}