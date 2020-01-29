#include<stdio.h>
main()
{	int numero1;
	int numero2;
	int numero3;

	numero1=0;
	numero2=0;
	numero3=0;

	printf("numeros pares e inpares\n");
	printf("Numero 1:\n");
	scanf("%d",&numero1);
	printf("Numero 2:\n");
	scanf("%d",&numero2);
	printf("Numero 3:\n");
	scanf("%d",&numero3);

	if(numero1%2==0)
	{printf("Numero 1:%d",numero1);
	printf("es par\n");
	}

	else
	 {printf("Numero 1:%d",numero1);
	 printf("es inpar\n");
	 }

	if(numero2%2==0)
	{printf("Numero 2:%d",numero2);
	printf("es par\n");
	}

	else
	 {printf("Numero 2:%d",numero2);
	 printf("es inpar\n");
	 }

	if(numero3%2==0)
	{printf("Numero 3:%d",numero3);
	printf("es par\n");
	}

	else
	 {printf("Numero 3:%d",numero3);
	 printf("es inpar\n");
	 }
}