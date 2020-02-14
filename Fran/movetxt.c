#include <stdio.h>
#include <stdlib.h>
#include <ncurses.h>
#include <unistd.h>
#include <string.h>


void main()
{
    initscr();

    int contador;
    int columna;
    int fila;
    int largoLinea;

    largoLinea = 27;

    char cadena[27];

    strcpy(cadena, "ABCDEFGHIJKLMNOPQRSTUVWXYZ");

    for (contador = 0; contador< largoLinea; contador++)
    {
        fila = (int)rand() % 15;
        columna = (int)rand() % 27;

        move(fila, columna);

        printw("%c", cadena[columna] );

        refresh();
        // fflush(stdout);
        usleep (500000);
    }

    getch();
    endwin();
}
