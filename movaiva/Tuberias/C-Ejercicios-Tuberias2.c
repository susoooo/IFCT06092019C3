/* Escribir un programa que cree un proceso para calcular un factorial. 
El programa preguntará por pantalla el número del cual se quiere calcular 
el factorial, lo enviará por una tubería al proceso que ha creado, y esperará 
a que este le envía de vuelta el resultado del cálculo. Tras recibirlo, el programa 
imprimirá el resultado del cálculo. */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

void visualizar(int n[],int factorial[])
{
    int numero;
    int resultado;

    numero=0;
    resultado=0;

    printf("Introduzca el numero: ");
    scanf("%d",&numero);

    close(n[0]);
    write(n[1],&numero,sizeof(numero));

    
    close(factorial[1]);
    read(factorial[0], &resultado, sizeof(resultado));

    printf("El resultado del factorial de %d es %d\n",numero,resultado);

    exit(0);
}

void calcular(int n[],int factorial[])
{
    int numero;
    int contador;
    int resultado;

    numero=0;

    close(n[1]);
    read(n[0],&numero,sizeof(numero));

    resultado=1;

    for(contador=1;contador<=numero;contador++)
    {
        resultado*=contador;
    }

    close(factorial[0]);
    write(factorial[1],&resultado,sizeof(resultado));

    exit(0);
}

void main()
{
    pid_t pid;
    int factorial[2];
    int numero[2];

    pipe(factorial);
    pipe(numero);

    pid=fork();

    if(pid==0)
    {
        calcular(numero,factorial);
    }
    else
    {
        visualizar(numero,factorial);
    }
    
}