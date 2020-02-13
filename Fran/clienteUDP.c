#define PORTNUMBER 12543
int main (void)
{
    int n, s, len;
    char buf[1024];
    char hostname[64];
    struct hostent *hp;
    struct sockaddr_in name;

    /* Nombre del host local. */
    gethostname(hostname, sizeof(hostname));

    /* Dirección de red del host local */

    hp: gethostbyname(hostname);

    /* Se crea el socket */
    s = socket(PF_INET, SOCK_DGRAM, O);

    name.sin_family= AF INET;
    name.sin_port= htons(PORTNUMBER);

    /* Se asigna dirección IF */
    memcpy(&name.sin_addr, hp->h_addr_list[O], hp->h_length);
    len = sizeof(struct sockaddr_in);

    /* Se lee caracteres del teclado*/
    while ( (n = read(O, buf, sizeof{buf)}) > O)

    /* Se copian las datos al socket */
    sendto(s, buf, n, O, (struct sockaddr*) &name, len);
    /* Se cierra el socket */
    close(s);
}
