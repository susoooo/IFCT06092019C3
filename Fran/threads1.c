#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <unistd.h>
#include <string.h>

// debe incluirse sudo apt-get install libncurses5-dev libncursesw5-dev

#include <ncurses.h>

struct datos
{
    char textoLinea[1024];
    int linea;
    int numHilos;

};

void * printFichero (void * datosRec)
{

    int columna;
    int largoLinea;

    struct datos * pDatos;

    pDatos = (struct datos *) datosRec;

    int fila;

    largoLinea = strlen((char *)(pDatos->textoLinea));

    char texto[largoLinea];

    strcpy(texto, (pDatos->textoLinea));

    fila = (pDatos->linea);

    clear();

    for (columna = 0; columna < largoLinea; columna++)
    {
        move(fila, columna);

        if (texto[columna] != '\n')
        {
            printf("%c", texto[columna]);
        }

        fflush (stdout);
        usleep (300000) ;
    }
}

void main()
{
    int numHilos;
    int contador;

    char linea[1024];

    FILE * fichero;

    numHilos = 0;

    fichero = fopen("texto.txt", "r");

    while ( fgets(linea, 1024, (FILE*) fichero) )
    {
        numHilos++;
    }

    rewind(fichero);

    /*
    printf("\nCuantos hilos se van a crear: ");
    scanf("%d", numHilos);
    */

    struct datos datosEnv[numHilos];

    pthread_t h[numHilos];

    printf("\nSe van a crear %d hilos.\n", numHilos);

    // initscr();

    for (contador = 0; contador < numHilos; contador++)
    {
        strcpy( datosEnv->textoLinea, fgets(linea, 1024, (FILE*) fichero) );
        datosEnv[contador].linea = contador;
        datosEnv[contador].numHilos = numHilos;
        pthread_create(&h[contador], NULL, printFichero, (void *)&datosEnv[contador]) ;
    }

    for (contador = 0; contador < numHilos; contador++)
    {
        pthread_join(h[contador],NULL);
    }

    // usleep(5000000);

    // endwin();
    fclose(fichero);
    printf("\n\nEjecucion finalizada.\n");
}

