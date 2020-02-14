<<<<<<< HEAD
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
	

	
=======
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
	

	
>>>>>>> 8bc0b13d6df47f49e7d86b65488d04536bd6d34b
}