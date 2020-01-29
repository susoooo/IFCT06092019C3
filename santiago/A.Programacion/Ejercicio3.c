#include<stdio.h>
main()
{	float dolares;
	float euros;

	dolares = 0;
	euros = 0;

	printf("Connversor dolares a euros\n");
	printf("Dolares:\n");
	scanf("%f",&dolares);

	euros = dolares*1.33250;
	printf("Euros: %f",euros);}