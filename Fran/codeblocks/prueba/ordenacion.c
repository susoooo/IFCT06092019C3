void ordenacion(int * pNumeros, int elementos)
{
    int mayor;
    int contador;
    int posicion;

    contador = 0;
    posicion = 0;
    mayor = *pNumeros;

    do
    {
        for (contador = posicion + 1; contador < elementos; contador ++)
        {
            if (mayor < *(pNumeros+contador))
            {
                mayor = *(pNumeros+contador);
                *(pNumeros+contador) = *(pNumeros+posicion);
                *(pNumeros+posicion) = mayor;
            }
        }
        posicion++;
        mayor = *(pNumeros+posicion);
    }
    while (posicion < elementos - 1);

}
