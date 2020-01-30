#include <stdio.h>
#include <stdlib.h>


int cerrarFichero()
{
    int okCerrar;

    okCerrar = fclose(indice);

    return(okCerrar);
}
