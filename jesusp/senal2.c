#include <sys/types.h>
#include <signal.h>
#include <unistd.h>
#include <stdio.h>

void controlSIGUSR1(int);
void controlSIGUSR2(int);
void controlSIGTERM(int);
void controlSIGINT(int);

void main()
{
int numerosenal;
signal (SIGUSR1, controlSIGUSR1);
signal (SIGUSR2, controlSIGUSR2);
signal (SIGTERM, controlSIGTERM);
signal (SIGINT, controlSIGINT);

do{
printf("1.señal SIGUSR1");
printf("2.señal SIGUSR2");
printf("3.señal SIGTERM");
scanf("%d",&numerosenal);

    switch(numerosenal){
            case 1:
               kill(getpid(),SIGUSR1);
            break;
            case 2:
               kill(getpid(),SIGUSR2);
            break;
            case 3:
                kill(getpid(),SIGTERM);
            break;
            case 4:
                kill(getpid(),SIGINT);
            break;
            default:
               printf("senhal desconocida");
            break;

        }


}while(1);

}

void controlSIGUSR1(int numerosenal)
{
printf("He recibido la señal SIGUSR1");
}

void controlSIGUSR2(int numerosenal)
{
printf("He recibido la señal SIGUSR2");
}

void controlSIGTERM(int numerosenal)
{
printf("Fin de la ejecución");
}

void controlSIGINT(int numerosenal)
{

}
