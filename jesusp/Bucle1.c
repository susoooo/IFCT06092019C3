#include <stdio.h>

main(){
	int numero;
	numero=1;
	for(numero = 1; numero < 57; numero++)
	{
		printf("%d\n", numero);
	}
	
	numero=1;
	while( numero < 57)
	{
		
		printf("%d\n", numero);
		numero++;
	}
	
	numero=1;
	do
	{
		printf("%d\n", numero);
		numero++;
	}
	while( numero < 57);
}