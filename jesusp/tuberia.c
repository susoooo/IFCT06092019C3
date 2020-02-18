#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <wait.h>

void main(){
     int fd[2];
     char buffer[30];
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
                printf("El hijo escribe en el PIPE... \n");
                write(fd[1], "Hola papi", 10);
                break;
          default: // Padre
                close(fd[1]); // Cierra el descriptor de escritura
                wait(NULL); // Espera a que finalice el hijo
                printf("El padre lee el PIPE \n");
                read(fd[0], buffer, 10);
                printf("\t Mensaje leido: %s \n", buffer);
     }
}

