#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <unistd.h>
void *lih(void*letra)
{
char * pMemo;
 size_t leidos;
 FILE * miFich;


  miFich = fopen("texto1.txt","r");
      pMemo=malloc(sizeof(char));
        do
        {
           leidos = fread(pMemo,sizeof(char),1,miFich);
              printf("%c",*pMemo);
          }
          while(!feof(miFich));
        free(pMemo);
     fclose(miFich);
}

int main()
{
int hilos;
char texto;
int cont;
FILE * archivo;
pthread_t manejador[100];
printf("Cuantos hilos:");
scanf("%d",&hilos);
archivo=fopen("texto1.txt","r");
for(cont=0;cont<hilos;cont++)
    {
        pthread_create(&manejador[cont],NULL,lih,(void*)archivo);
        usleep(10000);
    }
for(cont=0;cont<hilos;cont++)
{
pthread_join(manejador[cont],NULL);
}

    exit(0);
}
