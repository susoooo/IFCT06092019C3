/*
Escribir un programa que cree un proceso padre y un proceso hijo. 
Entre ellos se establecerá una tubería, de tal forma que uno de 
ellos pedirá datos por pantalla al usuario, se los enviará al otro 
proceso, y este los imprimirá por pantalla.
*/

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/wait.h>

void escritor (int esc)
{
    char datos[20];
    int contador;

    printf("Introduzca datos :");
    for(contador=0;contador<5;contador++)
    {
        scanf("%s",datos);

        write(esc, &datos, sizeof(datos));
    }
    

    exit(0);
}

void lector (int lec)
{
    char datos[20];
    int leidos;

    while((leidos = read(lec, &datos, sizeof(datos))) > 0)
    {
        printf("Recibido: %s\n",datos);
    }
    exit(0);
}

void main()
{
    int pid;
    int tub[2];
    pipe(tub);

    pid=fork();

    if(pid==0)
    {   
        close(tub[1]);
        lector(tub[0]);
    }
    else
    {
        close(tub[0]);
        escritor(tub[1]);
    }
    
}