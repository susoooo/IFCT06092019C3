#include <stdio.h>
#include <stdlib.h>

int calcularBisiesto (int anho)
{
    int bisiesto;

    bisiesto = 0;

    if (anho % 4 == 0 || (anho % 400 == 0 && anho % 100 == 0) )
    {
        bisiesto = 1;
    }

    return (bisiesto);
}
