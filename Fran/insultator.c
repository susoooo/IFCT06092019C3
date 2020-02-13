#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>
#include <time.h>
#include <string.h>

void recibido (int);
void enviado (int);

void main()
{
    int insulto[2];
    int contador;
    int pos;
    int lineas;

    FILE * indice;

    char mensaje[20];

    pid_t pid;

    pipe(insulto);

    srand (time(NULL));

    indice = fopen("insultitos.txt", "r");

    lineas = 0;

    while(feof(indice)!= 0)
    {
        fgets(mensaje, 20, indice);
        lineas++;
    }

    rewind (indice);

    printf("\n.....................Insultator en marcha.....................");
    fflush(stdout);

    pid = fork();

    signal(SIGUSR1, recibido);

    switch (pid)
    {
        case -1:
            printf("\nNo se ha podido crear un hijo. Esteril perdido. \n");
            exit(-1);
        break;

        case 0:

            do
            {
                printf("\nAttacking papi...");
                fflush(stdout);

                pos = rand() % lineas;

                for (contador = 0; contador < pos; contador++)
                {
                    fgets(mensaje, 20, indice);
                }

                rewind(indice);

                write(insulto[1], strtok(mensaje, "\n"), sizeof(mensaje));
                // kill(getppid(), SIGUSR2);
                sleep(2);

                read(insulto[0], mensaje, sizeof(mensaje));
                // kill(getppid(), SIGUSR1);
                sleep(1);

                if (strcmp(strtok(mensaje, "\n"), "cierrate") == 0)
                {
                    printf("\nOk, Ok!!!");
                    printf("\nEstudiando...\n");
                    fflush(stdout);

                    close(insulto[0]);

                    strcpy(mensaje, "Estudiando");
                    write(insulto[1], mensaje, sizeof(mensaje));
                    close(insulto[1]);

                    fclose(indice);
                    exit(0);
                }

            }
            while (1);
        break;

        default:
            sleep(1);

            do
            {
                printf("\n\tRecibiendo alag... digo insulto...");
                fflush(stdout);

                read(insulto[0], mensaje, sizeof(mensaje));
                // kill(0, SIGUSR1);
                sleep(1);

                write(insulto[1], "Grr!!", 6);
                // kill(0, SIGUSR2);
                sleep (1);

                printf("\n\tInsulto leido: %s ", mensaje);
                printf("\n\tNo te pases, que te crujo");
                fflush(stdout);

                if (strcmp(strtok(mensaje, "\n"), "cachomierda") == 0)
                {
                    printf("\n\tCallate y ponte a estudiar!!!");
                    fflush(stdout);

                    close(insulto[0]);
                    write(insulto[1], "cierrate", 9);
                    close(insulto[1]);
                    wait(NULL);
                    exit(0);
                }
            }
            while (strcmp(mensaje, "Estudiando") != 0);
     }

}

void enviado (int ok)
{

}

void recibido (int ok)
{

}
