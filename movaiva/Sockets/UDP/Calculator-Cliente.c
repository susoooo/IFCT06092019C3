#include <stdio.h>
#include <netinet/in.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netdb.h>
#include <string.h>
#include <unistd.h>

#define PORTNUMBER 12543

int main (void)
{
    char buf[1024];
    int s;
    int n;
    int len;
    char hostname[64];
    struct hostent *hp;
    struct sockaddr_in name;

    /* Nombre del host local */
    gethostname(hostname,sizeof(hostname));

    /* Dirección de red del host local */
    hp=gethostbyname(hostname);

    /* Se crea el socket */
    s=socket(AF_INET,SOCK_DGRAM,0);
    name.sin_family=AF_INET;
    name.sin_port=htons(PORTNUMBER);

    /* Se asigna la dirección IP */
    memcpy(&name.sin_addr.s_addr, hp->h_addr_list[0],hp->h_length);
    len=sizeof(struct sockaddr_in);

    printf("-------------MENU----------\n");
    printf("0. SUMA\n");
    printf("1. FACTORIAL\n");

    /* Se lee caracteres del teclado */
    while((n = read(0,buf,sizeof(buf))) > 0)
    {
        /* Se copian los datos del socket */
        sendto(s,buf,n,0,(struct sockaddr *) &name,len);
        recv(s,buf,sizeof(buf),0);
        puts(buf);
        memset(buf,'\0',sizeof(buf));

    }
    
    /* Se cierra socket */
    //close(s);

}