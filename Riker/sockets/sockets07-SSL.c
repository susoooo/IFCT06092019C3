/* 3-Crear un cliente que se conecte con varios servidores web (p.e google.es, elprogreso.es, xunta.gal) y recoja su página principal. El protocolo que utiliza un servidor web para servir datos es HTTP. */

/* Compile wit -lssl -lcrypto */

#include <arpa/inet.h>
#include <errno.h>
#include <netinet/in.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/socket.h>
#include <sys/types.h>
#include <unistd.h>
#include <netdb.h>
#include <openssl/ssl.h>


#define PORTNUMBER 443
#define MESSAGE_BUFFER_SIZE 1024

int main(int argc, char *argv[]) {

  char buffer[MESSAGE_BUFFER_SIZE];
  char hostname[64];
  char request[MESSAGE_BUFFER_SIZE];
  int client_socket;
  int n;
  SSL *conn;
  SSL_CTX *ssl_ctx;
  socklen_t len;
  struct hostent *hp;
  struct sockaddr_in client_addr;

  if (argc > 2 ) {
    printf("Too many arguments!\n");
    exit(1);
  } else if (argc == 1 ) {
    printf("Not enough arguments!\n");
    exit(1);
  }

  printf("%s", argv[1]);

  /* https://en.wikipedia.org/wiki/Hypertext_Transfer_Protocol#Client_request */
  sprintf(request, "GET / HTTP/1.1\r\nHost: %s\r\n\r\n", argv[1]);

  len = sizeof(struct sockaddr_in);

  gethostname(hostname, sizeof(hostname));

  hp = gethostbyname(argv[1]);

  client_socket = socket(PF_INET, SOCK_STREAM, 0);
  client_addr.sin_family = AF_INET;
  client_addr.sin_port = htons(PORTNUMBER);

  memcpy(&client_addr.sin_addr, hp->h_addr_list[0], hp->h_length);
  len = sizeof(struct sockaddr_in);

  if (connect(client_socket, (struct sockaddr *) &client_addr, len) <0) {
    perror("connect error");
  } else {
    SSL_load_error_strings();
    SSL_library_init();
    ssl_ctx = SSL_CTX_new (SSLv23_client_method());

    conn = SSL_new(ssl_ctx);
    SSL_set_fd(conn, client_socket);

    int err = SSL_connect(conn);
    if (err != 1)
      abort();

    SSL_write(conn, request, strlen(request));
  }

  while ((n = SSL_read(conn, buffer, sizeof(buffer))) > 0) {
    write(STDOUT_FILENO, buffer, n);
  }
  close(client_socket);
  return 0;
}
