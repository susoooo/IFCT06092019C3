#include <sys/types.h>
#include <signal.h>
#include <unistd.h>
#include <stdio.h>

void controlador(int);
void main()
{
sleep(10);
printf("Enviando la señal\n");
kill(getpid(),SIGTERM);

}
