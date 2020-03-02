/* simple TCP client */

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

#define PORTNUMBER 47654
#define MESSAGE_BUFFER_SIZE 1024

int main(int argc, char *argv[]) {

  char buffer[PORTNUMBER];
  char hostname[64];
  int client_socket;
  int n;
  socklen_t len;
  struct hostent *hp;
  struct sockaddr_in client_addr;
  int port;

  /* command line options */
  if (argc > 1) {
    port = atoi(argv[1]);
  } else {
    /* defaults */
    port = PORTNUMBER;
  }


  len = sizeof(struct sockaddr_in);

  gethostname(hostname, sizeof(hostname));

  hp = gethostbyname(hostname);

  client_socket = socket(PF_INET, SOCK_STREAM, 0);
  client_addr.sin_family = AF_INET;
  client_addr.sin_port = htons(port);

  memcpy(&client_addr.sin_addr, hp->h_addr_list[0], hp->h_length);
  len = sizeof(struct sockaddr_in);

  if (connect(client_socket, (struct sockaddr *) &client_addr, len) != 0) {
    perror("ERROR socket connection");
    exit(1);
  }

  while (1) {

    if ((n = recv(client_socket, buffer, sizeof(buffer),0)) < 0)
      {
        perror("recv error");
      }
    else {
      write(STDOUT_FILENO, buffer, n);
      write(STDOUT_FILENO, "\n", 1);
      n = read(STDIN_FILENO, buffer, sizeof(buffer));
      send(client_socket, buffer, n, 0);
      memset(buffer, '\0', sizeof(buffer));

    }
  }

  close(client_socket);
  return 0;
}
