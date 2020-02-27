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
        printf("buf %s,send %d\n", buf,n);
        fflush(stdout);
        sleep(1);
        perror("send");
        n = recv(s, buf, sizeof(buf), 0);
        write(1, buf, n);

        if(strcmp(buf, "GOODBYE")== 0)
        {
            write(1, buf, n);
            salir=1;
        }

    }
    close(s);
}
