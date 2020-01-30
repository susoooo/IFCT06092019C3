#include <stdio.h>

#define WIDTH 100
#define HEIGHT 100
#define GRAD (-(a / b))
#define INTER (-(c / b))
#define LINE ((GRAD * i) + INTER)

int main(int argc, char const *argv[])
{
	int sum;
	float a, b, c;
	char map[WIDTH][HEIGHT];

	sum = 0;
	a = 0.0;
	b = 0.0;
	c = 0.0;

	printf("a: ");
	scanf("%f", &a);
	printf("b: ");
	scanf("%f", &b);
	printf("c: ");
	scanf("%f", &c);

	for (int j = HEIGHT - 1; j >= 0; --j)
	{
		printf("\n");
		for (int i = 0; i < WIDTH; ++i)
		{
			//printf("%f\n", LINE);
			if (j == (int)LINE)
				//printf("*");
				map[i][j] = '*';
			else
				//printf(" ");
				map[i][j] = ' ';

			printf("%c", map[i][j]);
		}
	}

	//asterisk count
	for (int i = 0; i < HEIGHT; ++i)
	{
		for (int j = 0; j < WIDTH; ++j)
		{
			if (map[i][j] == '*')
				sum = sum + 1;
		}
	}

	if (sum == 1)
		printf("1 asterisk!\n");
	else
		printf("%d asterisks!\n", sum);

	return 0;
}