/*
1.Escribir un programa que cree un proceso padre y un proceso hijo. Entre ellos se establecerá una tubería, de tal forma que uno de ellos pedirá datos por pantalla al usuario, se los enviará al otro proceso, y este los imprimirá por pantalla.
*/

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
//#include <string.h>


int main(void)
{
	int pp[2];
	pid_t prPID;
	char text[30];
	
	pipe(pp);
	prPID = fork();
	switch(prPID)
	{
		case -1:
			perror("KO"); exit(0);
			break;
		case 0:
			close(pp[1]);
			read(pp[0],text,30);
			printf("Texto leído: '%s'\n",text);
			break;
		default:
			close(pp[0]);
			printf("Introduce un texto: ");
			scanf("%s",text);
			write(pp[1],text,30);
			usleep(500);
			break;
	}
	return(0);
}
