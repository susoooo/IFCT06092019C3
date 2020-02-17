<<<<<<< HEAD
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
=======
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
>>>>>>> 8bc0b13d6df47f49e7d86b65488d04536bd6d34b
}