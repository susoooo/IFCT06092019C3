#include<stdio.h>
main()
{
	int numero[8];
	int contador;
	
	contador=0;
	
	for(contador=0; contador<8; contador++)
	{
		numero[contador]=0;
	}
	
	contador=0;
	
	while(contador<8)
	{
		printf("%d",numero[contador]);
		contador++;
	}
	printf("\n");
	contador=0;
	
	do
	{
		printf("Escrive un numero\n");
		scanf("%d",&numero[contador]);
		contador++;
	}
	while(contador<8);
	
	contador=0;
	
	for(contador=0; contador<8; contador++)
	{
		printf("%d",numero[contador]);
	}
}