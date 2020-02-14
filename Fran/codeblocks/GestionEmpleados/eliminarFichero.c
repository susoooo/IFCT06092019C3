<<<<<<< HEAD
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
=======
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
>>>>>>> 8bc0b13d6df47f49e7d86b65488d04536bd6d34b
