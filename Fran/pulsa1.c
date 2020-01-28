#include <stdio.h>

main()
{
	int numero;
	
	numero = 0;
	
	do
	{
		printf("\nIntroduce un 1: ");
		scanf("%d", &numero);
		
		if (numero == 1)
		{
			printf("\nGracias, lumbreras. Lo que te ha costado!!!");	
		}
		else
		{
			printf("\n Tecla incorrecta. %d", numero);
			numero = 0;
		}
		
	}
	while (numero != 1);
	

	
}