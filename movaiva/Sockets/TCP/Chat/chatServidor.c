#include <stdio.h>
#include <netinet/in.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include <arpa/inet.h>
#include <pthread.h>

#define PORTNUMBER 12543
#define MAX_CONEXIONES 12

struct message
{
    char command[16];
    char message[1024];
};

struct user
{
    int id;
    char nick[1024];
    char addr[1024];
};

char *messages[MAX_CONEXIONES];

struct user users[MAX_CONEXIONES];

char *commads[]={ "NAME", "GOODBYE", "UPDATE_MESSAGES", "MESSAGE" };

struct sockaddr_in client;

void splitBuffer( char buf[],struct message *m);
void *treatMessage(void *clientSocket);

int main (void)
{
    
    int s;    
    int clientSocket;
    int len;
    int contFor;
    struct sockaddr_in server;
    pthread_t thread;

    /* Se crea el socket */
    s=socket(AF_INET,SOCK_STREAM,0);
    perror("Socket");
    server.sin_family=AF_INET;
    server.sin_port=htons(PORTNUMBER);
    server.sin_addr.s_addr=htonl(INADDR_ANY);
    len=sizeof(struct sockaddr_in);

    /* Se publica la dirección y el puerto por el que va a escuchar */
    bind(s,(struct sockaddr *) &server, len);
    perror("bind");

    /* Escucha peticiones */
    listen(s,5);
    perror("listen");

    
    
        /* Aceptar conexiones */
        
    while((clientSocket=accept(s,(struct sockaddr *) &client,&len))>0)
    {
        if(pthread_create(&thread,NULL,treatMessage,(void *)&clientSocket)==0)
        {
            printf("El hilo se creo correctamente\n");
        }
    }
            
    
    close(s);
    close(clientSocket);

    
}

void splitBuffer (char buf[], struct message *m)
{
    
    int conCommand;
    int conMessage;
    int contador;

    contador=0;

    for(conCommand=0; buf[conCommand]!=' ' && buf[conCommand]!='\n'; conCommand++)
    {
        m->command[conCommand]=buf[conCommand];        
    }    

    m->command[conCommand]='\0';

    //printf ("SplitBuffer: m.commad: %s\n",m->command);

    for(conMessage=conCommand+1; buf[conMessage]!='\n'; conMessage++)
    {        
        m->message[contador]=buf[conMessage];
        contador++;
    }

    m->message[contador]='\0';  

    //printf ("SplitBuffer: m.message: %s\n",m->message);  

}

void *treatMessage(void *clientSocket)
{
    char buf[1024];
    int n;
    int contUser;
    int contFor;
    int currentUser;
    char cadena[1024];
    struct message m;
    int *socket;

    socket=(int *) clientSocket;
    contUser=0;
    currentUser=0;
    contFor=0;

    /* Se lee el socket hasta el final del fichero */
    memset(buf,'\0',sizeof(buf));
    while((n=recv(*socket,buf,sizeof(buf),0))>0)
    {
        perror("recv");
        write(STDOUT_FILENO,buf,n);
            
        splitBuffer(buf,&m);

        //printf("strcmp: %d\n",strcmp(m.command,commads[1]));

        if(strcmp(m.command,commads[0])==0)
        {   
            for(contFor=0;contFor<MAX_CONEXIONES;contFor++)
            {
                if(strcmp(users[contFor].nick,"\0")==0)
                {
                    users[contFor].id=contUser;
                    strcpy(users[contFor].nick,m.message);
                    strcpy(users[contFor].addr,inet_ntoa(client.sin_addr));
                    printf("%s conectado\n",users[contFor].nick);
                    fflush(stdout);
                    printf("Direccion: %s\n",users[contFor].addr);
                    fflush(stdout);
                    contFor=MAX_CONEXIONES;
                }
                else
                {
                    contUser=-1;
                }
                
            }
            
            for(contFor=0;contFor<MAX_CONEXIONES;contFor++)
            {
                printf("Usuario: %s, Direccion: %s\n",users[contFor].nick,users[contFor].addr);
            }
            if(contUser==-1)
            {
                strcpy(cadena,"No hay espacio para más conexiones\n");
            }
            else
            {
                strcpy(cadena, "OK\n");
            }
            
            send(*socket,"OK\n",sizeof("OK\n"),0); 
            perror("send");
        }
        else if(strcmp(m.command,commads[1])==0)
        {
                /* Se cierran las conexiones */
            
            for(contFor=0;contFor<MAX_CONEXIONES;contFor++)
            {
                
                if(strcmp(inet_ntoa(client.sin_addr),users[contFor].addr)==0)
                {
                    currentUser=contFor;
                    printf("%d\n",contFor);
                    contFor=MAX_CONEXIONES;
                }
                else
                {
                    currentUser=-1;
                }

            }

             
            
            if(currentUser!=-1)
            {
                printf("Desconectando %s\n",users[currentUser].nick);
                strcpy(users[currentUser].nick,"\0");
                strcpy(users[currentUser].addr,"\0");
                users[currentUser].id=-1;
                strcpy(cadena,"OK\n");                    
            }
            else
            {
                strcpy(cadena, "Usuario no encontrado\n");
            }
            
            send(*socket,cadena,sizeof(cadena),0); 
            memset(buf,'\0',sizeof(buf));                
        }    
    }
}