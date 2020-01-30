#include<stdio.h>
int saludo()
{
    printf("Array de 15");
    return(0);
}

int escaneado(int *pnumeros)
{
    int contador;
    contador=0;

    for(contador=0; contador<15; contador++)
   {
        printf("%d\n",contador);
        scanf("%d",pnumeros+contador);
   }

    return(0);
}

int main()
{
    int numeros[15];
    int contador;
    int *pnumeros;
    contador=0;

    pnumeros=numeros;
    for(contador=0; contador<15; contador++)
    {
        *(pnumeros+contador)=0;
    }
    saludo();
    escaneado(pnumeros);

    for(contador=0; contador<15; contador++)
    {
        printf("%d\n",*pnumeros);
    }
}
