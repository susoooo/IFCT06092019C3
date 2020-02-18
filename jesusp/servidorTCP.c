#include <stdio.h>
#include <stdlib.h>
#include <arpa/inet.h>
#include <unistd.h>
#include <netinet/in.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <string.h>
#define PORTNUMBER 12563

int main(void)
{
    char buf[1024];
    int s;
    int n;
    int ns;
    int len;
    struct sockaddr_in name;

    /* Se crea el socket.*/
    s = socket(AF_INET, SOCK_STREAM, 0);
    name.sin_family = AF_INET;
    name.sin_port = htons(PORTNUMBER);
    name.sin_addr.s_addr = htonl(INADDR_ANY);
    len = sizeof(struct sockaddr_in);

    /* Se publica la dirección y el puerto por el que se va a escuchar */
    bind(s, (struct sockaddr *) &name, len);

    /* Escucha de peticiones */
    listen(s, 5);

    /* Aceptar conexiones */
    ns = accept (s,(struct sockaddr *) &name, &len);
    /* Se le del socket hasta final de fichero */
    while ((n = recv(ns, buf, sizeof(buf),0)) > 0)
    {
    /* Se imprime lo que se va leyendo */
    write(1, buf, n);
    sleep(1);
    send(s, buf, n, 0);
    }
    /* Se cierran conexiones */
    close(ns);
    close(s);
}
