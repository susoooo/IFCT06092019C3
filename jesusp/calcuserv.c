#include <stdio.h>
#include <stdlib.h>
#include <netinet/in.h>
#include <unistd.h>
#include <string.h>
#include <netdb.h>
#include <sys/types.h>
#include <sys/socket.h>
#define PORTNUMBER 12543

int factorial(int num1)
{
    int contador;
    int *resul;
    contador=0;
    *resul=1;
    for(contador=1;contador<=num1;contador++)
    {
        *resul=*resul*contador;
    }
    printf("El factorial es:%d \n",*resul);
}

int suma(int num1, int num2)
{
    int *resul;
    *resul = num1 + num2;
    printf("La suma es %d",*resul);
}

int main(int *resul)
{
char buf[1024];
int s, n, len;
struct sockaddr_in name;
int num1;
int num2;

int *opcion;

s=socket(PF_INET, SOCK_DGRAM, 0);
name.sin_family = AF_INET;
name.sin_port = htons(PORTNUMBER);
name.sin_addr.s_addr = htonl(INADDR_ANY);
len = sizeof(struct sockaddr_in);
bind(s,(struct sockaddr *) &name, len);
write(1, opcion, sizeof(opcion));

while ((n = recvfrom(s,buf, sizeof(buf),0, (struct sockaddr*) &name, &len)) > 0)
    {
        switch(*opcion)
            {
                case 0:
                printf("Suma a realizar:");
                printf("\nPrimer sumando: %d", num1);
                fflush(stdout);

                printf("\nSegundo sumando: %d", num2);
                suma(num1,num2);
                fflush(stdout);

                write(1, resul, sizeof(resul));
                sendto(s, resul, n, 0, (struct sockaddr*) &name, len);
                break;

                case 1:
                printf("Número factorial %d", num1);
                factorial(num1);
                write(1, resul, sizeof(resul));
                sendto(s, resul,sizeof(resul), 0, (struct sockaddr*) &name, len);
                break;
                default:
                perror("Opción equivocada");
            }
    }
}
