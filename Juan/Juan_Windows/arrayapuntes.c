#include <stdio.h>

void main(){
int variables[23];
int contador;
int suma;
variables[3]=6;
variables[22]=10;
suma=0;

for(contador=0; contador<23; contador++)
{
	printf("%d\n", variables[contador]);
	suma=suma+variables[contador];
}
variables[1];
}