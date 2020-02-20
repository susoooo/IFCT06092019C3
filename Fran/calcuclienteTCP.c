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
    int opcion;
    int numero;
    int facto;

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

    connect(s, (struct sockaddr *) &name, len);

    printf("\n0. Sumacion.");
    printf("\n1. Factorizar.\n");
    scanf("\n%d", &opcion);

        switch (opcion)
        {
            case 0:
                strcpy(buf, "0");
                sendto(s, buf, sizeof(buf), 0, (struct sockaddr*) &name, len);

                sleep(1);

                recv(s, buf, sizeof(buf), 0);
                printf("\n%s", buf);
                scanf("%d", &numero);
                // read(0, buf, sizeof(buf));
                send(s, &numero, sizeof(numero), 0);

                sleep(1);

                recv(s, buf, sizeof(buf), 0);
                printf("\n%s", buf);
                scanf("%d", &numero);
                // read(0, buf, sizeof(buf));
                send(s, &numero, sizeof(numero), 0);

                sleep(1);

                recv(s, &numero, sizeof(numero), 0);
                printf("\nEl resultado es: %d\n", numero);

            break;

            case 1:
                strcpy(buf, "1");
                send(s, buf, sizeof(buf), 0);

                sleep(1);

                recv(s, buf, sizeof(buf), 0);
                printf("\n%s", buf);
                scanf("%d", &numero);
                // read(0, buf, sizeof(buf));
                send(s, &numero, sizeof(numero), 0);

                sleep(1);

                recv(s, &facto, sizeof(facto), 0);
                printf("\nEl factorial de %d es: %d\n", numero, facto);

            break;

            default:
                printf("*");
        }


    close(s);
}
