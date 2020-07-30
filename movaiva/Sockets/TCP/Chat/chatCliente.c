#include <stdio.h>
#include <netinet/in.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <unistd.h>
#include <string.h>
#include <netdb.h>
#include <stdlib.h>

#define PORTNUMBER 12543

int main (void)
{
    char buf[1024];
    char readingStdin[1024];
    int s;
    int n;
    int len;
    char hostname[64];
    struct hostent *hp;
    struct sockaddr_in name;

    /* Nombre del host local */
    gethostname(hostname,sizeof(hostname));

    /* Dirección de red del host local */
    hp=gethostbyname(hostname);

    /* Se crea el socket */
    s=socket(AF_INET,SOCK_STREAM,0);
    perror("Socket");
    name.sin_family=AF_INET;
    name.sin_port=htons(PORTNUMBER);
    /* Se asigna la dirreción IP */
    memcpy(&name.sin_addr.s_addr, hp->h_addr_list[0],hp->h_length);
    len=sizeof(struct sockaddr_in);

    /* Se conecta al servidor */
    connect(s,(struct sockaddr *) &name,len);
    perror("connect");
    memset(readingStdin,'\0',sizeof(readingStdin));
    /* Se leen caracteres del teclado */
    while((n=read(STDIN_FILENO,readingStdin,sizeof(readingStdin)))>0)
    {
        /* Se copian los datos al socket */
        send(s,readingStdin,n,0);
        memset(buf,'\0',sizeof(buf));
        n=recv(s,buf,sizeof(buf),0);
        write(STDOUT_FILENO,buf,strlen(buf));
        if((strcmp(readingStdin,"GOODBYE\n")==0 && strcmp(buf,"OK\n")==0))  
        {
            /* Se cierra el socket */
            close(s);
            exit(0);
        }else
        {
            memset(buf,'\0',sizeof(buf));
            memset(readingStdin,'\0',sizeof(readingStdin)); 
        }
        
    }

}