#include <stdio.h>
#include <stdlib.h>
#include <netinet/in.h>
#include <unistd.h>
#include <string.h>
#include <netdb.h>
#include <sys/types.h>
#include <sys/socket.h>
#define PORTNUMBER 12543

void * factorial(void * num1)
{
    int contador;
    int facto;
    contador=0;
    facto=1;
    for(contador=1;contador<=*(int*)num1;contador++)
    {
        facto=facto*contador;
    }
    printf("El factorial es:%d \n",facto);
}

void * suma(void * num1, void *num2)
{
    int sum;
    sum = num1 + num2;
    printf("La suma es %d",sum);
}

int main(void)
{
char buf[1024];
int s, n, len;
struct sockaddr_in name;
int num1;
int num2;
int suma;
int opcion;

s=socket(PF_INET, SOCK_DGRAM, 0);
name.sin_family = AF_INET;
name.sin_port = htons(PORTNUMBER);
name.sin_addr.s_addr = htonl(INADDR_ANY);
len = sizeof(struct sockaddr_in);

bind(s,(struct sockaddr *) &name, len);

while ((n = recvfrom(s,buf, sizeof(buf),0, (struct sockaddr*) &name, &len)) > 0)
    {
        switch(opcion)
            {
                case 0:
                suma();
                write(1, buf, n);
                sendto(s, buf, n, 0, (struct sockaddr*) &name, len);
                break;

                case 1:
                factorial();
                write(1, buf, n);
                sendto(s, buf, n, 0, (struct sockaddr*) &name, len);
            }
    }
}
