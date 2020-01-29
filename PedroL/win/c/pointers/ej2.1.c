#include <stdio.h>

int main(int argc, char const *argv[])
{
	int i;
	int * pi;
	double d;
	double * pd;	

	pi = &i;
	pd = &d;

	i = 0;
	d = 0;

	printf("%d\n", i);
	printf("%lf\n", *pd);

	--(*pi);
	--(*pd);

	printf("%d\n", *pi);
	printf("%lf\n", d);	

	return 0;
}