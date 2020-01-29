#include <stdio.h>

void input(int * x, int * y)
{
	printf(":\n");
	scanf("\n%d", x);
	scanf("\n%d", y);	
}

int suma(int * x, int * y)
{
	return *(x) + *(y);
}

int main(int argc, char const *argv[])
{
	int x, y;
	int * px = &x;
	int * py = &y;

	input(px, py);

	printf("%d\n", suma(px, py));

	return 0;
}