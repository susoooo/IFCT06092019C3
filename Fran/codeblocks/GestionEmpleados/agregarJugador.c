<<<<<<< HEAD
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "estructuras.h"

int agregarJugador (char nomFichero[13])
{
    struct personas datosJugador[1];

    int valor;
    int altura;
    int dia;
    int mes;
    int anio;
    char continuar;
    int opcion;
    int bisAnio;

    void * pAgregar;

    size_t escritos;

    int okAgregar;

    okAgregar = 0;

    continuar = 'N';

    pAgregar = (struct personas *) malloc(sizeof(datosJugador));

    indice = fopen(nomFichero, "a");

    do
    {
            system("cls");

            printf("\n1. Agregar nuevo jugador.");
            printf("\n0. Volver al Menu Principal.");
            printf("\n----------------------------");

            scanf("\n%d", &opcion);

        switch(opcion)
        {
            case 1:
                do
                {
                    printf("\n\nNombre del jugador: ");
                    scanf("\n%s", datosJugador.nombre);

                    if (strlen(datosJugador.nombre <= 1))
                    {
                        printf("\nLongitud del nombre no valida. Try again.");
                    }

                }
                while (strlen(datosJugador) <= 1);

                do
                {
                    printf("\nSexo: (1-Mujer) (2-Hombre): ");
                    scanf("\n%d", &valor);

                    switch (valor)
                    {
                        case 1:
                            strcpy(datosJugador.sexo, "Mujer" );
                        break;

                        case 2:
                            strcpy(datosJugador.sexo, "Hombre" );
                        break;

                        default:
                            printf("\nOpcion incorrecta.");
                    }
                }
                while (valor != 1 || valor != 2);

                do
                {
                    printf("\nAltura del jugador (centimetros): ");
                    scanf("\n%d", &altura);

                    if (altura < 80 || altura > 250)
                    {
                        printf("\nAltura no valida.");
                    }
                    else
                    {
                        datosJugador.altura = altura;
                    }
                }
                while(altura < 80 || altura > 250);

                do
                {
                    okAgregar = 1;
                    printf("\nFecha de nacimiento: ");
                    printf("\n---------------------");
                    printf("\nDia: ");
                    scanf("\n%d", &dia);

                    printf("\nMes: (1-12)");
                    scanf("\n%d", &mes);

                    printf("\nAnho: ");
                    scanf("\n%d", &anio);

                    switch (dia)
                    {
                        case 1:
                        case 3:
                        case 5:
                        case 7:
                        case 8:
                        case 10:
                        case 12:

                            if (dia < 1 || dia > 31)
                            {
                                printf("\nDatos incorrectos.");
                                okAgregar = 0;
                            }
                            else
                            {
                                datosJugador.fechaNacimiento.dia = dia;
                                datosJugador.fechaNacimiento.mes = mes;
                                datosJugador.fechaNacimiento.anio = anio;
                            }
                        break;

                        case 4:
                        case 6:
                        case 9:
                        case 11:

                            if (dia < 1 || dia > 30)
                            {
                                printf("\nDatos incorrectos.");
                                okAgregar = 0;
                            }
                            else
                            {
                                datosJugador.fechaNacimiento.dia = dia;
                                datosJugador.fechaNacimiento.mes = mes;
                                datosJugador.fechaNacimiento.anio = anio;
                            }

                        break;

                        case 2:

                            bisAnio = calcularBisiesto(anio);
                            if ((dia < 1 || (dia > 28 && bisAnio == 0) || dia > 29 ))
                            {
                                printf("\nDatos incorrectos.");
                                okAgregar = 0;
                            }
                            else
                            {
                                datosJugador.fechaNacimiento.dia = dia;
                                datosJugador.fechaNacimiento.mes = mes;
                                datosJugador.fechaNacimiento.anio = anio;
                            }

                        break;

                        default:
                            printf("\nDatos incorrectos.");
                            okAgregar = 0;
                        break;
                    }
                    while(okAgregar = 0);


                    escritos = fwrite(pAgregar, sizeof(datosJugador), 1, indice);

                    if (escritos != 0)
                    {
                        okAgregar = 1;
                        perror("\nSe ha producido algun problema al introducir los datos. ");
                        continuar = 1;
                    }

                    free(pAgregar);
                    cerrarFichero(indice);
                }
                while (continuar != 0);

            break;

            default:
                free(pAgregar);
                cerrarFichero();
                okAgregar = 0;
        }
    }
    while(opcion != 0);

    return (okAgregar);
}
=======
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "estructuras.h"

