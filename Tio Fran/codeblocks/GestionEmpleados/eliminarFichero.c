#include <stdio.h>
#include <stdlib.h>

int eliminarFichero(char nomFichero[13])
{
    int okBorrar;

    okBorrar = 0;

    char ruta[20];

    strcpy(ruta, strcat("del /Q ",nomFichero));

    system(ruta);

}
