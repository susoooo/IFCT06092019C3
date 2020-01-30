#include<stdio.h>
int saludo()
	{	
		printf("Hola soy CALCU+\n");
		return(0);
	}
	
int opcion()
	{	
		printf("Opcion 1 suma\n");
		printf("Opcion 2 resta\n");
		printf("Opcion 3 multiplicacion\n");
		printf("Opcion 4 division\n");
		printf("Opcion 5 salir\n");
		return(0);
	}
	
int suma()
{
	float numero1;
	float numero2;
	float suma;
	
	numero1=0;
	numero2=0;
	suma=0;

	printf("primer numero\n");
	scanf("%f",&numero1);
	printf("segundo numero\n");
	scanf("%f",&numero2);
	suma = numero1+numero2;
	printf("Resultado suma: %f\n",suma);
	return(0);
	
}

int resta()
{
	float numero1;
	float numero2;
	float resta;
	
	numero1=0;
	numero2=0;
	resta=0;
	
	printf("primer numero\n");
	scanf("%f",&numero1);
	printf("segundo numero\n");
	scanf("%f",&numero2);
	resta = numero1-numero2;
	printf("Resultado resta:%f\n",resta);
	return(0);
}

int multiplicacion()
{
	float numero1;
	float numero2;
	float multiplicacion;
	
	numero1=0;
	numero2=0;
	multiplicacion=0;

	printf("primer numero\n");
	scanf("%f",&numero1);
	printf("segundo numero\n");
	scanf("%f",&numero2);
	multiplicacion = numero1*numero2;
	printf("Resultado multiplicacion:%f\n",multiplicacion);
	return(0);
}

int division()
{
	
	
	float numero1;
	float numero2;
	float division;
	
	numero1=0;
	numero2=0;
	division=0;

	printf("primer numero\n");
	scanf("%f",&numero1);
	printf("segundo numero\n");
	scanf("%f",&numero2);
	division = numero1/numero2;
	printf("Resultado division:%f\n",division);
	return(0);
}

int main()
{
	saludo();
	opcion();
	
	int opcion;
	
	opcion=0;
	
	do
	{
		scanf("%d",&opcion);
		
		if(opcion==1)
		{
			suma();
		}
		else
		{
			if(opcion==2)
			{
				resta();
			}
			
			else
			{
				if(opcion==3)
				{
					multiplicacion();
				}
				else
				{
					if(opcion==4)
					{
						division();
					}
					
					else
					{ if(opcion<1 || opcion>5)
						{printf("error\n");
							return(0);
						}
					}
				}
			}
		}
	}
	while(opcion<5);
	printf("Adios");
return(0);
}
	