/*
3.escribir un programa que lance un proceso insultator. Dicho proceso enviará al programa que lo ha creado, mediante una tubería cada segundo un insulto diferente. En cuanto el programa que lanza el proceso insultator reciba un insulto determinado, enviará por la tubería un mensaje al insultator en el que le solicitará que finalice su ejecución. Tras recibir la petición insultator enviará un mensaje de vuelta indicando su aceptación, y se cerrará. El programa, al recibir la aceptación por parte de insultator, imprimirá un mensaje y se cerrará también. */

#include <sys/types.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/wait.h>
#include <signal.h>

#define SIZE 50

int main()
{
  pid_t pidHijo;
  int pidPadre;
  int PaHijo[2];
  int HiPadre[2];
  char buffer[SIZE];
  
		// Se crean los PIPE
  	 pipe(PaHijo);
  	 pipe(HiPadre);	 
     pidPadre= fork();
     pidHijo= fork();
  
  switch(pidHijo){
          case -1: // Error
                printf("No se ha podido crear un hijo \n");
                exit(-1);
                break;
          case 0: // Hijo
                close(tuberia[1]); // Cierra el descriptor de escritura
                sleep(2);
                wait(NULL); // Espera a que finalice el padre
                // Leemos de la tubería al buffer
                read(tuberia[0],buffer,SIZE);
                break;
          default: // Padre
          		close(tuberia[0]); // Cierra el descriptor que no va a usar. El de lectura
                printf("Introduce el número \n");
                // Leemos de 0 que es el teclado y lo guardamos en el buffer
                read(0,buffer,SIZE);
                // Escribimos en la tubería lo que hay en el buffer
                write(tuberia[1],buffer,SIZE);
     }
     exit(0);
