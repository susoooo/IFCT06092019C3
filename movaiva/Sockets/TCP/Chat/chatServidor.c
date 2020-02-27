#include <stdio.h>
#include <netinet/in.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include <arpa/inet.h>

#define PORTNUMBER 12543
#define MAX_CONEXIONES 12

struct message
{
    char command[16];
    char message[1024];
};

void splitBuffer( char buf[],struct message *m);

int main (void)
{
    char buf[1024];
    int s;
    int n;
    int ns;
    int len;
    int contUser;
    char *users[MAX_CONEXIONES];
    char *dir[MAX_CONEXIONES];
    char *messages[MAX_CONEXIONES];
    struct message m;
    struct sockaddr_in name;
    char *commads[]={ "NAME", "GOODBYE", "UPDATE_MESSAGES", "MESSAGE" };

    contUser=0;

    /* Se crea el socket */
    s=socket(AF_INET,SOCK_STREAM,0);
    perror("Socket");
    name.sin_family=AF_INET;
    name.sin_port=htons(PORTNUMBER);
    name.sin_addr.s_addr=htonl(INADDR_ANY);
    len=sizeof(struct sockaddr_in);

    /* Se publica la dirección y el puerto por el que va a escuchar */
    bind(s,(struct sockaddr *) &name, len);
    perror("bind");

    /* Escucha peticiones */
    listen(s,5);
    perror("listen");

    /* Aceptar conexiones */
    ns=accept(s,(struct sockaddr *) &name,&len);
    perror("accept");
    /* Se lee el socket hasta el final del fichero */
    memset(buf,'\0',sizeof(buf));
    while((n=recv(ns,buf,sizeof(buf),0))>0)
    {
        write(STDOUT_FILENO,buf,n);
        
        splitBuffer(buf,&m);

        if(strcmp(m.command,commads[0])==0)
        {   
            users[contUser]=m.message;
            dir[contUser]=inet_ntoa(name.sin_addr);
            printf("%s conectado\n",users[contUser]);
            fflush(stdout);
            printf("Direccion: %s\n",dir[contUser]);
            fflush(stdout);
            contUser++;
            send(ns,"OK\n",sizeof("OK\n"),0); 
            memset(buf,'\0',sizeof(buf));
        }
        else if(strcmp(m.command,commads[1])==0)
        {
            /* Se cierran las conexiones */
            send(ns,"OK",sizeof("OK"),0); 
            memset(buf,'\0',sizeof(buf));
        }
    }
    close(s);
    close(ns);

    
}

void splitBuffer (char buf[], struct message *m)
{
    
    int conCommand;
    int conMessage;
    int contador;

    contador=0;

    for(conCommand=0; buf[conCommand]!=' '; conCommand++)
    {
        m->command[conCommand]=buf[conCommand];
    }    

    m->command[conCommand]='\0';

    for(conMessage=conCommand+1; buf[conMessage]!='\n'; conMessage++)
    {        
        m->message[contador]=buf[conMessage];
        contador++;
    }

    m->message[contador]='\0';    

}