#include <stdio.h>

main()
{
	
	int numero;
	int contad;
	
	numero=0;
	contad=0;
	printf("Cuantos asteriscos quiere?: ");
	scanf("%d", &numero);
	for(contad=1; contad <= numero ; contad++)
	{
		printf("*");
	}
	
	contad=1;
	while(contad <= numero)
	{
		printf("*");
		contad++;
	}
	
	contad=1;
	do
	{
		printf("*");
		contad++;
	}
	while(contad <= numero);
}