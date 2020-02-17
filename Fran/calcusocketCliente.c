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

    char buf[1024];
    char hostname[64];
    struct hostent * hp;
    struct sockaddr_in name;

    /* Nombre del host local. */
    gethostname(hostname, sizeof(hostname));

    /* Dirección de red del host local */

    hp = gethostbyname(hostname);

    /* Se crea el socket */
    s = socket(AF_INET, SOCK_DGRAM, 0);

    name.sin_family = AF_INET;
    name.sin_port = htons(PORTNUMBER);

    /* Se asigna dirección IF */
    memcpy(&name.sin_addr, hp->h_addr_list[0], hp->h_length);
    len = sizeof(struct sockaddr_in);

    printf("\n0. Sumacion.");
    printf("\n1. Factorizar.\n");
    scanf("\n%d", &opcion);

    /* Se lee caracteres del teclado*/
    //while ( (n = read(0, buf, sizeof(buf))) > 0)
    //{
        switch (opcion)
        {
            case 0:
                strcpy(buf, "0");
                sendto(s, buf, sizeof(buf), 0, (struct sockaddr*) &name, len);

                sleep(2);

                recvfrom(s, buf, sizeof(buf), 0, (struct sockaddr*) &name, &len);
                printf("\n%s", buf);
                scanf("%d", &numero);
                // read(0, buf, sizeof(buf));
                sendto(s, &numero, n, 0, (struct sockaddr*) &name, len);

                sleep(2);

                recvfrom(s, buf, sizeof(buf), 0, (struct sockaddr*) &name, &len);
                printf("\n%s", buf);
                scanf("%d", &numero);
                // read(0, buf, sizeof(buf));
                sendto(s, &numero, n, 0, (struct sockaddr*) &name, len);

                sleep(2);

                recvfrom(s, buf, sizeof(buf), 0, (struct sockaddr*) &name, &len);
                printf("\nEl resultado es: %s", buf);

            break;

            case 1:

            break;

            default:
                printf("*");
        }
        /* Se copian las datos al socket */
       // sendto(s, buf, n, 0, (struct sockaddr*) &name, len);

        // sleep(2);
        // n = recvfrom(s, buf, sizeof(buf), 0, (struct sockaddr*) &name, &len);

        // write(1, buf, n);
    // }
    close(s);
}
