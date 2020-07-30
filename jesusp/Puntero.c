#include <stdio.h>

main()
{
int *pnum;
int *pnum2;
int suma;
int num;
int num2;
num=0;
num2=0;
suma=0;

printf("Introduce un numero:");
scanf("%d",&num);
printf("Introduce otro numero:");
scanf("%d",&num2);
pnum=&num;
pnum2=&num2;
suma=*pnum+*pnum2;
printf("La suma de %d y %d es: %d", num,num2,suma);
}