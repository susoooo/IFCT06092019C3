/* Crear programa que cree un archivo que genere numeros del 0 al 1000*/


#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>


main()
{
int* puntero;
FILE* fichero;
int contador;




fichero= fopen("numeros.dat","a");
puntero=malloc(sizeof(int));

for(contador=0; contador<1000; contador++)
{
    * puntero=contador;

    fwrite(puntero,sizeof(int),1,fichero);
}

fclose(fichero);


}
