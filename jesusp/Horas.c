#include <stdio.h>

main()
{
 int dias;
 int horas;
 int minutos;
 int segundos;
 
 dias=0;
 horas=0;
 minutos=0;
 segundos=0;

 printf("Dame los segundos:");
 scanf("%d", &segundos);
 
 
 dias=(segundos*24*3600)+(horas*3600)+(minutos*60);
 
 printf("los segundos totales son:");
 printf("%d", segundos);
 
}