/*1-Implementa un cliente y un servidor de chat. Deberá funcionar de la siguiente manera:

A)Cada vez que el cliente se conecte,
deberá indicarle al servidor un nombre mediante el comando NAME,
momento en el que el servidor "registrará" el cliente y permitirá que interactue en el chat.
Cuando haya finalizado el proceso de registro, y si todo ha ido correctamente,
devolverá al cliente un mensaje de OK.

Cliente:NAME Juan
Servidor:OK


B)Para enviar un mensaje el cliente deberá enviar el comando MESSAGE y el texto del mensaje.
El servidor irá almacenando en varias colas, una por usuario conectado,
los mensajes que va recibiendo. Es decir, si en un momento dado hay 7 clientes conectados,
deberá mantener los mensajes en 7 colas, una por cada usuario.
Cada vez que un cliente envíe un mensaje, este aparecerá en la pantalla del servidor
y se añadirá a la cola de todos los clientes. Si todo ha ido correctamente,
el servidor devolverá al cliente un mensaje con el texto OK.

Cliente:MESSAGE Este es un texto para enviar al chat
Servidor:OK



D)Cuando un cliente desee desconectarse,
enviará al servidor un mensaje indicando GOODBYE.
En ese momento el servidor vaciará y eliminará el buffer asociado con ese cliente. Si todo ha ido correctamente,
enviará un mensaje al cliente de OK. Tras recibir este mensaje, el cliente se desconectará del servidor.

Cliente:GOODBYE
Servidor:OK




*/


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
    int salir;

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
    perror("conect");

    salir = 0;

    strcpy(buf,"");
    /* Se lee caracteres del teclado*/

    do
    {

       printf("\nCliente: ");
       fflush(stdout);
        /* Se copian las datos al socket */
       n= read(0, buf, sizeof(buf));

        send(s, buf, n, 0);
//TODO : HAcer que cuando se envía un goodbye, salir valga 1

        if(strcmp(strtok(buf, "\n"), "GOODBYE")==0)
        {
            salir = 1;
        }

        sleep(1);

        n=recv(s, buf, sizeof(buf), 0);

        printf("\nServidor: ");

         fflush(stdout);
        write(1,buf,n);

    }
 while (salir !=1);

 close(s);
}
