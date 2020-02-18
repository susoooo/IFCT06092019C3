#include <stdio.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <stdlib.h>
#include <netinet/in.h>
#include <unistd.h>
#include <string.h>
#include <netdb.h>

#define PORTNUMBER 12543

int main (void)
{
    int n;
    int s;
    int len;
    char buf[1024];
    char hostname[64];

    struct hostent * hp;
    struct sockaddr_in name;

    /* Nombre del host local. */
    gethostname(hostname, sizeof(hostname));

    /* Dirección de red del host local */

    hp = gethostbyname(hostname);

    /* Se crea el socket */
    s = socket(AF_INET, SOCK_STREAM, 0);

    name.sin_family = AF_INET;
    name.sin_port = htons(PORTNUMBER);

    /* Se asigna dirección IF */
    memcpy(&name.sin_addr, hp->h_addr_list[0], hp->h_length);
    len = sizeof(struct sockaddr_in);

    /* Se conecta al servidor */
    connect(s, (struct sockaddr *) &name, len);

    /* Se lee caracteres del teclado*/
    while ((n = read(0, buf, sizeof(buf))) > 0)
    {
        /* Se copian las datos al socket */
        send(s, buf, n, 0);
        sleep(2);
        n = recv(s, buf, n, 0);
        write(1, buf, n);
    }

    close(s);
}
