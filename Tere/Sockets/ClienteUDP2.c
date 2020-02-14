#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <stdio.h>
#include <unistd.h>
#include <netdb.h>
#include <string.h>

#define PORTNUMBER 12543

int main (void)
{
    int n, s, len;
    char buf[1024];
    char hostname[64];
    struct hostent *hp;
    struct sockaddr_in name;

    /* Nombre del host local. */
    gethostname(hostname, sizeof (hostname));

    /* Dirección de red del host local */
    hp = gethostbyname (hostname);

    /* Se crea el socket */
    s = socket (AF_INET, SOCK_DGRAM, 0);
    name.sin_family = AF_INET;
    name.sin_port = htons (PORTNUMBER);

    /* Se asigna dirección IP */
    memcpy(&name.sin_addr, hp->h_addr_list[0], hp->h_length);
    len = sizeof(struct sockaddr_in);

    /* Se lee caracteres del teclado */
    while ((n= read(0, buf,sizeof(buf)))>0)

    /* Se copian los datos al socket */
    sendto(s, buf, n, 0, (struct sockaddr*) &name, len);

	sleep(3);
 /* Se lee del socket hasta final del fichero */
    while ((n = recv(s, buf, sizeof(buf),0))>0)

    /* Se imprime los datos leídos */

    write (1, buf, n);

	

    /* Se cierra el socket */

    close (s);

}