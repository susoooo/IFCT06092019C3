#include <stdio.h>
#include <math.h>

float dolares()
{
	float euro;
	float dolar;
    printf("Deme los euros:");
	scanf("%f",&euro);
	dolar=euro/1.17;
	printf("Total dolares:%.2f",dolar);  
}

float main()
{
	dolares();
}