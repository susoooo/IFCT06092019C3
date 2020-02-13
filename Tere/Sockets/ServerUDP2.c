#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <stdio.h>
#include <unistd.h>

#define PORTNUMBER 12543

int main (void)
{
    char buf[1024];
    int s, n, len;

    struct sockaddr_in name;

    /* Se crea el socket */

    s = socket (AF_INET, SOCK_DGRAM, 0);
    name.sin_family = AF_INET;
    name.sin_port = htons(PORTNUMBER);

    name.sin_addr.s_addr = htonl (INADDR_ANY);
    len = sizeof(struct sockaddr_in);

    /* Se asigna direccin al socket */

    bind(s, (struct sockaddr *) &name, len);

    /* Se lee del socket hasta final del fichero */
    while ((n = recv(s, buf, sizeof(buf),0))>0)

    /* Se imprime los datos leídos */

    write (1, buf, n);


	sleep(2);

   /* Se copian los datos al socket */
    sendto(s, buf, n, 0, (struct sockaddr*) &name, len);

    /* Se cierra el socket */
    close(s);
    }





