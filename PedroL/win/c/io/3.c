#include <stdio.h>

int main(int argc, char const *argv[])
{
	float amount, eurusd, rate;

	amount = 0.0;
	eurusd = 1.33250;
	rate = 1 / eurusd;

	printf("dolares?: ");
	scanf("%f", &amount);

	printf("\neuros!: %.2f", 
		amount * rate);
}