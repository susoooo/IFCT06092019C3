#include<stdio.h>
main()
{
	int numero;
	int numeroU;
	
	numero=0;
	numeroU=0;
	
	printf("Escribe un numero\n");
	scanf("%d",&numeroU);
	while(numero<=numeroU)
	{
		printf("%d\n",numero);
		numero++;
	}	
}