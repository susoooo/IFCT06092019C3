#include<stdio.h>
#include<stdlib.h>

int saludo()
{
    printf("Introducion de caracteres\n");

    return(0);
}

int NCaracteres(int *Ncaracter)
{
    printf("introduce el numero de caracteres\n");
    scanf("%d",Ncaracter);

    return(0);
}

int lectura(int *caracter, char *caracteres)
{
    int contador;

    for(contador=0; contador<*caracter; contador++)
    {
        printf("%d Letra\n",contador+1);
         scanf("\n%c",(caracteres + contador));
    }

    return(0);
}

int escritura(int *caracter, char *caracteres)
{
    int contador;

    printf("Los caracteres son:");

    for(contador=0; contador<*caracter; contador++)
    {
         printf("%c",*(caracteres + contador));
    }

    return(0);

}

int main()
{
    char *caracteres;
    int caracter;
    int *Ncaracter;

    Ncaracter=&caracter;

    saludo();

    NCaracteres(Ncaracter);

    caracteres = malloc(caracter * sizeof(char));

    lectura(Ncaracter, caracteres);
    escritura(Ncaracter, caracteres);

    free(caracteres);

    return(0);
}
