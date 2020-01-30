#include<stdio.h>
int escanear(int numero, int numero2)
{
    printf("Primer numero");
    scanf("%d",numero);
    printf("Segunto numero");
    scanf("%d",numero2);

    return(0);
}

int suma(int *numerox, int *numerox2,int *resultado)
{
    *resultado=*numerox+*numerox2;

    return(0);
}

int main()
{
    int numero;
    int numero2;
    int resultado;

    numero=0;
    numero2=0;
    resultado=0;

    escanear(&numero, &numero2);
    suma(&numero, &numero2 ,&resultado);
    printf("La suma es = %d",resultado);
    return(0);
}
