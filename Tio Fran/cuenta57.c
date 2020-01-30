#include <stdio.h>

main()
{
	int contador;
	
	contador = 0;
	
	for (contador = 1; contador <= 57; contador ++)
	{
		printf("%d \n", contador);
	}
	
	contador = 1;
	
	while (contador<= 57)
	{
		printf("%d \n", contador);
		contador ++;
	}
	
	contador = 1;
	
	do
	{
		printf("%d \n", contador);
		contador ++;
	}
	while (contador <= 57);
}
