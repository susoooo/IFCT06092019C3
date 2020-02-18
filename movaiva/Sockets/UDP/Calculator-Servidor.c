#include <stdio.h>
#include <netinet/in.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <string.h>
#include <stdlib.h>

#define PORTNUMBER 12543

int main(void)
{
    char buf[1024];
    int s;
    int n;
    int len;
    int opcion;
    int num;
    int suma;
    int con;
    int fac;
    int confor;
    struct sockaddr_in server;
    struct sockaddr_in client;
    socklen_t client_len;
    con=0;
    suma=0;
    fac=1;

    client_len=sizeof(struct sockaddr_in);

    /* Se crea el socket */
    s=socket(AF_INET,SOCK_DGRAM,0);
    server.sin_family=AF_INET;
    server.sin_port=htons(PORTNUMBER);
    server.sin_addr.s_addr=htonl(INADDR_ANY);
    len=sizeof(struct sockaddr_in);

    /* Se asigna dirección al socket */
    bind(s,(struct sockaddr *)&server,len);

    /* Se lee el socket hasta el final del fichero */
    while((n = recvfrom(s,buf,sizeof(buf),0,(struct sockaddr *)&client,&client_len)) > 0)
    {
        /* Se imprimen los datos leídos */
        puts(buf);

        opcion=strtol(buf,NULL,10);

        switch (opcion)
        {
            case 0:
                con=0;
                suma=0;
                while(con<2) {
                    sendto(s,"Introduzca un numero: ",sizeof("Introduzca un numero: "),0,(struct sockaddr *) &client,client_len);
                    memset(buf,'\0',sizeof(buf));
                    recv(s,buf,sizeof(buf),0);
                    num=strtol(buf,NULL,10);
                    suma+=num;
                    con++;
                }
                sprintf(buf,"Resultado de la suma: %d",suma);
                sendto(s,buf,sizeof(buf),0,(struct sockaddr *) &client,client_len);
                memset(buf,'\0',sizeof(buf));
                break;
            case 1:
                fac=1;
                sendto(s,"Introduzca un numero: ",sizeof("Introduzca un numero: "),0,(struct sockaddr *) &client,client_len);
                memset(buf,'\0',sizeof(buf));
                recv(s,buf,sizeof(buf),0);
                num=strtol(buf,NULL,10);
                for(confor=num;confor>=1;confor--){
                    fac*=confor;
                }
                sprintf(buf,"Resultado del factorial: %d",fac);
                sendto(s,buf,sizeof(buf),0,(struct sockaddr *) &client,client_len);
                memset(buf,'\0',sizeof(buf));
                break;
            default:
                sendto(s,"Opcion no valida",sizeof("Opcion no valida"),0,(struct sockaddr *) &client,client_len);
                break;

        }
    }

}