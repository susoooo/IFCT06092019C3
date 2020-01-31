/*
Utilizando threads acceder a un archivo e imprimir varias veces por pantalla el 
contenido del mismo de forma simultanea. Antes de imprimir el contenido del archivo por pantalla, 
preguntar al usuario cuantos threads se quieren lanzar para recorrer el archivo.
*/
#include <stdio.h>
#include <pthread.h>
#include <stdlib.h>

void *recorrer(void *fichero);

int main()
{
    FILE *fichero;
    int cantidadThread;
    int contadorFor;
    cantidadThread=0;
    pthread_t thread[1000];

    printf("Introduzca la cantidad de hilos que quiera ejecutar: ");
    scanf("%d",&cantidadThread);

    

    if((fichero=fopen("archivo.txt", "r"))!=0)
    {
        for(contadorFor=0; contadorFor<cantidadThread; contadorFor++)
        {
            pthread_create(&thread[contadorFor],NULL,recorrer,(void *)fichero);
        }
        for(contadorFor=0; contadorFor<cantidadThread; contadorFor++)
        {
            pthread_join(thread[contadorFor],NULL);
        }

        fclose(fichero);
    }
    else
    {
        perror("No se ha podido abrir el archivo");
    }
}

void *recorrer(void *fichero)
{
    FILE *fp;
    int c;

    fp=(FILE *)fichero;
    //fclose(fichero);
    while(!feof(fp))
    {
        fread(&c,sizeof(char),1,fp);
        fflush(stdout);
        printf("%c",c);
    }
    fseek(fp,0,SEEK_SET);
    pthread_exit(NULL);
}