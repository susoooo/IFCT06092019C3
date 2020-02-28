#include <stdio.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <stdlib.h>
#include <netinet/in.h>
#include <unistd.h>
#include <string.h>
#include <pthread.h>

#define PORTNUMBER 12543

void * conexion(void * manejador)
{
    int n;
    int salir;
    int indice;
    char buf[1024];
    char nombre[1024];
    char nomFichero[15];

    int numSocket;

    FILE * fichejador;

    numSocket = *(int *)manejador;

    salir = 0;
    memset(buf, 0, 1024);
    memset(nombre, 0, 1024);

    do
    {
        n = recv(numSocket, buf, sizeof(buf), 0);

        printf("\nCliente dice: ");
        fflush(stdout);

        write(1, buf, n);

        if (strncmp(buf, "GOODBYE", 7) != 0)
        {
            if (strncmp(buf, "NAME", 4) == 0)
            {
                for (indice = 5; indice < strlen(buf); indice++)
                {
                    nombre[indice-5] = buf[indice];
                }

                strcpy(nomFichero, strtok(nombre, "\n"));
                strcat(nomFichero, ".txt");
                printf("\nBienvenid@ %s.\n", nombre);
                fflush(stdout);
                send(numSocket, "Ok\n", 4, 0);
                sleep(1);
            }

            if (strncmp(buf, "MESSAGE", 7) == 0)
            {
                fichejador = fopen(nomFichero, "a");
                fwrite(&buf+7, sizeof(buf), 1, fichejador);
                send(numSocket, "Ok\n", 4, 0);
                sleep(1);
                fclose(fichejador);
            }
        }
        else
        {
            send(numSocket, "Ok\n", 4, 0);
            sleep(1);
            salir = 1;
        }
    }
    while(salir != 1);

    printf("\nAdios %s.\n", nombre);
    fflush(stdout);

    close(numSocket);
}

void main(void)
{

    int s;
    int len;
    int ns;

    pthread_t hilo;

    struct sockaddr_in name;

    /* Se crea el socket */
    s = socket(AF_INET, SOCK_STREAM, 0);
    perror("Socket");

    name.sin_family = AF_INET;
    name.sin_port = htons(PORTNUMBER);
    name.sin_addr.s_addr = htonl(INADDR_ANY);

    len = sizeof(struct sockaddr_in);

    /* Se asigna direcc1on al socket */
    bind (s, (struct sockaddr *) &name, len);

    /* Escucha de peticiones */
    listen(s, 5);
    perror("Listen");

    printf("\nServidor en marcha y a la escucha...\n");
    fflush(stdout);

    do
    {
        /* Acepta conexiones */
        ns = accept(s, (struct sockaddr *) &name, &len);
        perror("Accept");
        pthread_create(&hilo, NULL, conexion, (void *)&ns);
    }
    while(1);

    close(s);
}
