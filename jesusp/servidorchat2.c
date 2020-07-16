#include <stdio.h>
#include <stdlib.h>
#include <arpa/inet.h>
#include <unistd.h>
#include <netinet/in.h>
#include <netdb.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/socket.h>
#include <string.h>
#define PORTNUMBER 33333

int main(void)
{
    char buf[1024];
    int s;
    int n;
    int ns;
    int len;
    struct sockaddr_in name;

    s = socket(AF_INET, SOCK_STREAM, 0);
    perror("socket");

    name.sin_family = AF_INET;
    name.sin_port = htons(PORTNUMBER);
    name.sin_addr.s_addr = htonl(INADDR_ANY);

    len = sizeof(struct sockaddr_in);
    bind(s, (struct sockaddr *) &name, len);
    perror("bind");
    listen(s, 5);
    perror("listen");
    ns = accept (s,(struct sockaddr *) &name, &len);
    perror("ns");
    while ((n = recv(ns, buf, sizeof(buf),0)) > 0)
    {
    perror("while");
    write(1,buf,n);
    fflush(stdout);

    if(strncmp(buf, "NAME", 4) == 0)
    {
        send(ns, "OK\n", 4, 0);
        perror("send");
    }
    else
    if(strncmp(buf, "MESSAGE", 7)== 0)
    {
        send(ns, "OK\n", 4, 0);
        perror("send");
    }
    else
    if(strncmp(buf, "GOODBYE", 7) == 0)
    {
        send(ns, "OK", 3, 0);
        perror("send");
        sleep(1);
        close(ns);
        close(s);
    }
    else
    {
        send(ns, "Error\n", 6, 0);
    }
    memset(buf, 0, 1024);
    sleep(1);
    }
    close(ns);
    close(s);
}
