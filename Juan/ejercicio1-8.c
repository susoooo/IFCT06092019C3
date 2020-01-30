#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
	
pid_t rf;
int varfork;
varfork=10;

rf = fork();

switch (rf) {
case -1:
printf("No he podido crear el proceso hijo \n");
break;
case 0:
printf("Soy el hijo, mi PID es %d y mi PPID es %d \n", getpid(), getppid());
sleep(30); //suspende el proceso 30 segundos
// En el hijo el varfork se incrementará en 10 veces y de 1 en 1.
for(int i=0;i<10;i++)
{
varfork=varfork+1;
printf("El valor de la variable del hijo es %d \n", varfork);
}
break;
default:
printf("Soy el padre, mi PID es %d y el PID de mi hijo es %d \n", getpid(), rf);
sleep(20); //suspende el proceso 20 segundos. Acaba antes el padre.
// En el padre el varfork se incrementará en 10 veces y de 10 en 10.
for(int i=0;i<10;i++)
{
varfork=varfork+10;
printf("El valor de la variable del padre es %d \n", varfork);
}
}
printf("Final de ejecución de %d \n", getpid());
exit(0);
}
