/*1.- Realizar un programa que tras dormir 10 segundo envíe la señal SIGTERM a si mismo. */
#include <signal.h>
#include <unistd.h>
#include <stdio.h>


main()
{
	printf("Espera 10 segundos\n");
	fflush(stdout);
	sleep(10);
	kill(getpid(),SIGTERM);
}


