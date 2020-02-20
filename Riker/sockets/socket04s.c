/* simple TCP server */

#include <arpa/inet.h>
#include <errno.h>
#include <netinet/in.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/socket.h>
#include <sys/types.h>
#include <unistd.h>

#define PORTNUMBER 47654
#define MESSAGE_BUFFER_SIZE 1024

int main() {

  char buffer[1024];
  int server_socket;
  int client_socket;
  socklen_t server_len;
  socklen_t client_len;
  int n;

  struct sockaddr_in server_addr;
  struct sockaddr_in client_addr;

  server_socket = socket(PF_INET, SOCK_STREAM, 0);
  server_addr.sin_family = AF_INET;
  server_addr.sin_port = htons(PORTNUMBER);
  server_addr.sin_addr.s_addr = htonl(INADDR_ANY);
  server_len = sizeof(struct sockaddr_in);
  server_len = sizeof(struct sockaddr_in);

  bind(server_socket, (struct sockaddr *) &server_addr, server_len);

  /* set max simultaneous conection */
  listen(server_socket, 5);

  /* accept client conection */
  client_socket = accept(server_socket, (struct sockaddr *) &client_addr, &client_len);

  while((n = recv(client_socket, buffer, sizeof(buffer),0)) > 0){
    write(STDOUT_FILENO, buffer, n);
    }

  /* close sockets*/
  close(client_socket);
  close(server_socket);
  return 0;
}
