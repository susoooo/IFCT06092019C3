#include <stdio.h>

struct empleado
{
char nombre;
char sexo;
int sueldo;
};

struct empleado sueldoMayor;
struct empleado sueldoMenor;
main ()
{
struct empleado currito[10];

int contador;
contador = 0;
for(contador=0;contador<10;contador++)
{
    printf("Introduce un nombre:");
    scanf("%s",currito[contador].nombre);
}
}
