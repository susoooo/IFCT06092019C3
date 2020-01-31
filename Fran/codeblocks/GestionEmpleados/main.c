#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "estructuras.h"
#include "funciones.h"

/*
struct fecha
{
	int dia;
	int mes;
	int anio;
};

struct personas
{
    char activo;
	char nombre[15];
	char sexo[6];
	int altura;
	struct fecha fechaNacimiento;
	int edad;
	// float sueldo;
};

FILE * indice;

extern int crearFichero(char nomFichero[13]);
extern int abrirFichero(char nomFichero[13], char modo[2]);
extern int cerrarFichero();
extern int eliminarFichero(char nomFichero[13])
extern int agregarJugador (char nomFichero[13]);
extern int listadoJugadores();
extern int listarJugador();
extern int buscarJugador(char * nombreJugador);
extern int calcularBisiesto (int anho);
extern struct fecha calculoEdad(struct fecha fechaNacimiento[1]);

*/

int main(void)
{
	int opcionMenu;
	int todoOK;

	char fichero[13];

	do
    {
        system("cls");

        printf("\nGestion de jugadores 1.0           ");
        printf("\n-----------------------------------");
        printf("\n1. Creacion archivo jugadores.     ");
        printf("\n2. Introducir nuevo jugador.       ");
        printf("\n3. Modificar datos jugador.        ");
        printf("\n4. Eliminar jugador (borrado).     ");
        printf("\n5. Eliminar jugador (marcado).     ");
        printf("\n6. Eliminar archivo jugadores.     ");
        printf("\n7. Busquedas.                      ");
        printf("\n8. Listados .                      ");
        printf("\n9. Calculo medias.                 ");
        printf("\n0. Salir.                          ");
        printf("\n-----------------------------------");
        printf("\nElegir opcion: ");

        scanf("%d", &opcionMenu);

        switch (opcionMenu)
        {
            case 1:

                printf("\nIntroduzca el nombre del fichero a crear (sin extension): ");
                scanf("\n%c", fichero);
                strcat(fichero, ".txt");
                todoOK = crearFichero(fichero);

                if (todoOK == 0)
                {
                    printf("\nProceso realizado correctamente.\nPulse una tecla para continuar. ");
                    system("pause");
                }
                else
                {
                    printf("\nSe ha producido un error en el proceso.\nPulse una tecla para volver al menu principal.");
                    system("pause");
                }

            break;

            case 2:

                todoOK = agregarJugador(fichero);
                if (todoOK == 0)
                {
                    printf("\nProceso realizado correctamente.\nPulse una tecla para continuar. ");
                    system("pause");
                }
                else
                {
                    printf("\nSe ha producido un error en el proceso.\nPulse una tecla para volver al menu principal.");
                    system("pause");
                }


            break;

            case 3:

            break;

            case 4:

            break;

            case 5:

            break;

            case 6:

                todoOK = 0;
                printf("\nIntroduzca el nombre del fichero a borrar (sin extension): ");
                scanf("\n%s", fichero);

                strcat(fichero, ".txt");
                todoOK = eliminarFichero(fichero);

                if (todoOK == 0)
                {
                    printf("\nFichero borrado correctamente.");
                }
                else
                {
                    printf("\nSe ha producido un problema al borrar.");
                }

            break;

            case 7:

            break;

            case 8:

            break;

            case 9:

            break;

            default:

                cerrarFichero();

            break;
        }
    }
    while (opcionMenu != 0);

    return(0);
}
