#include <stdio.h>

float calcUsdToEur(float usd)
{
	return (usd * 0.8547);
}

float calcEurToUsd(float eur)
{
	return (eur * 1.17);
}

int main()
{
	int money, currency;

	//wipe
	money = 0;
	currency = 0;

	//ask for value and option
	printf("\nvalor: ");
	scanf("%d", &money);

	printf("\n[1]eur->usd\n[2]usd->eur\n");
	scanf("%d", &currency);

	//choose which function
	if(currency == 1)
		printf("\n%.2f usd", calcEurToUsd(money));
	else if (currency == 2)
		printf("\n%.2f eur", calcUsdToEur(money));
	else
		printf("opcion incorrecta.");
	
	return 0;
}