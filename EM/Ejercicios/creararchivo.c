/*Crear programa que cree un archivo que genere numeros del 0 al 1000 */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <pthread.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

main()

{

FILE * fichero;
int contador;
int* pMemo;


fichero=fopen("numeros.dat","a");
pMemo=malloc(sizeof(int));

for(contador=0; contador<1000;contador++)
{

*pMemo=contador;

fwrite(pMemo,sizeof(int),1,fichero);

}


fclose(fichero);

}