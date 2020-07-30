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
	printf("Que tal estas?");
}
int seleccionarOpcion()
{
	int opcion;	
	printf("\n Introduzca una opcion:");
	scanf("%d",&opcion);
}
int main()
{
  mensajeBienvenida();
  imprimirMenu();
  seleccionarOpcion();
  mensajeDespedida();
  return(0);
}
