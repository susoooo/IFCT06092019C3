#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <sys/types.h>
#include <sys/wait.h>
 
int main ()
    {
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
                printf("Introduce los datos \n");
                // Leemos de 0 que es el teclado y lo guardamos en el buffer
                read(0, buffer,30);
                // Escribimos en la tubería lo que hay en el buffer
                write(fd[1], buffer, 30);
                break;
          default: // Padre
                close(fd[1]); // Cierra el descriptor de escritura
                wait(NULL); // Espera a que finalice el hijo
                printf("El padre lee el PIPE \n");
                // Leemos de la tubería al buffer
                read(fd[0], buffer, 30);
                printf("\t Mensaje leido: %s \n", buffer);
     }
    }
