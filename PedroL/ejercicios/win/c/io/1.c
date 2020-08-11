#include <stdio.h>

int main(int argc, char const *argv[])
{
	float precio, desc, total;

	precio = 0.0;
	desc = 0.0;
	total = 0.0;

	printf("precio: ");
	scanf("%f", &precio);
	printf("\ndescuento: ");
	scanf("%f", &desc);

	total = precio * (1 - (desc / 100));
	printf("\n%.0f\n", total);
}