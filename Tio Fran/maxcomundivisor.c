#include <stdio.h>
#include <math.h>

main()
{
	int numero1;
	int numero2;
	int menor;
	int contador;
	int comundiv;
	
	numero1 = 0;
	numero2 = 0;
	menor = 0;
	contador = 0;
		
	printf("\nIntroduce el primer numero: ");
	scanf("%d", &numero1);

	printf("\nIntroduce el segundo numero: ");
	scanf("%d", &numero2);
	
	if (numero1 < numero2)
	{
		menor = numero1;
	}
	else
	{
		menor = numero2;
	}
	
	printf("\nEl maximo comun divisor de %d y %d es: ", numero1, numero2);
	
	for (contador = 1; contador <= menor; contador++)
	{
		if (numero1%contador == 0 && numero2%contador == 0)
		{
			comundiv = contador;
		}
	}
	
	printf("%d ", comundiv);
	
}