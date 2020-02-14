/*3.escribir un programa que lance un proceso insultator. 
Dicho proceso enviará al programa que lo ha creado, 
mediante una tubería cada segundo un insulto diferente. 
En cuanto el programa que lanza el proceso insultator reciba un insulto determinado, 
enviará por la tubería un mensaje al insultator en el que le solicitará que finalice su ejecución. 
Tras recibir la petición insultator enviará un mensaje de vuelta indicando su aceptación, y se cerrará. 
El programa, al recibir la aceptación por parte de insultator, imprimirá un mensaje y se cerrará tambien.*/

#include <sys/types.h>
#include <signal.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void main()
{
	char caracteres[15];
	int fildes[2];
	int numero;
	int posicion;
	int contador;
	
	FILE *manejador;
	
	numero=1;
	
	
	pid_t idProceso;

	 pipe(fildes);

	

	idProceso = fork();

	manejador= fopen("insultos.txt", "r");

    
	switch(idProceso)
	{   
		case-1: perror ("No se puede lanzar proceso");
			break;
		 case 0: // Hijo crea el insulto
								
			
			do
			{
			
			posicion=rand () %5;

			for (contador=0;contador<posicion; contador++)
			{
			fgets(caracteres, 20, manejador); //fgets funciona como fread.
			}
			rewind(manejador);

			write(fildes[1], caracteres, sizeof (caracteres));
			
			
			
			sleep(1);

			read(fildes[0],caracteres, sizeof(caracteres));
			sleep(4);

			if(strcmp(caracteres, "terminar")==0)
			{
			write(fildes[1], "acepto", 7);			
			
			close (fildes[0]);
			close (fildes[1]);

			printf("\nCerrando");
			

			exit(0);
			}	
			}
			while(1);	
			
			break;

		default: //Padre recibe el insulto

			do
			{
						
			read(fildes[0], caracteres, 15);
			
			sleep(2);
			if(strcmp(caracteres,"feo")==0)
			{


			write(fildes[1], "terminar", 9);
			sleep(3);

			read(fildes[0], caracteres, sizeof(caracteres));
			
			close(fildes[1]); 
			close (fildes[0]);

			}
			else
							
			{	
				printf("%s\n",caracteres);						
			}
			}
			while(1);
	}
}




