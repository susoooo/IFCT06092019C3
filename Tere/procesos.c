/* Implementa un programa en C que cree tres procesos hijos.
El proceso padre debe esperar a que acaben los procesos hijos e
imprimir un mensaje indicándolo. No es necesario que utilices un bucle for.*/

#include<unistd.h>
#include<stdio.h>
#include<stdlib.h>

int main(){
    pid_t rf;
    pid_t rf1;
    pid_t rf2;
    rf = fork();

    switch(rf)
    {
        case -1:
            printf("No he podido crear el proceso hijo \n");
            break;
        case 0:
            printf("Soy el hijo, mi PID es %d y mi PPID es %d \n", getpid(), getppid());
            sleep(10);//suspende el proceso 10 segundos
            break;
        default:
            printf("Soy el padre, mi PID es %d y el PID de mi hijo es %d \n", getpid(), rf);
            rf1 = fork();

               switch(rf1)
               {
                    case -1:
                        printf("No he podido crear el proceso hijo \n");
                        break;
                    case 0:
                        printf("Soy el hijo, mi PID es %d y mi PPID es %d \n", getpid(), getppid());
                        sleep(10);//suspende el proceso 10 segundos
                        break;
                    default:
                        printf("Soy el padre, mi PID es %d y el PID de mi hijo es %d \n", getpid(), rf1);
                        rf2 = fork();


                        switch(rf2)
                        {
                            case -1:
                                printf("No he podido crear el proceso hijo \n");
                                break;
                            case 0:
                                printf("Soy el hijo, mi PID es %d y mi PPID es %d \n", getpid(), getppid());
                                sleep(10);//suspende el proceso 10 segundos
                                break;
                            default:
                                printf("Soy el padre, mi PID es %d y el PID de mi hijo es %d \n", getpid(), rf2);
                                sleep(15); //suspende el proceso 15 segundos. Acaba antes el hijo.

                        }

                        sleep(15); //suspende el proceso 15 segundos. Acaba antes el hijo.

                }

                sleep(15); //suspende el proceso 15 segundos. Acaba antes el hijo.

    }
    printf("Final de ejecución de %d \n", getpid());
    exit(0);
}

