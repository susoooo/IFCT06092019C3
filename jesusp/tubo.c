#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <wait.h>

void main(){

     int fd[2];
     char datos[30];
     pid_t pid;

     pipe(fd); // Se crea el PIPE
     pid = fork();

     switch(pid){
          case -1: // Error
                printf("No se ha podido crear un hijo \n");
                exit(-1);
                break;
          case 0: // Hijo
                close(fd[0]); // Cierra el descriptor que no va a usar. El de lectura
                printf("¿Cuáles son tus datos?\n");
                scanf("%s",&datos[30]);

                break;
          default: // Padre
                close(fd[1]); // Cierra el descriptor de escritura
                wait(NULL); // Espera a que finalice el hijo
                printf("\n Ya me voy");

                write(fd[0], datos, 20);

     }
}
