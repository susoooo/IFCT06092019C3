/*
1.- Realizar un programa que tras dormir 10 segundo envíe la señal SIGTERM a si mismo. 
*/

#include <sys/types.h>
#include <signal.h>
#include <unistd.h>
#include <stdio.h>

//void isHere(int);

int main(void)
{
	//signal(SIGTERM, isHere);
	sleep(10);
	kill(getpid(),SIGTERM);
	//while(1) pause();
	return(0);
}

/*void isHere(int nsnyl)
{
	printf("!!!\n");
}*/
