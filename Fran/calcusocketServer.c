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
    int s;
    int n;
    int len;
    int num1;
    int num2;
    int factorial;
    int contador;
    int suma;
    int opcion1;

    struct sockaddr_in name;
    /* Se crea el socket */
    s = socket(AF_INET, SOCK_DGRAM, 0);
    name.sin_family = AF_INET;
    name.sin_port = htons(PORTNUMBER);
    name.sin_addr.s_addr = htonl(INADDR_ANY);

    len = sizeof(struct sockaddr_in);
    /* Se asigna direcc1on al socket */
    bind (s, (struct sockaddr *) &name, len);

    n = recvfrom(s, buf, sizeof(buf), 0, (struct sockaddr*) &name, &len);

    opcion1 = atoi(buf);
    printf("%s", buf);
    printf("%d", opcion1);
    fflush(stdout);

        switch (opcion1)
        {
            case 0:
                printf("\nRealizando sumamiento: ");
                printf("\nPrimer operando: ");
                fflush(stdout);

                sendto(s, "Dame el primer numero: ", 24, 0, (struct sockaddr*) &name, len);
                sleep(1);

                n = recvfrom(s, &num1, sizeof(num1), 0, (struct sockaddr*) &name, &len);

                printf("%d", num1);
                printf("\nSegundo operando: ");
                fflush(stdout);

                sendto(s, "Dame el segundo numero: ", 25, 0, (struct sockaddr*) &name, len);
                sleep(1);

                n = recvfrom(s, &num2, sizeof(num2), 0, (struct sockaddr*) &name, &len);


                printf("%d\n", num2);
                fflush(stdout);

                suma = num1 + num2;
                sendto(s, &suma, sizeof(suma), 0, (struct sockaddr*) &name, len);
            break;

            case 1:
                printf("\nRealizando factoramiento: ");
                printf("\nNumero a factorizar: ");
                fflush(stdout);

                sendto(s, "Dame el numero: ", 24, 0, (struct sockaddr*) &name, len);
                sleep(1);

                n = recvfrom(s, &num1, sizeof(num1), 0, (struct sockaddr*) &name, &len);

                factorial = num1;

                for (contador = num1-1; contador > 1; contador--)
                {
                    factorial = factorial * contador;
                }

                sendto(s, &factorial, sizeof(factorial), 0, (struct sockaddr*) &name, len);
                sleep(1);
            break;

            default:
                printf("*");
        }
    printf("\n");
    close(s);
}
