#include <stdio.h>
#include <netinet/in.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <string.h>

#define PORTNUMBER 12543

int main(void)
{
    char buf[1024];
    int s;
    int n;
    int len;
    struct sockaddr_in server;
    struct sockaddr_in client;
    socklen_t client_len;

    client_len=sizeof(struct sockaddr_in);

    /* Se crea el socket */
    s=socket(AF_INET,SOCK_DGRAM,0);
    server.sin_family=AF_INET;
    server.sin_port=htons(PORTNUMBER);
    server.sin_addr.s_addr=htonl(INADDR_ANY);
    len=sizeof(struct sockaddr_in);

    /* Se asigna dirección al socket */
    bind(s,(struct sockaddr *)&server,len);

    /* Se lee el socket hasta el final del fichero */
    while((n = recvfrom(s,buf,sizeof(buf),0,(struct sockaddr *)&client,&client_len)) > 0)
    {
        /* Se imprimen los datos leídos */
        puts(buf);

        sendto(s,buf,n,0,(struct sockaddr *) &client,client_len);  
        memset(buf,'\0',sizeof(buf));  
    }

}