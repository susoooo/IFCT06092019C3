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
    int ns;
    int len;
    int num1;
    int num2;
    int factorial;
    int contador;
    int suma;
    int opcion1;

    struct sockaddr_in name;
    /* Se crea el socket */
    s = socket(AF_INET, SOCK_STREAM, 0);
    name.sin_family = AF_INET;
    name.sin_port = htons(PORTNUMBER);
    name.sin_addr.s_addr = htonl(INADDR_ANY);

    len = sizeof(struct sockaddr_in);
    /* Se asigna direcc1on al socket */
    bind (s, (struct sockaddr *) &name, len);

    listen(s, 5);

    /* Acepta conexiones */
    ns = accept(s, (struct sockaddr *) &name, &len);

    n = recv(ns, buf, sizeof(buf), 0);

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

                send(ns, "Dame el primer numero: ", 24, 0);
                sleep(1);

                n = recv(ns, &num1, sizeof(num1), 0);

                printf("%d", num1);
                printf("\nSegundo operando: ");
                fflush(stdout);

                send(ns, "Dame el segundo numero: ", 25, 0);
                sleep(1);

                n = recv(ns, &num2, sizeof(num2), 0);


                printf("%d\n", num2);
                fflush(stdout);

                suma = num1 + num2;
                send(ns, &suma, sizeof(suma), 0);
            break;

            case 1:
                printf("\nRealizando factoramiento: ");
                printf("\nNumero a factorizar: ");
                fflush(stdout);

                send(ns, "Dame el numero: ", 24, 0);
                sleep(1);

                n = recv(ns, &num1, sizeof(num1), 0);

                factorial = num1;

                for (contador = num1-1; contador > 1; contador--)
                {
                    factorial = factorial * contador;
                }

                send(ns, &factorial, sizeof(factorial), 0);
                sleep(1);
            break;

            default:
                printf("*");
        }
    printf("\n");

    close(ns);
    close(s);
}
