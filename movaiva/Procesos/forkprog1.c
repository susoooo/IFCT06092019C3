#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>


int main() 
{
    pid_t rf;
    rf = fork();
    if(rf>0)
    {
        printf("Soy el padre, mi PID es %d y el PID de mi hijo es %d \n", getpid(), rf);
        sleep(30);
    }
    else if (rf==0)
    {
        printf("Soy el hijo, mi PID es %d y mi PPID es %d \n", getpid(), getppid());
        sleep(20);
    }else
    {
        printf("No he podido crear el proceso hijo \n");
    }

    printf("Final de ejecución de %d \n", getpid());
    exit(0);
}