#include<stdio.h>
int saludo()
{
    printf("Calculo de mayor, menor y media\n");

    return(0);
}
int escanear(float *numero)
{
    int contador;

    contador=0;

    for(contador=0; contador<10; contador++)
    {
         printf("%d numero",contador+1);
        scanf("%f",(numero+contador));
    }

    return(0);
}

float mayor(float *numero, float *resultado)
{
    int contador;

    contador=0;

    for(contador=0; contador<10; contador++)
    {
        if(*resultado<*(numero+contador))
        {
            *resultado=*(numero+contador);
        }
    }

    return(0);
}

float menor(float *numero, float *resultadoM)
{
    int contador;

    contador=0;

    for(contador=0; contador<10; contador++)
    {
        if(*resultadoM>*(numero+contador))
        {
            *resultadoM=*(numero+contador);
        }
    }

    return(0);
}

float media(float *numero, float *resultadoME)
{
    int contador;
    contador=0;

    for(contador=0; contador<10; contador++)
    {
        *resultadoME=*resultadoME+*(numero+contador);
    }

    *resultadoME=*resultadoME/10;

    return(0);
}

int main()
{
    float *numero;
    float numeroX[10];
    float *resultado;
    float Rmayor;
    float *resultadoM;
    float Rmenor;
    float *resultadoME;
    float Rmedia;

    numero=numeroX;
    resultado=&Rmayor;
    resultadoM=&Rmenor;
    resultadoME=&Rmedia;

    saludo();
    escanear(numero);
    mayor(numero, resultado);
    menor(numero, resultadoM);
    media(numero, resultadoME);

    printf("El mayor es: %f\n", Rmayor);
    printf("El menor es: %f\n", Rmenor);
    printf("La media es; %f\n", Rmedia);

    return(0);
}
