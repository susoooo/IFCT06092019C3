#include <stdio.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <stdlib.h>
#include <netinet/in.h>
#include <unistd.h>


#define PORTNUMBER 12543

void main(void)
{
    char buf[1024];
<<<<<<< HEAD
    int s, n, len, num;
=======
    int s, n, len;
>>>>>>> 11899ab50d26fa978170e718ebc1921aad2a5c77
    struct sockaddr_in name;
    /* Se crea el socket */
    s = socket(AF_INET, SOCK_DGRAM, 0);
    name.sin_family = AF_INET;
    name.sin_port = htons(PORTNUMBER);
    name.sin_addr.s_addr = htonl(INADDR_ANY);

    len = sizeof(struct sockaddr_in);
    /* Se asigna direcc1on al socket */
    bind (s, (struct sockaddr *) &name, len);

    /* Se lee del socket hasta final del fichero*/
<<<<<<< HEAD
    while ((n = recvfrom(s, buf, sizeof(buf), 0, (struct sockaddr*) &name, &len)) > 0)
    {
        /* Se imprime los datos leidos */
        write(1, buf, n);

        num = sendto(s, buf, n, 0, (struct sockaddr*) &name, len);
        printf("%d", num);
        perror("num");
        fflush(stdout);
        sleep(1);
    }
=======
    while ((n = recv(s, buf, sizeof(buf), 0)) > 0)

    /* Se imprime los datos leidos */
    write(1, buf, n);

>>>>>>> 11899ab50d26fa978170e718ebc1921aad2a5c77
    /* Se cierra el socket */
    close(s);
}
