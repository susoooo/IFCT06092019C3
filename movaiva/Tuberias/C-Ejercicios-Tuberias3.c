/* Escribir un programa que lance un proceso insultator. 
Dicho proceso enviará al programa que lo ha creado, mediante 
una tubería cada segundo un insulto diferente. En cuanto el 
programa que lanza el proceso insultator reciba un insulto 
determinado, enviará por la tubería un mensaje al insultator 
en el que le solicitará que finalice su ejecución. Tras recibir 
la petición insultator enviará un mensaje de vuelta indicando 
su aceptación, y se cerrará. El programa, al recibir la aceptación 
por parte de insultator, imprimirá un mensaje y se cerrará tambien. */ 

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>

void escuchar(int insulto[], int mensaje[])
{
    int respuesta;
    char palabra[20];
    
    respuesta=0;

    close(insulto[1]);
    close(mensaje[0]);

    while(strcmp(palabra,"borrico")!=0)
        {
            read(insulto[0],&palabra,sizeof(palabra));
            printf("%s\n",palabra);
            fflush(stdout);
        }

        printf("Seguir insultado?(0=N,1=S)");
        fflush(stdout);
        scanf("%d",&respuesta);
        

        write(mensaje[1],&respuesta,sizeof(respuesta));
    
}

void insultator(int insulto[],int mensaje[])
{
    char palabros[7][20]={ "tonto", "lerdo", "lameplatos", "gorrino", "lameculos", "borrico", "borracho"};
    int contador;
    int m;

    contador=0;
    m=0;

    close (insulto[0]);
    close(mensaje[1]);
    
    
        
        while(strcmp(palabros[contador],"borracho")!=0)
        {
            //printf("%s\n",palabros[contador]);
            write(insulto[1],&palabros[contador],sizeof(palabros[contador]));
            contador++;
        }

        read(mensaje[0],&m,sizeof(m));
        

    printf("Dejo de insultar\n");
    fflush(stdout);
    exit(0);
}

void main ()
{
    pid_t pid;
    int insulto[2];
    int mensaje[2];

    pipe(insulto);
    pipe(mensaje);

    pid=fork();

    if(pid==0)
    {
        insultator(insulto,mensaje);
    }
    else
    {
        escuchar(insulto,mensaje);
    }
}