#include <stdio.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <stdlib.h>
#include <netinet/in.h>
#include <unistd.h>
#include <string.h>
#include <pthread.h>

#define PORTNUMBER 12543


void * variosclientes (void * parametro)
{

char buf[1024];
int ns;
int n;
int contador;
int contador2;
char mensajes[100][1024];

contador=0;

ns=* (int *) parametro;
 /* Se lee del socket hasta final del fichero*/
   while ((n = recv(ns, buf, sizeof(buf), 0)) > 0)
    {

        /* Se imprime los datos leidos */


        write(1, buf, n);


       if(strcmp(strtok(buf, " "),"NAME")==0)
       {
        send(ns,"OK\n",3, 0);
       }


        if(strcmp(strtok(buf, " "),"MESSAGE")==0)
       {

        strcpy(mensajes[contador],buf);
        contador++;

        send(ns,"OK\n",3, 0);
       }

       if(strcmp(strtok(buf, " "), "UPDATE")==0)
        {
    contador2=contador;
    for(contador=0;contador<contador2; contador++)
        {


        send(ns,mensajes[contador], 0);

        sleep(1);

        send(ns,"SENDING\n",8,0);
        }




       /*
        send(ns,"OK\n",3, 0);*/
       }


        if(strcmp(strtok(buf, "\n"),"GOODBYE")==0)
       {
            send(ns,"OK\n",3, 0);
            close(ns);
        }
    }
}


void main(void)

 {

    int s;

    int len;
    int ns;
    struct sockaddr_in name;
    char NAME;
    int salir;


    pthread_t h1;


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
    listen(s, 3);
    perror("listen");

    /* Acepta conexiones */

    while(1)
    {
    ns = accept(s, (struct sockaddr *) &name, &len);
    perror("accept");


    pthread_create (&h1 , NULL , variosclientes ,&ns);
    }


   /* ns[contador] = accept(s, (struct sockaddr *) &name, &len);
    contador++;  //contador=contador+1

    printf("%d", ns);
    fflush(stdout);


    /* Visualizar informacion transferida */
    /*printf (“ %s \n”, buf);*/


            close(s);

}




