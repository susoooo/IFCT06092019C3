#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <stdio.h>
#include <unistd.h>
#include <netdb.h>
#include <string.h>

#define PORTNUMBER 12543

int main (void)
{
    int numero1;
    int numero2;
    int contador;
    int suma;
    int factorial;
    int operacion;


    int n, s, len;
    char buf[1024];
    char hostname[64];
    struct hostent *hp;
    struct sockaddr_in name;

    numero1= 0;
    numero2= 0;
    suma= 0;
    factorial= 1;

 /* Nombre del host local. */
    gethostname(hostname, sizeof (hostname));

    /* Dirección de red del host local */
    hp = gethostbyname (hostname);

    /* Se crea el socket */
    s = socket (AF_INET, SOCK_DGRAM, 0);
    name.sin_family = AF_INET;
    name.sin_port = htons (PORTNUMBER);

    /* Se asigna dirección IP */
    memcpy(&name.sin_addr, hp->h_addr_list[0], hp->h_length);
    len = sizeof(struct sockaddr_in);


     /* Se copian los datos al socket */
    sendto(s, buf, n, 0, (struct sockaddr*) &name, len);

    printf("Introduce la operacion\n");
    printf("0 - Suma\n");
    printf("1 - Factorial\n ");


    printf("Numero de la operacion: ");
    scanf("%d",&operacion);

    do
    {
        if(operacion==0)
        {
            printf("Escriba el primer numero\n");
            scanf("%d",&numero1);


            printf("Escriba el segundo numero\n");
            scanf("%d",&numero2);

            printf("La suma es: %d\n",suma);

        }

        if(operacion==1)
        {
            printf("Escriba el primer numero\n");
            scanf("%d",&numero1);


          printf("El factorial es: %d\n",factorial);
    }
}

while(operacion!=0 && operacion!=1);

}


recv(s, buf, sizeof(buf),0);

write (1, buf, n);




    /* Se lee caracteres del teclado
    while ((n= read(0, buf,sizeof(buf)))>0)
    {
    Se copian los datos al socket
    sendto(s, buf, n, 0, (struct sockaddr*) &name, len);

    recv(s, buf, sizeof(buf),0);

    write (1, buf, n);
    }
    */

