#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>

int main (int argc, char *argv[]) {
	int i;
	printf("Ejecutando el programa invocador (execprog1). Sus argumentos son:\n");
	for (i = 0; i < argc; i++)
		printf("argv[%d]: %s\n", i, argv[i]);
	sleep(5);
	strcpy(argv[0], "./execprog2");
	strcpy(argv[1], "Nuevo arg1");
	if (execv ("./execprog2", argv) < 0)
	{
	printf("Error en la invocacion a execprog2\n");
	exit(1);
	}
	exit(0);
}
