#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>
/*
struct palabrotas
{
    char alagos[20];
};
*/

void main()
{
    int insulto[2];
    char tacos[20][10];

    char mensaje[9];

    pid_t pid;

    pipe(insulto);

    pid = fork();

    switch (pid)
    {
        case -1:
            printf("No se ha podido crear un hijo. Esteril perdido. \n");
            exit(-1);
        break;

        case 0:

            printf("Insultator en marcha... \n");
            do
            {
                write(insulto[1], mensaje, 10);
                sleep(1);
                read(insulto[0], mensaje, 9);
                if (strcmp(mensaje, "cierrate") == 0)
                {
                    printf("\n\t Ok, Ok!!!\n");
                    close(insulto[0]);
                    write(insulto[1], "Estudiando", 11);
                    close(insulto[1]);
                    exit(0);
                }

            }
            while (1);
        break;

        default:
            do
            {
                printf("Recibiendo alag... digo insulto... \n");
                read(insulto[0], mensaje, 10);
                printf("\t Insulto leido: %s \n", mensaje);
                if (strcmp(mensaje, "cachomierda") == 0)
                {
                    printf("\n\t Callate y ponte a estudiar!!!\n");
                    write(insulto[1], "cierrate", 9);
                    close(insulto[0]);
                    close(insulto[1]);
                    wait(NULL);
                    exit(0);
                }
            }
            while (strcmp(mensaje, "Estudiando") != 0);

     }
}
