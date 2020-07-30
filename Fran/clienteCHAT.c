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
    int salir;
    char buf[1024];
    char msg[1024];
    char hostname[64];
    char nombre[20];

    salir = 0;
    memset(buf, 0, 1024);
    memset(msg, 0, 1024);

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

    do
    {
        printf("\nCliente: ");
        fflush(stdout);

        n = read(0, buf, sizeof(buf));
        send(s, buf, n, 0);
        sleep(1);

        if (strncmp(buf, "GOODBYE", 7) == 0)
        {
            printf("\nDespedida %s", msg);
            recv(s, msg, sizeof(msg), 0);
            printf("\nServidor dice: %s", msg);
            fflush(stdout);

            if (strncmp(msg, "Ok", 2) == 0)
            {
                salir = 1;
            }
        }

    }
    while (salir != 1);

    close(s);
    printf("\nAdios...\n");
    sleep(2);
}
