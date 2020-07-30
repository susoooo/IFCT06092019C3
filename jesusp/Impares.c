#include <stdio.h>

main()
{
	
	int numero1;
	int numero2;
	int cont;
	
	numero1=0;
	numero2=0;
	cont=0;
	
	printf("Dame el primer numero: ");
	scanf("%d", &numero1);
	printf("Dame el segundo numero: ");
	scanf("%d", &numero2);
	for(cont=numero1;cont <= numero2 ; cont++)
	{
		if(cont%2!=0)
		{
			printf("%d\n",cont);
		}	
			
		
	}
	
	
}