#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <pthread.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

#define RANGO 2

void *suma(void *rango);

struct resultado{
    int nreg;
    int rango;
};

pthread_attr_t attr;
FILE *file;
pthread_t thread[10];

int main() 
{
    int contadorFor;
    struct resultado r;
    int suma_total;
    int *suma_parcial;
    r.rango=0;
    suma_total=0;
    r.nreg=0;
    pthread_attr_init(&attr);
    // if((f=open("numero.dat",O_RDONLY))<-1)
    // {
    //     perror("Error al abrir el archivo");
    // }
    if((file=fopen("numero.dat","r"))==0)
    {
        perror("Error al abrir el archivo");
    }
    else
    {
        for(contadorFor=0;contadorFor<10;contadorFor++) 
        {
            pthread_create(&thread[contadorFor],NULL,suma,&r);
            sleep (1);            
            r.rango=r.rango+RANGO;
        }
        for(contadorFor=0;contadorFor<10;contadorFor++) 
        {
            pthread_join(thread[contadorFor],(void *)&suma_parcial);
            printf("Suma Parciales en Prog. Principal: %d\n",*suma_parcial);
            suma_total+=*suma_parcial;            
        }
        printf("Suma Total: %d\n",suma_total);
        printf("Total numeros sumados: %d\n",r.nreg);
        fclose(file); 
    }
    return(0); 
    
}
void *suma(void *res) 
{
    int contadorFor;
    int valor;
    struct resultado *r;
    int num;
    char *linea;
    int *suma;
    size_t tamLinea;
    suma=malloc(sizeof(int));
    linea=NULL;
    tamLinea=0;
    num=0;
    r=(struct resultado *) res;
    //sleep(1); 
    printf("Rango: %d a %d\n",r->rango+1,r->rango+RANGO);
    for(contadorFor=0;contadorFor<RANGO;contadorFor++) 
    {
        tamLinea=getline(&linea,&tamLinea,file);
        num=atoi(linea);
        *suma+=num;
        r->nreg++;
    }
    printf("\tSuma Parcial: %d\n",*suma);
    pthread_exit(suma);
}