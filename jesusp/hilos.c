#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
void *suma(void *rango);
int *resultado;
int *adicion;
int main(){
pthread_attr_t attr;
pthread_t thread;
int rango[]={1,2,3,4,5,6,7,8,9,10};
int numero;
adicion=(int *)malloc (sizeof (int));
pthread_attr_init(&attr);
pthread_create(&thread,NULL,suma,(void*)rango);
pthread_join(thread,NULL);
//numero=*resultado;
printf("\nSuma en Prog. Principal: %d\n",*adicion);
return(0);
}
void *suma(void *rango) {
int i=0, *valores;

valores= (int *)rango;

*adicion=0;
for(i=0;i<10;i++) {
*adicion=*adicion+valores[i];
}
printf("\tThread Suma : %d\n",*adicion);
pthread_exit((void*)adicion);
}
