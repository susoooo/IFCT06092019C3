#include <stdio.h>
#include <stdlib.h>
#include <netinet/in.h>
#include <unistd.h>
#include <string.h>
#include <netdb.h>
#include <sys/types.h>
#include <sys/socket.h>
#define PORTNUMBER 12543

int main(void)
{
char buf[1024];
char hostname[64];
int s, n, len;
int num1;
int num2;
int *resul;
int *opcion;
struct sockaddr_in name;
struct hostent *hp;

gethostname(hostname, sizeof(hostname));
hp = gethostbyname(hostname);
s = socket(AF_INET, SOCK_DGRAM, 0);
name.sin_family = AF_INET;
name.sin_port = htons(PORTNUMBER);
memcpy(&name.sin_addr, hp->h_addr_list[0], hp->h_length);
len = sizeof(struct sockaddr_in);

printf("Dame un 0 o 1");
scanf("%d",opcion);
sendto(s, &*opcion, n, 0, (struct sockaddr*) &name, len);
while ( (n = read(0, buf, 1024)) > 0)
    {
    switch(*opcion)
        {
            case 0:
            printf("Hago suma\n");
            printf("Primer sumando: \n");
            scanf("%d",&num1);
            sendto(s, &num1, sizeof(num1), 0, (struct sockaddr*) &name, len);
            sleep(1);

            printf("Segundo sumando");
            scanf("%d",&num2);
            sendto(s, &num2, sizeof(num2), 0, (struct sockaddr*) &name, len);
            recvfrom(s,resul, sizeof(resul),0, (struct sockaddr*) &name, &len);
            write(1, resul,sizeof(resul));
            sleep(1);
            break;

            case 1:
            printf("Hago factorial\n");
            printf("Dame un numero: ");
            scanf("%d",&num1);
            sendto(s, &num1, sizeof(num1), 0, (struct sockaddr*) &name, len);
            recvfrom(s, resul, sizeof(resul),0, (struct sockaddr*) &name, &len);
            n = recv(s, resul,  sizeof(resul), 0);
            write(1, resul, sizeof(resul));
            sleep(1);
            break;

            default:
            printf("Sólo puede ser un 0 o 1");
        }
    }

}
