#include <stdio.h>

int sumar()
{
int suma;
int numero1;
int numero2;
numero1=0;
numero2=0;
printf("Introduce el valor del primer número ");
scanf("%d",&numero1);
printf("Introduce el valor del segundo número ");
scanf("%d",&numero2);
suma=numero1+numero2;
printf("La suma es: %d\n",suma);
}

int restar()
{
int resta;
int numero1;
int numero2;
numero1=0;
numero2=0;

printf("Introduce el valor del primer número ");
scanf("%d",&numero1);
printf("Introduce el valor del segundo número ");
scanf("%d",&numero2);

resta=numero1-numero2;
printf("La resta es: %d\n",resta);
}

int multiplicar()
{
int producto;
int numero1;
int numero2;
producto=0;
numero1=0;
numero2=0;

printf("Introduce el valor del primer número ");
scanf("%d",&numero1);
printf("Introduce el valor del segundo número ");
scanf("%d",&numero2);

producto=numero1*numero2;
printf("La multiplicación es: %d\n",producto);
}
float dividir()
{
float division;
int numero1;
int numero2;
division=0.0;
numero1=0;
numero2=0;

printf("Introduce el valor del primer número ");
scanf("%d",&numero1);
printf("Introduce el valor del segundo número ");
scanf("%d",&numero2);

division=(float)numero1/(float)numero2;
printf("La división es: %0.2f\n",division);
}

void main(){
int opcion;

// Cálculo.
printf("Bienvenido a calcuplus\n");
printf("Escoge la operación que deseas realizar\n");
printf("Para sumar pulsa 1\n");
printf("Para restar pulsa 2\n");
printf("Para multiplicar pulsa 3\n");
printf("Para dividir pulsa 4\n");
scanf("%d", &opcion);

if(opcion==1)
{
sumar();
}
else
{
	if(opcion==2)
	{
	restar();
	}		
	else
	{
		if(opcion==3)
		{
		multiplicar();
		}
		else
		{
			if(opcion==4)
			{
			dividir();
			}
			else
			{
				printf("No has pedido ninguna operación\n");
			}
		}
	}
}
}
