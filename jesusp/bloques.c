#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char * argv[])
 {
int i;
printf("Cuantos hijos");
scanf("%d",argc);
for(i = 0; i < argc; i++)
{
printf("argv[%d]: %s\n", i, argv[i]);
printf("Ejecutando el programa(prog1),sus argumentos son:\n");
strcpy(argv[i],"prog1");
if(execv(".\prog1",argv) <0)
{
printf("Error en la invocación al progama prog[%d]", argc);
exit(1);
}
}
sleep(10);
exit(0);
}
