#include <stdio.h>
#include <stdlib.h>
#include <alloca.h>
void main()
{
char *caracter;

int num;
int cont;

printf("Dime los caracteres que quieres: ");
scanf("%d",&num);
getchar();
caracter=malloc(sizeof(char)*num);
for(cont=0;cont<num;cont++)
{
  printf("\nIntroduce caracteres %d:",cont+1);
  scanf("%c",&caracter[cont]);
  getchar;
}
 printf("\nHas introducido:");

for(cont=0;cont<num;cont++)
{
   printf("%c",caracter[cont]);
}
printf("\n");
}
