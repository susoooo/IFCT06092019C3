#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <math.h>

//pretty
void FunLoader(int cycles)
{
	int count, j;
	char load[4]="-\|/";
	
	count = cycles * 4;

	for (int i = 0; i < count; ++i)
	{
		j=i%sizeof(load);
		printf("\b%c",load[j]);
		usleep(66666);
	}
}

float ATriangulo()
{
	float len;

	printf("introduzca medida de lado: \n");
	scanf("%f", &len);
	
	FunLoader(2);
	
	// sqrt of 3 times squared sides over 4
	return (sqrt(3) * len) / 4;
}

float ATrapecio()
{
	float a, b, height;

	printf("introduzca horizontal superior, inferior, y altura: \n");
	scanf("%f\n%f\n%f", &a, &b, &height);
	
	FunLoader(2);
	
	// half times height times a + b
	return (height * (a + b)) * 0.5;
}

float ARectangulo()
{
	float w, l;

	printf("introduzca altura y anchura: \n");
	scanf("%f\n%f", &w, &l);
	
	FunLoader(2);
	
	// multiply sides
	return w * l;
}

int main()
{
	int pick;

	printf("[1] triangulo \n[2] trapecio \n[3] rectangulo \nseleccion: ");
	scanf("%d", &pick);
	printf("\n");

	switch(pick)
	{
		case 1:
			printf("\n\n%f",ATriangulo());
			break;

		case 2:
			printf("\n\n%f",ATrapecio());
			break;

		case 3:
			printf("\n\n%f",ARectangulo());
			break;

		default:
			printf("\nseleccion incorrecta!");
	}

	return 0;
}