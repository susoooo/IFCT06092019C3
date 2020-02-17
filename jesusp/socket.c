#include <stdio.h>
#include <stdlib.h>
#include <arpa/inet.h>
#include <unistd.h>
#include <netinet/in.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <string.h>
#define PORTNUMBER 12543

int main (void)
{
    char buf[1024];
    int s, n, len;
    struct sockaddr_in name;

    // Se crea el socket
    s=socket(PF_INET, SOCK_DGRAM, 0);
    name.sin_family = AF_INET;
    name.sin_port = htons(PORTNUMBER);
name.sin_addr.s_addr = htonl(INADDR_ANY);
len = sizeof(struct sockaddr_in);

// Se asigna dirección al socket
bind(s,(struct sockaddr *) &name, len);

//Se lee del socket hasta el final del fichero
while ((n = recvfrom(s,buf, sizeof(buf),0, (struct sockaddr*) &name, &len)) > 0)
// Se imprime los datos leídos
{
    write(1, buf, n);
    sleep(1);
    sendto(s, buf, n, 0, (struct sockaddr*) &name, len);
}

// Se cierra el socket
close(s);
}
