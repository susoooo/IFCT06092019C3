#include <stdio.h>
#include <stdlib.h>
#include <arpa/inet.h>
#include <unistd.h>
#include <netinet/in.h>
#include <netdb.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <string.h>
#define PORTNUMBER 12563

int main(void)
{
    int n;
    int s;
    int ns;
    int len;
    int salir;
    char buf[1024];
    char hostname[64];
    struct hostent *hp;
    struct sockaddr_in name;
    salir = 0;
    gethostname(hostname, sizeof(hostname));
    hp = gethostbyname(hostname);
    s = socket(AF_INET, SOCK_STREAM, 0);
    name.sin_family = AF_INET;
    name.sin_port = htons(PORTNUMBER);
    memcpy(&name.sin_addr, hp->h_addr_list[0], hp->h_length);
    len = sizeof(struct sockaddr_in);
    connect(s, (struct sockaddr *) &name , len);

    while (((n = read(0, buf, sizeof(buf))) > 0) && (salir == 0))
    {
        send(s, buf, n, 0);
        //printf("buf %s,send %d\n", buf,n);
        fflush(stdout);
        sleep(1);
        perror("send");
        if(strncmp(buf, "GOODBYE",7)== 0)
        {
            n = recv(s, buf, sizeof(buf), 0);
            printf("%s",buf);
            fflush(stdout);
            if(strncmp(buf,"OK",2)==0)
            {
                salir=1;
                exit(0);
            }

        }else
        if(strncmp(buf, "UPDATE MESSAGE", 14)== 0)
        {
            printf("OK\n");
            send(s, "OK\n", 4, 0);
            while(strncmp(buf, "MESSAGE",7)== 0)
            {
                n = recv(s, buf, sizeof(buf), 0);
                write(1, buf, n);
                send(s, "OK\n", 4, 0);
            }
        }
        else
        {
            n = recv(s, buf, sizeof(buf), 0);
            write(1, buf, n);
        }




    }
    close(s);
}