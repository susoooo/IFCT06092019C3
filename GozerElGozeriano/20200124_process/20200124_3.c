/*
3. Diseña un programa en C que cree la jerarquía de procesos que se muestra en la
siguiente figura, donde el número de hijos que se crean (H1, H2,...) vendrá dado por
el número de argumentos que se introducen al programa.
Cada uno de los procesos hijos ejecutará un programa distinto cuyo nombre se
introduce al programa como argumento y que se supone que está almacenado enel
directorio de trabajo o en un directorio incluído en la variable$PATH.
El orden de ejecución de los comandos será el que se establece en la lista de
argumentos del programa. Así, si la ejecución del programa se realiza de la
siguiente forma:
$ programa ls pwd date
primero se ejecutará el comando ls y mostrará su salida en pantalla. Después el
comando pwd y, finalmente, date. El proceso padre será el que termina en último
lugar.
Recuerda que las llamadas al sistema del tipo exec permiten que un proceso ejecute un código diferente al que estaba ejecutando hasta entonces.
*/

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
	pid_t son;
	pid_t sonson;
	int contador;
	char *prog[2];

	for(contador=1;contador<argc;contador++)
	{
		son = fork();

		switch(son)
		{
			case -1:
				printf("Error\n");
				break;
			case 0:
				prog[0]=argv[contador];
				prog[1]=NULL;
				if(execv(prog[0],prog)<0)
				{
					printf("Error: %s\n", prog[0]);
					exit(1);
				}
				break;
			default:
				sleep(3);
		}
	}
	exit(0);
}
