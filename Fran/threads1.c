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

    int columna;
    int largoLinea;
    float pausa;

    struct datos * pDatos;

    pDatos = (struct datos *) datosRec;

    int fila[pDatos->numHilos];

    largoLinea = strlen((char *)(pDatos->textoLinea));

    char texto[largoLinea];

    strcpy(texto, (pDatos->textoLinea));

    fila[pDatos->linea] = (pDatos->linea);

    for (columna = 0; columna < largoLinea; columna++)
    {
        move(fila[pDatos->linea], columna);

        if (texto[columna] != '\n')
        {
            printf("%c", texto[columna]);
        }
        else
        {
            columna = largoLinea;
        }

        fflush (stdout);
        // pausa = 800000 * rand() % 11;
        usleep (500000);
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

    initscr();

    for (contador = 0; contador < numHilos; contador++)
    {
        strcpy( datosEnv[contador].textoLinea, fgets(linea, 1024, (FILE*) fichero) );
        datosEnv[contador].linea = contador;
        datosEnv[contador].numHilos = numHilos;
        pthread_create(&h[contador], NULL, printFichero, (void *)&datosEnv[contador]) ;
    }

    for (contador = 0; contador < numHilos; contador++)
    {
        pthread_join(h[contador],NULL);
    }

    // usleep(5000000);

    endwin();
    fclose(fichero);
    printf("\n\nEjecucion finalizada.\n");
}

