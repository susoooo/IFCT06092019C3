/*
Implementa un programa en C que cree tres procesos hijos. El proceso padre
debe esperar a que acaben los procesos hijos e imprimir un mensaje indicándolo.
No es necesario que utilices un bucle for.
*/
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main ()
{
    pid_t rf;
    pid_t rs;
    pid_t rt;

    rf=fork();
    if(rf>0)
    {
        rs=fork();
        if(rs>0)
        {
            rt=fork();
        }
    }

    switch (rf) 
    {
        case -1:
            printf("No he podido crear el proceso hijo \n");
            break;
        case 0:
            printf("Soy el primer hijo, mi PID es %d y mi PPID es %d \n", getpid(), getppid());
            sleep(20); //suspende el proceso 20 segundos
            break;
        default:
            switch (rs) 
            {
                case -1:
                    printf("No he podido crear el proceso hijo \n");
                    break;
                case 0:
                    printf("Soy el segundo hijo, mi PID es %d y mi PPID es %d \n", getpid(), getppid());
                    sleep(20); //suspende el proceso 20 segundos
                    break;
                default:
                    switch (rt) 
                    {   
                        case -1:
                            printf("No he podido crear el proceso hijo \n");
                            break;
                        case 0:
                            printf("Soy el tercer hijo, mi PID es %d y mi PPID es %d \n", getpid(), getppid());
                            sleep(20); //suspende el proceso 20 segundos
                            break;
                        default:
                            printf("Soy el padre, mi PID es %d y el PID de mi hijo es %d \n", getpid(), rf);
                            sleep(30); //suspende el proceso 30 segundos. Acaba antes el hijo.
                    }
            }
    }
    printf("Final de ejecución de %d \n", getpid());
    exit(0);

}