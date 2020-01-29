#include <stdio.h>
#include <stdlib.h>
#include <time.h>

extern float calculoFactorial(int num);
extern float combinatoria(int elementos, int grupo);
extern void ordenacion(int * pNumeros, int elementos);

int main()
{
	int numero;
	int opcion;
	int numElementos;
	int numGrupo;
	int contador;
	int serieNumeros[15];

	int * puntero;

	puntero = &serieNumeros[0];

	srand (time(NULL));

	do
    {
        numero = 0;
        numGrupo = 0;
        numElementos = 0;

        /*
        ╔ 201 - ╗ 187 - ┬ 194  - ╚ 200 - ╝ 188  -  ╩ 202 - ╦ 203 - ╠ 204 - ═ 205 - ╬ 206 - ╣ 185 - ║ 186 -
         - ┐ 191 - └ 192 - ┴ 193 - ─ 196 - ¬ 170 - | 124 - │ 179 - ┤ 180 - ┴ 193 - ┐ 191 - ┬ 194 - ┼ 197 - ├ 195 - ┘ 217 - ┌ 218
        */


        printf("\n Opciones disponibles:          ");
        printf("\n 1. Factorial de un numero.     ");
        printf("\n 2. Combinacion de n elementos. ");
        printf("\n 3. Ordenar un array.           ");
        printf("\n 4. Gestion de empleados.       ");
        printf("\n 0. Salir del programa.         ");

        scanf("%d", &opcion);

        switch (opcion)
        {
            case 1:
                printf("\nIntroduce un numero: ");
                scanf("%d", &numero);

                printf("\nEl factorial del numero %d, es: %.2f", numero, calculoFactorial(numero));
            break;

            case 2:
                printf("\nIntroduce el conjunto: ");
                scanf("%d", &numElementos);

                do
                {
                    printf("\nIntroduce numero de elementos: ");
                    scanf("%d", &numGrupo);

                    if (numGrupo > numElementos)
                    {
                        printf("\nEl grupo no puede ser mayor que el total de elementos.");
                    }
                }
                while (numGrupo > numElementos);

                printf("\nEl numero de combinaciones de %d elementos tomados en grupos de %d es de: %.2f", numElementos, numGrupo, combinatoria(numElementos, numGrupo));
            break;

            case 3:

/*                  printf("\nIntroduzca numero de elementos a ordenar: ");
                    scanf("%d", &numElementos);

                    generaArray(numElementos);
*/
                    numElementos = 15;


                    for (contador=0; contador < numElementos; contador++)
                    {
                        serieNumeros[contador] = rand() % 101;
                    }

                    for (contador = 0; contador < numElementos; contador++)
                    {
                        printf("%d, ", serieNumeros[contador]);
                    }

                    ordenacion(puntero, numElementos);

                    printf("\nLa serie de numeros ordenada es la siguiente: \n");

                    for (contador=0; contador < numElementos; contador++)
                    {
                        printf("%d, ", serieNumeros[contador]);
                    }

            break;

            case 4:

            break;

            default:
                printf("\nAdios y buenos dias.");
            break;
        }
    }
    while (opcion != 0);

    return(0);
}
