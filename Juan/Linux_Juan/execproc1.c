#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include <errno.h>


int main (int argc, char *argv[]) {
	
	pid_t hijo1pid;
	pid_t hijo2pid;
	pid_t hijo3pid;
	int argumentos;

	hijo1pid= fork();
	if(hijo1pid == -1)
	{
	  perror("Error al crear el hijo 1");
 	  exit(1);
	}

	  printf("hijo1pid: %d\n", hijo1pid);
	if(hijo1pid == 0)
	{
	  printf("Soy el hijo nº1, mi PID es %d, mi padre es %d\n", getpid(), getppid());
	  printf("Y voy a ejecutar el primer comando %s\n", argv[1]);
	  fflush(stdout);
	  sleep(5);
	  exit(0);
	}
	else
	{
	  printf("hijo1pid: %d\n", hijo1pid);
	  printf("Soy %d Voy a crear otro hijo\n", getpid());

	}
/*	else if(hijo2pid= fork() == -1)
		{
	  	  perror("Error al crear el hijo 2");
		  exit(1);
		}
		else if(hijo2pid == 0)
		{
	  	  printf("Soy el hijo nº2, mi PID es %d, mi padre es %d\n", getpid(), getppid());
	  	  printf("Y voy a ejecutar el primer comando %s\n", argv[2]);
	  	  fflush(stdout);
	  	  sleep(5);
	 	  exit(0);
		}
		else if(hijo3pid= fork() == -1)	
			{
		 	perror("Error al crear el hijo 3");
			exit(1);
			}
		else if(hijo3pid == 0)
	{
	printf("Soy el hijo nº3, mi PID es %d, y mi padre es %d\n", getpid(), getppid());
	printf("Y voy a ejecutar el tercer comando %s\n", argv[3]);
        fflush(stdout);
	sleep(5);
	exit(0);
	}

	if(hijo1pid!= -1 || hijo2pid!= -1 || hijo3pid!= -1)
	{
	printf("Soy el padre %d y estoy esperando a que terminen mis 3 procesos hijo %d, %d y %d", getppid(), hijo1pid, hijo2pid, hijo3pid);
	}
	printf("Soy el padre %d\n y termino", getppid());
	exit(0);
*/
}
