#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <unistd.h>
#include <string.h>

// debe incluirse sudo apt-get install libncurses5-dev libncursesw5-dev

#include <ncurses.h>

struct datos
{
    char textoLinea[1024]; //Contenido de la linea de texto.
    int linea; // Linea/fila en la que escribir el texto.
    int numHilos; // Total de hilos creados.
};

void * printFichero (void * datosRec)
{
    initscr();

    int columna;
    int largoLinea;

    struct datos * pDatos;

    pDatos = (struct datos *) datosRec;

    int fila[pDatos->numHilos];

    largoLinea = strlen((char *)(pDatos->textoLinea));

    char texto[largoLinea];

    strcpy(texto, (pDatos->textoLinea));

    fila[pDatos->linea] = (pDatos->linea);

    for (columna = 0; columna < largoLinea; columna++)
    {

        if (texto[columna] != '\n')
        {
            move(fila[pDatos->linea], columna);

            printw("%c-%d", texto[columna], pDatos->linea);
        }
        else
        {
            columna = largoLinea;
        }

        refresh();
        //usleep (500000);
    }
    endwin();
}

void main()
{
    int numHilos;
    int contador;

    char linea[1024];

    FILE * fichero;

    struct datos * datosEnv;

    pthread_t * h;

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

    datosEnv = malloc(sizeof(struct datos)*numHilos);

    h = malloc(sizeof(pthread_t) * numHilos);

    printw("\nSe van a crear %d hilos.\n", numHilos);

    for (contador = 0; contador < numHilos; contador++)
    {
        strcpy( datosEnv[contador].textoLinea, fgets(linea, 1024, (FILE*) fichero) );
        printf("\n%s", datosEnv[contador].textoLinea);
        /*
        datosEnv[contador].linea = contador;
        datosEnv[contador].numHilos = numHilos;
        pthread_create(&h[contador], NULL, printFichero, (void *)&datosEnv[contador]);
        */
    }

    for (contador = 0; contador < numHilos; contador++)
    {
        pthread_join(h[contador],NULL);
    }

    fclose(fichero);
    printw("\n\nEjecucion finalizada.\n");
}

