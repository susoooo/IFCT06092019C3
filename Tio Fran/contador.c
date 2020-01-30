#include <stdio.h>

main()
{
	int contador;
	
	contador = 0;
	
	for (contador = 0; contador < 1000000; contador ++)
	{
		printf("%d \n", contador);
	}
}
