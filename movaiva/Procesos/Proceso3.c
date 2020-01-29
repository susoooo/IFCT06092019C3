/*
Diseña un programa en C que cree la jerarquía de procesos que se muestra en la
siguiente figura, donde el número de hijos que se crean (H1, H2,...) vendrá dado por
el número de argumentos que se introducen al programa.
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
    int pid;
    int father_pid;
    father_pid=getpid();
    rf=fork();
    for (contador = 1; contador < argc; contador++)
    {
        printf("Contador: %d\n",contador);
        getchar();
        fflush(stdin);
        switch (rf)
        {
        case -1:
            printf("Error creando el proceso\n");
            break;

        case 0:
            pid=getpid();
            printf("Proceso %d\n",pid);
            rf=fork();
            if(pid==getpid())
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
                exit(0);
            }
            break;
        
        default:
            printf("Finaliza el %d, father_pid: %d\n",getpid(),father_pid);
            fflush(stdout);
            exit(0);
        }
        printf("%d %d\n",getpid(),contador);
    }
}