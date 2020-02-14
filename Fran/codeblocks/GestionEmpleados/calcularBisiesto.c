<<<<<<< HEAD
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
=======
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
>>>>>>> 8bc0b13d6df47f49e7d86b65488d04536bd6d34b
