#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
char insulto[10][20]:{'cabezabuque','tonto','gilipollas','cabrón','tiomierda','idiota','abrazafarolas','malakito','búfalo','payaso'};
char mensaje[20];'
int tuberia[2];
int contador;
char recibido;
int i;
contador=0;
i=0;
pid_t pid;
pipe(tuberia);
strand(time(NULL));
pid =fork();
signal(SIGUSR1, recibido);
switch(pid)
    {
        case -1: //Error
        printf("No hay hijo");
        exit(-1);
        break;
        case 0: //Hijo
        printf("Insultando...");
        for(i=0;i<10;i++)
        {
            write(tuberia[1],insulto[i],length(insulto[i]));
            sleep(2);
        }
        break;
        default: //Padre
        printf("No te pases...");
        for (i=0;i<10;i++)
            {
                read(tuberia[0],mensaje,sizeof(char)*20);
                printf(mensaje);
            }
        break;


    }
    printf("Insultator terminado");


}
