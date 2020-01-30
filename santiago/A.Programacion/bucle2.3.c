#include<stdio.h>
main()
{
	int numero;
	int numeroU;
	
	numero=0;
	numeroU=0;
	
	printf("Escribe un numero\n");
	scanf("%d",&numeroU);
	do
	{
		printf("%d\n",numero);
		numero++;
	}
	while(numero<=numeroU);
}