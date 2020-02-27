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
int opcion;
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
scanf("%d",&opcion);
sendto(s, &opcion, n, 0, (struct sockaddr*) &name, len);
while ( (n = read(0, buf, sizeof(buf))) > 0)
    {
    switch(opcion)
        {
            case 0:
            printf("Hago suma");
            printf("Primer sumando");
            scanf("%",&num1);
            printf("Segundo sumando");
            scanf("%",&num2);
            sendto(s, &num1, &num2, 0, (struct sockaddr*) &name, len);
            recvfrom(s,buf, sizeof(buf),0, (struct sockaddr*) &name, &len);
            n = recv(s, num1, num2, sizeof(opcion), 0);
            sleep(1);
            write(1, num1, num2, n);
            break;

            case 1:
            printf("Hago factorial");
            printf("Dame un numero");
            scanf("%d",&num1);
            sendto(s, &num1, n, 0, (struct sockaddr*) &name, &len);
            recvfrom(s,buf, sizeof(buf),0, (struct sockaddr*) &name, &len);
            n = recv(s, num1,  sizeof(opcion), 0);
            sleep(1);
            write(1, num1, n);
            break;

            default:
            printf("Sólo puede ser un 0 o 1");
        }
    }

}
