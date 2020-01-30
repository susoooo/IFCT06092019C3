#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int crearFichero(char nomFichero[13])
{
    char sino;
    int okCrear;
    char modo[2];

    okCrear = 0;

    indice = fopen(nomFichero, "r");

    if (indice != 0)
    {
        do
        {
            printf("\nAVISO!!! El archivo ya existe, desea crearlo/reinicializarlo? (S/N): ");
            scanf("\n%c", sino);

            if (sino == 'S' || sino == 's')
            {
                fclose(indice);
                indice = fopen(nomFichero, "w");
                printf("\nFichero de jugadores creado/inicializado...");

            }
        }
        while (sino != 'S' || sino != 's' || sino != 'N' || sino != 'n');

        okCrear = fclose(indice);
    }

    return(okCrear);
}
