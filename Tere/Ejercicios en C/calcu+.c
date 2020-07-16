#include<stdio.h>

int mensajeBienvenida() 
{
	printf("Hola soy Calcu+\n");
	printf("Version 1.0\n");
	printf("Programador por: Teresa\n");
	
	return(-23);
}

int imprimirMenu()
{
	printf("\nIntroduce la operacion\n");
	printf("1 - Suma\n");
	printf("2 - Resta\n ");
	printf("3 - Multiplicacion\n");
	printf("4 - Division\n");
	printf("5 - Salir\n");
	return(0);
}

int seleccionarOpcion()
{	
	int operacion;
	
	operacion= 0;
	
	printf("Numero de la operacion: ");
	scanf("%d",&operacion);
	return(operacion);
}

int suma()
{	
	int numero1;
	int numero2;
	int suma;
	
	numero1= 0;
	numero2= 0;
	suma= 0;
	
	printf("Dime el primer numero: ");
	scanf("%d",&numero1);

	printf("Dime el segundo numero: ");
	scanf("%d",&numero2);
		
	suma=numero1+numero2;
	printf("La suma es: %d\n",suma);
	
	return(0);
}

int resta()
{	
	int numero1;
	int numero2;
	int resta;
	
	numero1= 0;
	numero2= 0;
	resta= 0;
	
	printf("Dime el primer numero: ");
	scanf("%d",&numero1);

	printf("Dime el segundo numero: ");
	scanf("%d",&numero2);
	
	resta=numero1-numero2;
	printf("La resta es: %d\n",resta);
	
	return(0);
}

int multiplicacion()
{	
	int numero1;
	int numero2;
	int multiplicacion;
	
	numero1= 0;
	numero2= 0;
	multiplicacion= 0;
	
	printf("Dime el primer numero: ");
	scanf("%d",&numero1);

	printf("Dime el segundo numero: ");
	scanf("%d",&numero2);
	
	multiplicacion=numero1*numero2;
	printf("La multiplicacion es: %d\n",multiplicacion);
	
	return(0);
}
int division()
{
	int numero1;
	int numero2;
	float division;
	
	numero1= 0;
	numero2= 0;
	division= 0.0;
	
	printf("Dime el primer numero: ");
	scanf("%d",&numero1);
	
	do
	{
	printf("Dime el segundo numero: ");
	scanf("%d",&numero2);
	
	}
	while(numero2==0);
	
	
	division = (float)numero1/numero2;
	printf("La division es: %.2f\n",division);
	
	
	return(0);
} 

int mensajeDespedida()
{
	printf("Hasta pronto\n");
}


int main()
{
	int operacion;
	
	operacion=0;
	
	mensajeBienvenida();
	
do
{ 
	imprimirMenu();
	
	operacion=seleccionarOpcion();

if(operacion==1)
{
	suma();
}
else
{
	if(operacion==2)
	{
		resta();
	}
	else
	{
		if(operacion==3)
		{
			multiplicacion();
		}
		else
		{	
			if(operacion==4)
			{
				division();
			}
		}
		
	}
	

}
}
while(operacion!=5);

mensajeDespedida();

}

