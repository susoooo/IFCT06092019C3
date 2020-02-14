#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

void *suma(void *rango);

int *sumas;



int main()
{
    pthread_attr_t attr;
    pthread_t thread;

    int rango[]={1,2,5,60,5,68,7,8,9,12};
    int *resultado;
    sumas=(int *)malloc(sizeof(int));

    pthread_attr_init(&attr);

    pthread_create(&thread,NULL,suma,(void*)rango);
    pthread_join(thread,NULL);

    printf("SUMA TOTAL ES IGUAL A : %d\n",*sumas);

    free(sumas);
    return(0);
}

void *suma(void *rango) 
{
    int i=0, *valores;
    //int *sumas ya está declarado al principio
	
    valores=(int*)rango;

    //sumas=(int *)malloc(sizeof(int)); debe estar en el  main 

    *sumas=0;
    for(i=0;i<10;i++) 
    {
        *sumas=*sumas+valores[i];
    }
    
    printf("THREAT SUMA : %d\n",*sumas);

    pthread_exit(sumas);

    
}