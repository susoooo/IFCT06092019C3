/* 1 Crear un programa que pregunte al usuario cuántos caracteres desea introducir, reserve
espacio para dicho número de caracteres, le permita al usuario introducirlos desde
teclado, y por último se los muestre todos seguidos. */

# include<stdio.h>
# include<stdlib.h>

int main(void)
{
int muchos;
int *reserva;
char letra;
int i;
printf("Cuantos caracteres quieres?\n");
scanf("%d", &muchos);
// Reservo el espacio para el número de caracteres que le dije.
reserva =(int *) malloc(sizeof(char) * muchos);
char caracteres[muchos];

printf("Introduce %s caracteres separados por espacios\n", muchos);
for(i=0;i=muchos;i++)
{
	scanf("%s", &letra);
	caracteres[i]=letra;
}

printf("Los caracteres introducidos son:\n");
for(i=0;i<muchos;i++)
{
	printf("%s", caracteres[i]);
}
}
