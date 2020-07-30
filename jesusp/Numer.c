#include <stdio.h>
#include <math.h>

main()
{
int numeros[10];
int *num;
int contador;
contador=0;
int media;
int mayor;
int menor;
int suma;
media=0;
suma=0;
mayor=0;
menor=*num;
for(contador=0;contador<10;contador++)
{
    num=&numeros[0];
    printf("\nIntroduce un numero: ");
    scanf("%d",num);
    if(*num>mayor)
        {
         mayor=*num;
        }
    if(*num<menor)
    {
        menor=*num;
    }
    suma=suma+*num;
    printf("%d",suma);

}




media=suma/10;
printf("\nLa media es:%d",media);
printf("\nEl mayor es:%d",mayor);
printf("\nEl menor es:%d",menor);
}
