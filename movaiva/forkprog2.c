#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

#define ITERACIONES 10

int main() 
{
    pid_t rf;
    int vafork;
    int contador;
    vafork=10;
    contador=0;
    rf = fork();
    
    switch (rf) 
    {
        case -1:
            printf("No he podido crear el proceso hijo \n");
            break;
        case 0:
            for(contador=0;contador<ITERACIONES;contador++)
            {
                vafork=vafork+1;
            }
            printf("Soy el hijo, mi PID es %d y mi PPID es %d, vafork es %d \n", getpid(), getppid(),vafork);
            sleep(20); //suspende el proceso 20 segundos
            break;
        default:
            for(contador=0;contador<ITERACIONES;contador++)
            {
                vafork=vafork+10;
            }
            printf("Soy el padre, mi PID es %d y el PID de mi hijo es %d, vafork es %d \n", getpid(), rf, vafork);
            sleep(30); //suspende el proceso 30 segundos. Acaba antes el hijo.
    }

    printf("Final de ejecución de %d \n", getpid());
    exit(0);
}