int agregarJugador (char nomFichero[13])
{
    struct personas datosJugador[1];

    int valor;
    int altura;
    int dia;
    int mes;
    int anio;
    char continuar;
    int opcion;
    int bisAnio;

    void * pAgregar;

    size_t escritos;

    int okAgregar;

    okAgregar = 0;

    continuar = 'N';

    pAgregar = (struct personas *) malloc(sizeof(datosJugador));

    indice = fopen(nomFichero, "a");

    do
    {
            system("cls");

            printf("\n1. Agregar nuevo jugador.");
            printf("\n0. Volver al Menu Principal.");
            printf("\n----------------------------");

            scanf("\n%d", &opcion);

        switch(opcion)
        {
            case 1:
                do
                {
                    printf("\n\nNombre del jugador: ");
                    scanf("\n%s", datosJugador.nombre);

                    if (strlen(datosJugador.nombre <= 1))
                    {
                        printf("\nLongitud del nombre no valida. Try again.");
                    }

                }
                while (strlen(datosJugador) <= 1);

                do
                {
                    printf("\nSexo: (1-Mujer) (2-Hombre): ");
                    scanf("\n%d", &valor);

                    switch (valor)
                    {
                        case 1:
                            strcpy(datosJugador.sexo, "Mujer" );
                        break;

                        case 2:
                            strcpy(datosJugador.sexo, "Hombre" );
                        break;

                        default:
                            printf("\nOpcion incorrecta.");
                    }
                }
                while (valor != 1 || valor != 2);

                do
                {
                    printf("\nAltura del jugador (centimetros): ");
                    scanf("\n%d", &altura);

                    if (altura < 80 || altura > 250)
                    {
                        printf("\nAltura no valida.");
                    }
                    else
                    {
                        datosJugador.altura = altura;
                    }
                }
                while(altura < 80 || altura > 250);

                do
                {
                    okAgregar = 1;
                    printf("\nFecha de nacimiento: ");
                    printf("\n---------------------");
                    printf("\nDia: ");
                    scanf("\n%d", &dia);

                    printf("\nMes: (1-12)");
                    scanf("\n%d", &mes);

                    printf("\nAnho: ");
                    scanf("\n%d", &anio);

                    switch (dia)
                    {
                        case 1:
                        case 3:
                        case 5:
                        case 7:
                        case 8:
                        case 10:
                        case 12:

                            if (dia < 1 || dia > 31)
                            {
                                printf("\nDatos incorrectos.");
                                okAgregar = 0;
                            }
                            else
                            {
                                datosJugador.fechaNacimiento.dia = dia;
                                datosJugador.fechaNacimiento.mes = mes;
                                datosJugador.fechaNacimiento.anio = anio;
                            }
                        break;

                        case 4:
                        case 6:
                        case 9:
                        case 11:

                            if (dia < 1 || dia > 30)
                            {
                                printf("\nDatos incorrectos.");
                                okAgregar = 0;
                            }
                            else
                            {
                                datosJugador.fechaNacimiento.dia = dia;
                                datosJugador.fechaNacimiento.mes = mes;
                                datosJugador.fechaNacimiento.anio = anio;
                            }

                        break;

                        case 2:

                            bisAnio = calcularBisiesto(anio);
                            if ((dia < 1 || (dia > 28 && bisAnio == 0) || dia > 29 ))
                            {
                                printf("\nDatos incorrectos.");
                                okAgregar = 0;
                            }
                            else
                            {
                                datosJugador.fechaNacimiento.dia = dia;
                                datosJugador.fechaNacimiento.mes = mes;
                                datosJugador.fechaNacimiento.anio = anio;
                            }

                        break;

                        default:
                            printf("\nDatos incorrectos.");
                            okAgregar = 0;
                        break;
                    }
                    while(okAgregar = 0);


                    escritos = fwrite(pAgregar, sizeof(datosJugador), 1, indice);

                    if (escritos != 0)
                    {
                        okAgregar = 1;
                        perror("\nSe ha producido algun problema al introducir los datos. ");
                        continuar = 1;
                    }

                    free(pAgregar);
                    cerrarFichero(indice);
                }
                while (continuar != 0);

            break;

            default:
                free(pAgregar);
                cerrarFichero();
                okAgregar = 0;
        }
    }
    while(opcion != 0);

    return (okAgregar);
}
>>>>>>> 8bc0b13d6df47f49e7d86b65488d04536bd6d34b
