#include <stdio.h>

void main()
{
// Declaración.
int numero1;
int numero2;
int opcion;
int suma;
int resta;
float producto;
float division;
// Inicialización.
numero1=0;
numero2=0;
suma=0;
resta=0;
producto=0.0;
division=0.0;
// Cálculo.
printf("Bienvenido a calcuplus\n");
printf("Introduce el valor del primer número ");
scanf("%d",&numero1);
printf("Introduce el valor del segundo número ");
scanf("%d",&numero2);
printf("Escoge la operación que quieres hacer\n");
printf("Pulsa:\n"
"1 para hacer la suma\n"
"2 para hacer la resta\n"
"3 para hacer la multiplicación\n"
"4 para hacer la división\n");
scanf("%d", &opcion);
	if(opcion==1)
	{
	suma=numero1+numero2;
	printf("La suma es %d", suma);
	}
	else
	{
		if(opcion==2)
		{
		resta=numero1-numero2;
		printf("La resta es %d", resta);
		}
		else
		{
			if(opcion==3)
			{
			producto=numero1*numero2;
			printf("El producto es %0.2f", producto);
			}
			else
			{
				if(opcion==4)
				{
				division=(float)numero1/(float)numero2;
				printf("La división es %0.2f", division);
				}	
				else
				{
				printf("No has escogido ninguna operación\n");
				}
			}	
		}
	}
}