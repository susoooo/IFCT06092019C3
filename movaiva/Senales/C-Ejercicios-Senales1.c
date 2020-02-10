/* Realizar un programa que tras dormir 10 segundo envíe la señal SIGTERM a si mismo.  */

#include <stdio.h>
#include <signal.h>
#include <unistd.h>


void main ()
{
    sleep(10);

    kill(getpid(),SIGTERM);

}