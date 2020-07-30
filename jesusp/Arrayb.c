#include <stdio.h>

main()
{
	int arraya[23];
	int contador;	
	
	contador=0;
	printf("Inicializando...\n");
	
	for(contador=0;contador<23;contador++)
	{
		arraya[contador]=0;
	}
	printf("Inicializado...");
	for(contador=0;contador<23;contador++)
	{
		printf("%d\n", arraya[contador]);
	}
	for(contador=0;contador<8;contador++)
	{
		printf("\nDame un numero:", arraya[contador]);
		scanf("%d", &arraya[contador]);
	}
	for(contador=0;contador<8;contador++)
	{
		printf("%d\n", arraya[contador]);
	}
}