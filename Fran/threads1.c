#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <unistd.h>
#include <string.h>
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
    int hilos;
    int contador;

    char linea[1024];

    FILE * fichero;

    struct datos * datosEnv;

    pthread_t * h;

    hilos = 0;

    fichero = fopen("texto.txt", "r");

    if (fichero == 0)
    {
        printf("\nProblemilla abriendo fichero");
    }

    while ( fgets(linea, 1024, (FILE*) fichero) )
    {
        hilos++;
    }

    rewind(fichero);

    /*
    printf("\nCuantos hilos se van a crear: ");
    scanf("%d", hilos);
    */

    datosEnv = malloc(sizeof(struct datos) * hilos);

    h = malloc(sizeof(h) * hilos);

    printw("\nSe van a crear %d hilos.\n", hilos);

    for (contador = 0; contador < hilos; contador++)
    {
        strcpy( datosEnv[contador].textoLinea, fgets(linea, 1024, (FILE*) fichero) );
        printw("\n%s", datosEnv[contador].textoLinea);
        /*
        datosEnv[contador].linea = contador;
        datosEnv[contador].numHilos = hilos;
        */
        pthread_create(&h[contador], NULL, printFichero, (void *)&datosEnv[contador]);
        refresh();
    }

    for (contador = 0; contador < hilos; contador++)
    {
        pthread_join(h[contador], NULL);
    }

    fclose(fichero);
    printw("\n\nEjecucion finalizada.\n");
}

