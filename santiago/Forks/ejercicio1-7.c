#include<unistd.h>
#include<stdio.h>
#include<stdlib.h>

int main()
{
    pid_t vc;
    printf("Soy el padre, mi PID es %d", getpid());
    vc = fork();

    switch(vc)
    {
        case -1:
        printf("No he podido crear el proceso hijo\n");
        break;

        
        case 0:
        printf("Soy el hijo, miPID es %d y mi PPID es %d \n", getpid(), getppid());
        sleep(20);
        break;

        default:
        printf(" y el PID de mi hijo es %d\n",vc);
        sleep(30);

    }
   printf("Final de ejecución de %d \n", getpid());
    exit(0);
}
