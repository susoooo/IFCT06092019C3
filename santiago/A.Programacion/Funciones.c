#include <stdio.h>

int mensajeBienvenida()
{
  printf("Hola\n");
  return(-23);
}

int mensajeDespedida()
{
  printf("Adios\n");
  return(23);
}

int imprimirMenu()
{
	printf("opcion1 sumar\n opcion2 restar\n");
	return(0);
}

int  seleccionarOpcion()
{
	float numero;
	float numero2;
	int opcion;
	
	numero=0;
	numero2=0;
	opcion=0;
	
	scanf("%d",&opcion);
	if(opcion==1)
	{
		printf("primer numero \n");
		scanf("%f",&numero);
		printf("primer numero2 \n");
		scanf("%f",&numero2);
		return(0);
	}
	else
	{
		return(0);
	}
}
	
int main()
{
	mensajeBienvenida();
	imprimirMenu();
	seleccionarOpcion();
	mensajeDespedida();
	return(0);
}

