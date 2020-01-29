#include<stdio.h>
main()
{
	char variable;
	char palabra[10];
	int contador;
	
	variable='c';
	contador=0;
	
	
	for(contador=0; contador<10; contador++)
	{
		printf("letra de la palabra %c",palabra);
		scanf("%c\n",&palabra[contador]);
	}
	
	for(contador=0; contador<10; contador++)
	{
		printf("%c",palabra[contador]);
	}
}