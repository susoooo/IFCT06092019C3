#include <stdio.h>
#include <math.h>

main()
{
	int numero;
	
	numero = 0;
		
	printf("\nIntroduce el numero: ");
	scanf("%d", &numero);
	
	if (numero > 1)
	{
	
		printf("\nLa conjetura de Collatz del numero dado es: %d, ", numero);
		
		while (numero != 1)
		{
			if (numero % 2 == 0)
			{
				numero = numero / 2;
			}
			else
			{
				numero = (numero * 3) + 1;
			}
			
			printf("%d, ", numero);			
		}

	}
	
}