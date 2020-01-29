#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int abrirFichero(char nomFichero[13], char modo[2])
{
    char sino;
    int ok;

    ok = 0;

    indice = fopen(nomFichero, modo);

    if (indice == 0)
    {
        printf("\nAVISO!!! El archivo no existe o no se encuentra, desea crearlo? (S/N): ");
        scanf("\n%c", &sino);

        if (strcmp(sino, 'S') || strcmp(sino, 's'))
        {
            fclose(indice);
            indice = fopen(nomFichero, "w");
            printf("\nFichero de jugadores creado/inicializado...");
            ok = 1;
        }
    }
    else
    {
        ok = 1;
    }

    return(ok);
}
