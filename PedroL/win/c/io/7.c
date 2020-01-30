#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{
	float a, b, c, x1, x2, pre;

	a = 0.0;
	b = 0.0;
	c = 0.0;
	x1 = 0.0;
	x2 = 0.0;
	pre = 0.0;

	printf("a: ");
	scanf("%f", &a);

	printf("\nb: ");
	scanf("%f", &b);

	printf("\nc: ");
	scanf("%f", &c);

	pre = sqrt((b * 2) - (4 * a *c));

	if (pre == fabs(pre))
	{
		x1 = a + pre / 2;
		x2 = a - pre / 2;
		printf("\n%f \n%f", x1, x2);
	}
	else
	{
		printf("%f\n u suck!!\n", pre);
	}

	/*printf("\n%f : %f : %f",
		time[0], time[1], time[2]);
	printf("\ndia  hor  min");*/

	return 0;
}