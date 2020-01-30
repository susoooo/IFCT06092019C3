#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
	
pid_t rf;
rf = fork();
switch (rf) {
case -1:
printf("No he podido crear el proceso hijo \n");
break;
case 0:
printf("Soy el hijo, mi PID es %d y mi PPID es %d \n", getpid(), getppid());
sleep(30); //suspende el proceso 30 segundos
break;
default:
printf("Soy el padre, mi PID es %d y el PID de mi hijo es %d \n", getpid(), rf);
sleep(20); //suspende el proceso 20 segundos. Acaba antes el padre.
}
printf("Final de ejecución de %d \n", getpid());
exit(0);
}
