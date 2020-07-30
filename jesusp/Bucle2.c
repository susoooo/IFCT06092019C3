#include <stdio.h>

main(){
	int numero1;
	int numero2;
	numero1=1;
	numero2=0;
	
	printf("Dame un numero:");
	scanf("%d", &numero2);
	
	for(numero1 = 1; numero1 < numero2; numero1++)
	{
		printf("%d\n", numero1);
	}
	
	numero1=1;
	while( numero1 < numero2)
	{
		
		printf("%d\n", numero1);
		numero1++;
	}
	
	numero1=1;
	do
	{
		printf("%d\n", numero1);
		numero1++;
	}
	while( numero1 < numero2);
}