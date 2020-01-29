#include <stdio.h>

int main(int argc, char const *argv[])
{
	float height, width;

	height = 0.0;
	width = 0.0;

	printf("height: ");
	scanf("%f", &height);
	printf("\nwidth: ");
	scanf("%f", &width);

	printf("\nperimeter: %.4f \narea: %.4f", 
		((height * 2) + (width * 2)), 
		(width * height));
}