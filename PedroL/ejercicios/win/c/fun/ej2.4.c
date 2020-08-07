#include <stdio.h>

int sumaRecursiva(int num)
{
	int respuesta;

	if (num == 1)
		respuesta = 1;
	else
		respuesta = num + sumaRecursiva(num - 1);
	
	return respuesta;
}

int main()
{
	int num, suma;

	num = 0;
	suma = 0;

	printf("numero: ");
	scanf("%d", &num);

	suma = sumaRecursiva(num);

	printf("%d", suma);
	
	return 0;
}