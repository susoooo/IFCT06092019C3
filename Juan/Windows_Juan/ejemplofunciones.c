#include <stdio.h>

int mensajeBienvenida()
{
printf("Hola\n");
/* return(-23); */
}

char mensajeDespedida(char opcion)
{
	
	if(opcion=='A')
	{
	printf("Adiós\n");
	}else
	{
	if(opcion=='B')
	{
	printf("Good bye");
	}else
	{
	if(opcion=='C')
	{
	printf("Ciao\n");
	}
	else{
	printf("Hasta siempre\n");
	}
	}
	}
/* return(23); */
}

char imprimirMenu()
{
printf("Escoge una de las siguientes opciones:\n");
printf("Opción A.\n");
printf("Opción B.\n");
printf("Opción C.\n");
printf("Opción D.\n");
}

char seleccionarOpcion()
{
char opcion;
scanf("%c\n", opcion);
}

int main()
{
char despedida;
mensajeBienvenida();
imprimirMenu();
seleccionarOpcion();
mensajeDespedida(despedida);
return(0);
}
