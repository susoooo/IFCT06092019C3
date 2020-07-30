/* 3.escribir un programa que lance un proceso insultator. Dicho proceso enviará al programa que lo ha creado, 
mediante una tubería cada segundo un insulto diferente. En cuanto el programa que lanza el proceso insultator 
reciba un insulto determinado, enviará por la tubería un mensaje al insultator en el que le solicitará que finalice 
su ejecución. Tras recibir la petición insultator enviará un mensaje de vuelta indicando su aceptación, y se cerrará. 
El programa, al recibir la aceptación por parte de insultator, imprimirá un mensaje y se cerrará tambien.*/

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#define LEER 0
#define ESCRIBIR 1

void main()
{
	
char caracteres[500];
	int fildes[2];
	int contador;
	int numero;
	
	
	
	pid_t idProceso;

	 pipe(fildes);

	

	idProceso = fork();

    
	switch(idProceso){   
		case-1: perror ("No se puede lanzar proceso");
			break;
		 
		case 0: 
			printf("Inserte un insulto pendejo:");
			scanf("%s",caracteres);
			write(fildes[1], caracteres, 500);
			sleep(1);
			
			exit(0);		
			
			break;
		default:
			read(fildes[0],&caracteres,500);
			
				   if(caracteres=="Idiota")
				   {
					   close(fildes[1]);
			
				   }
				  else
				   {
					   
					   printf("%s\n",caracteres);
				   }
					   

	}
}