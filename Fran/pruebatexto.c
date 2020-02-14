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

void main ()
{

    int columna;
    int largoLinea;
    float pausa;

    struct datos pDatos;

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

    // pDatos = (struct datos *) datosRec;

    int fila[pDatos.numHilos];

    strcpy( pDatos.textoLinea, fgets(linea, 1024, (FILE*) fichero) );

    largoLinea = strlen((char *)(pDatos.textoLinea));

    char texto[largoLinea];

    strcpy(texto, (pDatos.textoLinea));

    fila[pDatos.linea] = (pDatos.linea);

    initscr();

    for (columna = 0; columna < largoLinea; columna++)
    {
        move(fila[pDatos.linea]+1, columna);

        if (texto[columna] != '\n')
        {
            // printf("%c", texto[columna]);
            printf("%d, ", fila[pDatos.linea]);
        }
        else
        {
            columna = largoLinea;
        }

        fflush (stdout);
        // pausa = 800000 * rand() % 11;
        usleep (800000);
    }
    endwin();
}
