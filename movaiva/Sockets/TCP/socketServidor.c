#include <stdio.h>
#include <netinet/in.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <unistd.h>

#define PORTNUMBER 12543

int main (void)
{
    char buf[1024];
    int s;
    int n;
    int ns;
    int len;
    struct sockaddr_in name;

    /* Se crea el socket */
    s=socket(AF_INET,SOCK_STREAM,0);
    name.sin_family=AF_INET;
    name.sin_port=htons(PORTNUMBER);
    name.sin_addr.s_addr=htonl(INADDR_ANY);
    len=sizeof(struct sockaddr_in);

    /* Se publica la dirección y el puerto por el que va a escuchar */
    bind(s,(struct sockaddr *) &name, len);

    /* Escucha peticiones */
    listen(s,5);

    /* Aceptar conexiones */
    ns=accept(s,(struct sockaddr *) &name,&len);
    /* Se lee el socket hasta el final del fichero */
    while((n=recv(ns,buf,sizeof(buf),0))>0)
    {
        write(1,buf,n);
        send(ns,buf,n,0);
    }

    /* Se cierran las conexiones */
    close(s);
    close(ns);

}