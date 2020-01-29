#include<stdio.h>
main()
{
	int numero1;
	int numero2;
	int contador;
	numero1=0;
	numero2=0;
	contador=0;
	
	printf("Esciba el primer mumero");
	scanf("%d",&numero1);
	printf("Esciba el segundo mumero");
	scanf("%d",&numero2);
	
	for(contador=numero1;contador<=numero2;contador++)
	{
		printf("%d\n",contador);
	}
}