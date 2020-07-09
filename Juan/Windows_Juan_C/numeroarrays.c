/*
Hacer tres ejercicios:
1)	un programa que inicialice un array. “inicializando…”,”
2)	imprima un array
    3103471094893421209439412912349324
3)	un programa que pida 8 números y los muestre por pantalla.
*/

#include <stdio.h>

void main(){
	
// Ejercicio 1)	
int primerArray[15];
int contador;
printf("Inicializando el array...\n");
for(contador=0;contador<15;contador++)
{
	// primerArray[contador]=0;
	// scanf("%d\n", &primerArray[contador]);
	printf("La posición número %d del array tiene el valor %d\n", contador, primerArray[contador]);
}
printf("Array inicializado.\n");

// Ejercicio 2)
 int arrayNumeros[40];
 int numero;
 numero=40;
printf("Imprimiendo el contenido del array\n");
for(contador=0;contador<numero;contador++)
{
printf("%d %d\n", contador, arrayNumeros[contador]);
}

// Ejercicio 3)
int arrayOcho[8];
contador=1;
numero=8;
while(contador<=numero)
{
printf("Introduce el %dª número ", contador);
scanf("%d", &arrayOcho[contador]);

contador++;
}
printf("Los números del array son\n");
for(contador=1;contador<=numero;contador++)
{
	printf("%d", arrayOcho[contador]);
	printf("\n");
}
}


