/*
Diseña un programa en C que cree la jerarquía de procesos que se muestra en la
siguiente figura, donde el número de hijos que se crean (H1, H2,...) es un valor que
se introduce como argumento al programa.
*/
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <sys/wait.h>


void main (int argc,char * argv[])
{
    int contador;
    pid_t rf;
    char comando[30];
    char path[30];
    char* arg_list[2];
    for (contador = 2; contador < argc; contador++)
    {
        rf=fork();
        if(rf==0)
        { 
            strcpy(path, "/bin/");
            strcat(path,argv[contador]);
            arg_list[0]=malloc(sizeof(argv[contador]));
            strcpy(arg_list[0],argv[contador]);
            arg_list[1]=NULL;
            if (execv(path,arg_list) < 0) 
            {
                strcpy(comando, "./");
                strcat(comando,argv[contador]);  
                if(execv(comando,argv)<0)
                {
                    printf("Error en la invocacion\n");
                    exit(1);
                }
            }
        }
        else
        {
            wait(NULL);
        }
        
    }
    printf("Finaliza el padre\n");
    exit(0);
}