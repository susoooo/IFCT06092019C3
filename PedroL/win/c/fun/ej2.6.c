#include <stdio.h>

int swap(int *var1, int *var2)
{
	int temp;

	temp = *var2;
	*var2 = *var1;
	*var1 = temp;
}

int mCD(int m, int n)
{
	int respuesta;

	if (n == 0)
		respuesta = m;
	else
		respuesta = mCD(n, (m % n));

	return respuesta;
}

int main()
{
	int m, n;

	m = 0;
	n = 0;

	printf("m:\n");
	scanf("\t%d", &m);
	printf("n:\n");
	scanf("\t%d", &n);

	if (m < n)
		swap(&m, &n);

	printf("%d\n", mCD(m, n));	

	return 0;
}