#include<stdio.h>
main()
{
	int numero;
	int numeroU;
	
	numero=0;
	numeroU=0;
	
	printf("Escribe un numero\n");
	scanf("%d",&numeroU);
	for(numero=1;numero<=numeroU;numero++)
	{
		printf("%d\n",numero);
	}
}