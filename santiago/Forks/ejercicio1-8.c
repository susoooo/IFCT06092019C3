#include<unistd.h>
#include<stdio.h>
#include<stdlib.h>

int main()
{
    pid_t vc;
    vc = fork();
    int varfork;
    varfork = 0;
    int contador;


    switch(vc)
    {
        case -1:
        printf("No he podido crear el proceso hijo\n");
        break;

        case 0:
        printf("Soy el hijo, miPID es %d y mi PPID es %d \n", getpid(), getppid());
        
       for(contador=0; contador<10; contador++)
        {
        	varfork=contador;
        	printf("El valor de varfork es %d\n", varfork);
        }
        
        break;

        default:
        printf("Soy el padre, mi PID es %d y el PID de mi hijo es %d\n", getpid(), vc);
        
        for(contador=0; contador<10; contador++)
        {
        	varfork=(contador*10);
        	printf("El valor de varfork es %d\n", varfork);
        }

    }
    printf("Valor final de varfork %d\n", varfork);
   printf("Final de ejecución de %d \n", getpid());
    exit(0);
}
