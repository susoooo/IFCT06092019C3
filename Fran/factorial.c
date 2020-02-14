<<<<<<< HEAD
#include <stdio.h>
#include <stdlib.h>

int calculoFactorial(int num)
{
    int contador;
    int fact;

    contador = num;

    for (contador = num; contador > 1; contador --)
	{
		fact = fact * contador;
	}
    return(fact);
}


main()
{
	int contador;
	int numero;
	int factorial;

	contador = 0;
	numero = 0;
	factorial = 0;

	printf("Introduce un numero: ");
	scanf("%d", &numero);

	printf("\nEl factorial del numero %d, es: %d", numero, calculoFactorial(numero));

}
=======
#include <stdio.h>
#include <stdlib.h>

int calculoFactorial(int num)
{
    int contador;
    int fact;

    contador = num;

    for (contador = num; contador > 1; contador --)
	{
		fact = fact * contador;
	}
    return(fact);
}


main()
{
	int contador;
	int numero;
	int factorial;

	contador = 0;
	numero = 0;
	factorial = 0;

	printf("Introduce un numero: ");
	scanf("%d", &numero);

	printf("\nEl factorial del numero %d, es: %d", numero, calculoFactorial(numero));

}
>>>>>>> 8bc0b13d6df47f49e7d86b65488d04536bd6d34b
