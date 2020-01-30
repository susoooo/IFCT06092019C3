#include<stdio.h>
int saludo()
{
    printf("Mayor y menor de tres\n");
    printf("Introducca tres numeros\n");
    return(0);
}


float mayorparte1(float numero1, float numero2)
{
    float resultado;
    resultado=0;

    if(numero1<numero2)
    {
        resultado=numero2;
    }
    else
    {
        resultado=numero1;
    }
    return(resultado);
}



float menor(float numero1, float numero2, float numero3)
{
    float resultado;
    resultado=0;

    if(numero1<numero2 && numero2<numero3)
    {
        resultado=numero1;
    }

    else
    {
        if(numero1>numero2 && numero2<numero3)
        {
            resultado=numero2;
        }

        else
            {
                if(numero1>numero2 && numero2>numero3)
                    {
                        resultado=numero3;
                    }
                    else
                    {
                        if(numero1<numero2 && numero2>numero3)
                        {
                            resultado=numero3;
                        }
                    }
            }
    }
    return(resultado);
}

int main()
{
    float numerox[3];
    float resultado;
    float resultado2;
    float resultado3;
    int contador;
    resultado=0;
    resultado2=0;
    resultado3=0;
    contador=0;

    saludo();

    for(contador=0; contador<3; contador++)
    {
        numerox[contador]=0;
    }

    for(contador=0; contador<3; contador++)
    {
        printf("%dº",contador+1);
        scanf("%f",&numerox[contador]);
    }

    resultado=mayorparte1(numerox[0],numerox[1]);
    resultado2=mayorparte1(resultado,numerox[2]);
    resultado3=menor(numerox[0], numerox[1], numerox[2]);

    if(resultado<resultado2)
    {
        printf("El numero mayor es: %f",resultado2);
    }

    else
    {
        if(resultado==resultado2)
        {
            printf("El numero mayor es: %f",resultado2);
        }
        else
        {
            if(resultado>resultado2)
            {
                printf("El numero mayor es: %f",resultado);
            }
        }
    }

    printf("El numero menor es %f",resultado3);
    return(0);
}
