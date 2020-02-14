/* Diseñar un programa que trate la señal SIGINT ( CTRL-C) y se quede a la espera por una señal. 
Cada vez que reciba la señal SIGINT debe abrir para añadir en el fichero señales.txt, y escribir 
su número de proceso y el número de señal Recibida. Terminar el proceso enviándole cualquier otra señal. */

#include <stdio.h>
#include <stdlib.h>
#include <signal.h>
#include <unistd.h>

void tratarSenal(int);

FILE *fp;

void main()
{
    int contador;

    for(contador=1;contador<=64;contador++)
    {
        signal(contador,tratarSenal);
    }

    if((fp=fopen("signal.txt","a"))!=NULL)
    {
        while(1) pause();        
    }
    else
    {
        perror("Error al abrir el archivo");
    }

    
}

void tratarSenal(int numSenal)
{
    
    if(numSenal==SIGINT)
    {
        fprintf(fp,"PID: %d\n",getpid());
    }
    else
    {
        fclose(fp);
        exit(0);
    }
    
}