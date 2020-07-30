#include <stdio.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <stdlib.h>
#include <netinet/in.h>
#include <unistd.h>
#include <string.h>

#define PORTNUMBER 33333

void main(void)
{
    char buf[1024];
    int s;
    int n;
    int len;
    int ns;
    struct sockaddr_in name;
    char NAME;

    /* Se crea el socket */
    s = socket(AF_INET, SOCK_STREAM, 0);
    perror("socket");

    name.sin_family = AF_INET;
    name.sin_port = htons(PORTNUMBER);
    name.sin_addr.s_addr = htonl(INADDR_ANY);

    len = sizeof(struct sockaddr_in);


   /* Se publica la dirección y el puerto por el que se va a escuchar */
    bind (s, (struct sockaddr *) &name, len);
    perror("bin");

    /* Escucha de peticiones */
    listen(s, 5);
    perror("listen");

    /* Acepta conexiones */
    ns = accept(s, (struct sockaddr *) &name, &len);
    perror("accept");

    /* Se lee del socket hasta final del fichero*/
    while ((n = recv(ns, buf, sizeof(buf), 0)) > 0)
    {
        /* Se imprime los datos leidos */


        write(1, buf, n);


       if(strcmp(strtok(buf, " "),"NAME")==0)
       {
        send(ns,"OK\n",3, 0);
       }


        if(strcmp(strtok(buf, "\n"),"GOODBYE")==0)
       {
            send(ns,"OK\n",3, 0);

            close(ns);

            close(s);

        }

    }


}




