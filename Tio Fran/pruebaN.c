#include <stdio.h>

main()
{
	int n;
	int contador;
	
	n = 2;
	
	for (contador = 0; contador < 10; contador++)
	{
		printf("%d", n++);
		printf("\n");
	}
	
	n = 2;
	
	for (contador = 0; contador < 10; contador++)
	{
		printf("%d", ++n);
		printf("\n");
	}
	
	n = 2;
	
	for (contador = 0; contador < 10; contador++)
	{
		n = ++n;
		printf("%d", n);
		printf("\n");
	}
}