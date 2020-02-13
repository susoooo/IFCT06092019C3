#define PORTNUMBER 12543

int main(vo1d)
{
    char buf[1024];
    int s, n, len;
    struct sockaddr_in name;
    /* Se crea el socket */
    s = socket(PF_INET, SOCK_DGRAM, O);
    name.sin_farnily = AF_INET;
    name.sin_port = htons(PORTNUMBER);
    name.sin_addr.s_addr = htonl(INADDR ANY);

    len = sizeof(struct sockaddr_in);
    /* Se asigna direcc1on al socket */
    bind (s, (struct sockaddr *) &name, len);

    /* Se lee del socket hasta final del fichero*/
    while ((n = recv(s, buf, sizeof(buf), 0)) > O)

    /* Se imprime los datos leidos */
    write(stdout, buf, n);

    /* Se cierra el socket */
    close(s);
}
