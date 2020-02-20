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
  char message[1024];
  char buffer[1024];
  int server_socket;
  int client_socket;
  socklen_t server_len;
  socklen_t client_len;
  int n;

  struct sockaddr_in server_addr;
  struct sockaddr_in client_addr;

  if ((server_socket = socket(PF_INET, SOCK_STREAM, 0)) == -1) {
    printf("error creating socket");
  }

  server_addr.sin_family = AF_INET;
  server_addr.sin_port = htons(PORTNUMBER);
  server_addr.sin_addr.s_addr = htonl(INADDR_ANY);
  server_len = sizeof(struct sockaddr_in);
  server_len = sizeof(struct sockaddr_in);

  if (bind(server_socket, (struct sockaddr *)&server_addr,sizeof(struct sockaddr_in)) < 0) {
    puts("bind failed");
  }

  /* set max simultaneous conection */
  listen(server_socket, 5);

  /* accept client conection */
  client_len = sizeof(struct  sockaddr_in); /* NOTE: without this, invalid argument error */
  if((client_socket = accept(server_socket, (struct sockaddr *) &client_addr, &client_len)) < 0)
     perror("accept failed");

  while((n = recv(client_socket, buffer, sizeof(buffer),0)) > 0){
    write(STDOUT_FILENO, buffer, n);
    /* sprintf(message, "> %s", buffer); */
    /* strcat(buffer, message); */
    strcpy(message, "I'm the server>");
    strcat(message, buffer);
    send(client_socket, message, strlen(message), 0);
    memset(message, '\0', MESSAGE_BUFFER_SIZE);
    memset(buffer, '\0', MESSAGE_BUFFER_SIZE);
  }

  /* close sockets*/
  close(client_socket);
  close(server_socket);
  return 0;
}
