#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{
	float pi, radio, perim, area, vol;

	pi = 3.1416;
	radio = 0.0;
	perim = 0.0;
	area = 0.0;
	vol = 0.0;

	printf("radio: ");
	scanf("%f", &radio);

	perim = 2 * pi * radio;
	area = pi * (radio * 2);
	vol = (4 * pi * pow(radio, 3))/3;
	printf("\nperimetro: \t%.4f \narea: \t\t%.4f \nvol: \t\t%.4f", 
		perim, area, vol);
}