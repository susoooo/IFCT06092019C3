#include <stdio.h>
#include <math.h>

int suma()
{
	int numero1;
	float numero2;	
	int sum;
	numero1=0;
	numero2=0.0;
	sum=0;
	printf("El primer numero:",numero1);
	scanf("%d", &numero1);
	printf("El segundo numero:",numero2);
	scanf("%f", &numero2);
	sum=numero1+numero2;
	printf("\n La suma es: %d",sum);
}

int resta()
{
	int numero1;
	float numero2;	
	int rest;
	numero1=0;
	numero2=0.0;
	rest=0;
	printf("El primer numero:",numero1);
	scanf("%d", &numero1);
	printf("El segundo numero:",numero2);
	scanf("%f", &numero2);
	rest=numero1-numero2;
	printf("\n La resta es: %d",rest);
}

int multiplicacion()
{
	int numero1;
	float numero2;	
	int producto;
	numero1=0;
	numero2=0.0;
	producto=0;
	printf("El primer numero:",numero1);
	scanf("%d", &numero1);
	printf("El segundo numero:",numero2);
	scanf("%f", &numero2);
	producto=numero1*numero2;
	printf("\n La multiplicacion es: %d",producto);
}
float division()
{
	int numero1;
	float numero2;	
	float divi;
	numero1=0;
	numero2=0.0;
	divi=0;
	printf("El primer numero:",numero1);
	scanf("%d", &numero1);
	printf("El segundo numero:",numero2);
	scanf("%f", &numero2);
	if(numero2==0.0)
		{
			printf("La division es imposible");
		}
		else
		{
		divi=numero1/numero2;
		printf("La division es: %.3f", divi);
		}
}
int main()
{ 
 int operacion; 
 operacion=0;
 
 printf("Hola, soy Calcu+\n");
 printf("La operacion a realizar: ");
 scanf("%d", &operacion);
	if(operacion == 1)
	{
 		suma();		
	}else
	{
		if(operacion == 2){
			resta();			
			}else
			{
				if(operacion == 3)
				{
					multiplicacion();					
				}else{
						if(operacion == 4)
						{
							division();
						}
					else{
							printf("EERRORR...");
						}
			}
		} 
 	}
 printf("\n  Adios");	
}
