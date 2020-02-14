<<<<<<< HEAD
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

FILE * indice;

// >>>>>>>>>>>>>>>>>>>>>>>>>>> CREAR FICHERO <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<

int crearFichero(char nomFichero[13])
{
    char sino;
    int okCrear;
    char extension[5];

    okCrear = 0;
    strcpy(extension, ".txt");

    strcat(nomFichero, extension);

    printf("\nSe va a crear el archivo %s.\n", nomFichero);

    system("pause");

    indice = fopen(nomFichero, "r");

    if (indice != 0)
    {
        do
        {
            printf("\nAVISO!!! El archivo ya existe, desea reinicializarlo? (S/N): ");
            scanf("\n%c", &sino);

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


// >>>>>>>>>>>>>>>>>>>>>>>>>>> ABRIR FICHERO <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<

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

        if (sino == 'S' || sino == 's')
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

// >>>>>>>>>>>>>>>>>>>>>>>>>>> CERRAR FICHERO <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<

int cerrarFichero()
{
    int okCerrar;

    okCerrar = fclose(indice);

    return(okCerrar);
}

// >>>>>>>>>>>>>>>>>>>>>>>>>>> CALCULAR BISIESTO <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<

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

// >>>>>>>>>>>>>>>>>>>>>>>>>>> AGREGAR JUGADOR <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<

int agregarJugador (char nomFichero[13])
{
    struct personas datosJugador;

    char nombre[15];
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
            printf("\n0. Volver al Menu Principal.\n");
            printf("\n----------------------------");

            scanf("\n%d", &opcion);

        switch(opcion)
        {
            case 1:
                do
                {
                    printf("\n\nNombre del jugador: ");
                    scanf("\n%s", nombre);

                    if (strlen(nombre) <= 1)
                    {
                        printf("\nLongitud del nombre no valida. Try again.");
                    }
                    else
                    {
                        strcpy(datosJugador.nombre, nombre);
                    }

                }
                while (strlen(nombre) <= 1);

                do
                {
                    printf("\nSexo: (1-Mujer) (2-Hombre): ");
                    scanf("\n%d", &valor);

                    switch (valor)
                    {
                        case 1:
                            strcpy(datosJugador.sexo, "Mujer");
                        break;

                        case 2:
                            strcpy(datosJugador.sexo, "Hombre");
                        break;

                        default:
                            printf("\nOpcion incorrecta.");
                    }
                    getchar();
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

                    switch (mes)
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
                    while (okAgregar == 0);


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

// >>>>>>>>>>>>>>>>>>>>>>>>>>> ELIMINAR FICHERO <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<

int eliminarFichero(char nomFichero[13])
{
    int okBorrar;
    char comando[8];
    char ruta[25];

    okBorrar = 0;
    strcpy(comando, "del /Q ");

    printf("\nSe va a borrar el archivo %s.\n", nomFichero);

    system("pause");

    strcpy(ruta, strcat(comando, nomFichero));

    okBorrar = system(ruta);


    return(okBorrar);
}

=======
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

FILE * indice;

// >>>>>>>>>>>>>>>>>>>>>>>>>>> CREAR FICHERO <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<

int crearFichero(char nomFichero[13])
{
    char sino;
    int okCrear;
    char extension[5];

    okCrear = 0;
    strcpy(extension, ".txt");

    strcat(nomFichero, extension);

    printf("\nSe va a crear el archivo %s.\n", nomFichero);

    system("pause");

    indice = fopen(nomFichero, "r");

    if (indice != 0)
    {
        do
        {
            printf("\nAVISO!!! El archivo ya existe, desea reinicializarlo? (S/N): ");
            scanf("\n%c", &sino);

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


// >>>>>>>>>>>>>>>>>>>>>>>>>>> ABRIR FICHERO <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<

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

        if (sino == 'S' || sino == 's')
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

// >>>>>>>>>>>>>>>>>>>>>>>>>>> CERRAR FICHERO <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<

int cerrarFichero()
{
    int okCerrar;

    okCerrar = fclose(indice);

    return(okCerrar);
}

// >>>>>>>>>>>>>>>>>>>>>>>>>>> CALCULAR BISIESTO <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<

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

// >>>>>>>>>>>>>>>>>>>>>>>>>>> AGREGAR JUGADOR <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<

int agregarJugador (char nomFichero[13])
{
    struct personas datosJugador;

    char nombre[15];
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
            printf("\n0. Volver al Menu Principal.\n");
            printf("\n----------------------------");

            scanf("\n%d", &opcion);

        switch(opcion)
        {
            case 1:
                do
                {
                    printf("\n\nNombre del jugador: ");
                    scanf("\n%s", nombre);

                    if (strlen(nombre) <= 1)
                    {
                        printf("\nLongitud del nombre no valida. Try again.");
                    }
                    else
                    {
                        strcpy(datosJugador.nombre, nombre);
                    }

                }
                while (strlen(nombre) <= 1);

                do
                {
                    printf("\nSexo: (1-Mujer) (2-Hombre): ");
                    scanf("\n%d", &valor);

                    switch (valor)
                    {
                        case 1:
                            strcpy(datosJugador.sexo, "Mujer");
                        break;

                        case 2:
                            strcpy(datosJugador.sexo, "Hombre");
                        break;

                        default:
                            printf("\nOpcion incorrecta.");
                    }
                    getchar();
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

                    switch (mes)
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
                    while (okAgregar == 0);


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

// >>>>>>>>>>>>>>>>>>>>>>>>>>> ELIMINAR FICHERO <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<

int eliminarFichero(char nomFichero[13])
{
    int okBorrar;
    char comando[8];
    char ruta[25];

    okBorrar = 0;
    strcpy(comando, "del /Q ");

    printf("\nSe va a borrar el archivo %s.\n", nomFichero);

    system("pause");

    strcpy(ruta, strcat(comando, nomFichero));

    okBorrar = system(ruta);


    return(okBorrar);
}

>>>>>>> 8bc0b13d6df47f49e7d86b65488d04536bd6d34b
