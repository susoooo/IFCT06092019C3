/*
Diagrama de flujo
*/

#include <stdio.h>

void main(){
//Declaracion
int numero;
//Inicialización
numero=0;
//Introducción de los datos
printf("Bienvenid@s a condiciona v. 0.0\n");
printf("Introduce un número\n");
scanf("%d", &numero);
printf("Calculando...\n");
//Operaciones y salida de datos por pantalla
if(numero==1)
	{
	printf("A jugaaaar\n");
	}
else{
	if(numero==2)
		{
		printf("A estudiaaaaar\n");
		}
	else{
		printf("Error\n");
		}	
	}
printf("Adiós\n");
}