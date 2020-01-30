
#include<unistd.h>
#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[])

{

    pid_t rf[argc];

    int contador;


for(contador=2;contador<argc;contador++)
{
    rf[contador]=fork();

    switch(rf[contador])
    {
        case -1:
            printf("No he podido crear el proceso hijo \n");
            break;
        case 0:

            execv(argv[contador],0 );

            //resultado= execv("/bin/ls", argv );
            perror("Buh!");
            //fflush(stdout);
            printf("Soy el hijo, mi PID es %d y mi PPID es %d \n", getpid(), getppid());

            sleep(5);//suspende el proceso 10 segundos
            break;
        default:
            printf("Soy el padre, mi PID es %d y el PID de mi hijo es %d \n", getpid(), rf[contador]);

    }

            sleep(12); //suspende el proceso 15 segundos. Acaba antes el hijo.
    }
    printf("Final de ejecución de %d \n", getpid());
    exit(0);
}
