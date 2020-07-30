#include<stdio.h>
#include<math.h>

int mayor(int numero1,int numero2,int numero3)
{
	int may;
	may=0;
	if(numero1 > numero2 && numero1 > numero3)
	{
		may=numero1;	
	}
	else
	{
		if(numero2 > numero1  && numero2 > numero3)
		{	
			may=numero2;		
		}
		else 
		{
			if(numero3 > numero1 && numero3 > numero2)
			{	
				may=numero3;		
			}
		}
		
	}
	printf("El numero mayor es el:%d", may);
}

int menor(int numero1,int numero2,int numero3)
{
	int men;
	men=0;
	if(numero1 < numero2 && numero1 < numero3)
	{
		men=numero1;
	}
	else
	{
		if(numero2 < numero1 && numero2 < numero3)
		{			
			men=numero2;
		}
		else
		{
			if(numero3 < numero1 && numero3 < numero2)
			{
				men=numero3;
			}
		}
		
	}
	printf("El numero menor es el: %d", men);	
}

int main()
{
	int opcion;
	opcion=0;
	int numero1;
	int numero2;
	int numero3;
	numero1=0;
	numero2=0;
	numero3=0;
	printf("Introduce el primer numero: ");
	scanf("%d",&numero1);
	printf("Introduce el segundo numero: ");
	scanf("%d",&numero2);
	printf("Introduce el tercer numero: ");
	scanf("%d",&numero3);
	
	printf("Introduce una opcion:");
	scanf("%d",&opcion);
	if (opcion==1)
	{
		mayor(numero1,numero2,numero3);
	}
	else
	{
		if(opcion==2)
		{
			menor( numero1, numero2, numero3);
		}
		else
		{
			printf("opcion incorrecta");
		}
	}
	
}