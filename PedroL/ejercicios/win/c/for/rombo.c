#include <stdio.h>

#define MIDPOINTH (height / 2 - 1)

int main ()
{
	int width, height, x, y, spaces, stars;
	float factor, envelope;

		//wipe
	width = 0;
	height = 0;
	x = 0;
	y = 0;
	spaces = 0;
	stars = 0;
	factor = 0.0;
	envelope = 0.0;
		//wipe

	printf("ancho: ");
	scanf("%d", &width);
	printf("alto: ");
	scanf("%d", &height);

	factor = (float)width / (float)height;
	envelope = factor;

	printf("\nfactor:\t%f \n\n", factor);

	for (y = 0; y < height; ++y)
	{
		if (y < MIDPOINTH)
		{
			for (spaces = 0; spaces < (width / 2 - envelope); ++spaces)
				printf(" ", envelope);

			for (stars = 0; stars < (int)envelope; ++stars)
				printf("**");

			for (spaces = 0; spaces < (width / 2 - envelope); ++spaces)
				printf(" ");

			//printf("\t %f, envelope);
			printf("\n");

			envelope = envelope + factor;
		}
		else if (y < height)
		{
			for (spaces = 0; spaces < (width / 2 - envelope); ++spaces)
				printf(" ");

			for (stars = 0; stars < (int)envelope; ++stars)
				printf("**");

			for (spaces = 0; spaces < (width / 2 - envelope); ++spaces)
				printf(" ");

			//printf("\t %f, envelope);
			printf("\n");

			envelope = envelope - factor;
		}
	}

	return 0;
}