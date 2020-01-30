#include <stdio.h>

int main ()
{
	int num, count;

		//wipe
	num = 0;
	count = 0;
		//wipe

	printf("Collatz\n numero: ");
	scanf("%d", &num);
	printf("\n %d", num);

	do
	{
		printf(" -> ");

		if (num % 2 == 0)
			num = num / 2;
		else
			num = num * 3 + 1;

		printf("%d", num);

		count++;
	}
	while (num != 1);

	printf("\n\n iteraciones: %d \n", count);

	return 0;
}