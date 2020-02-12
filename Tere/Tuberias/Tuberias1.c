/* 1.Escribir un programa que cree un proceso padre y un proceso hijo.
Entre ellos se establecerá una tubería,
de tal forma que uno de ellos pedirá datos por pantalla al usuario,
se los enviará al otro proceso, y este los imprimirá por pantalla. */

#include <sys/types.h>
#include <signal.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>


void main()
{
	char caracteres[500];
	int fildes[2];
	
	pid_t idProceso;

	 pipe(fildes);

	

	idProceso = fork();

    
	switch(idProceso){   
		case-1: perror ("No se puede lanzar proceso");
			break;
		 case 0: 
			printf("Escribe caracteres:");
			scanf("%s",caracteres);
			write(fildes[1], caracteres, 500);
			exit(0);		
			
			break;
		default:
			read(fildes[0], caracteres, 500);
			printf("%s\n",caracteres);
			
	}
}

