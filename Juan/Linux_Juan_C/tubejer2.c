/* 2.Escribir un programa que cree un proceso para calcular un factorial. El programa preguntará por pantalla el número del cual se quiere calcular el factorial, lo enviará por una tubería al proceso que ha creado, y esperará a que este le envía de vuelta el resultado del cálculo. Tras recibirlo, el programa imprimirá el resultado del cálculo.
*/

#include <sys/types.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/wait.h>

#define SIZE 5

int main()
{
  pid_t pid;
  pid_t pid_padre;
  int tuberia[2];
  int numero;
  int factorial;
  char buffer[SIZE];

  pid_padre=getpid();
 
  	 pipe(tuberia);// Se crea el PIPE
     pid = fork();
  
  switch(pid){
          case -1: // Error
                printf("No se ha podido crear un hijo \n");
                exit(-1);
                break;
          case 0: // Hijo
                sleep(2);
                wait(&pid_padre); // Espera a que finalice el padre
                printf("El hijo lee el PIPE \n");
                // Leemos de la tubería al buffer
                read(tuberia[0],buffer,SIZE);
                numero=atoi(buffer);
                printf("Calculamos el factorial de: %d \n",numero);
                for(int i=0;i<=numero;i++)
                {
                factorial= factorial*i;
                }
                write(tuberia[1],&factorial,sizeof(int));
                break;
          default: // Padre
                printf("Introduce el número \n");
                // Leemos de 0 que es el teclado y lo guardamos en el buffer
                read(0,buffer,SIZE);
                // Escribimos en la tubería lo que hay en el buffer
                write(tuberia[1],buffer,SIZE);
                sleep(2);  
		  		read(tuberia[0],&factorial,sizeof(int));
		  		write(1,buffer,SIZE);
     }
     exit(0);
}
 

