#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main (int argc, char *argv[])
{
	int i;
	char a[2000000];
	printf("Ejecutando el programa invocado (execprog2). Sus argumentos son:\n");
	for (i = 0; i < argc; i++)
		printf("argv[%d]: %s\n", i, argv[i]);
	sleep(10);
	exit(0);
}