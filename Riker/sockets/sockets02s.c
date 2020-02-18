/* UDP server */

#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <unistd.h>
#include <string.h>

#define PORTNUMBER 47654
#define MESSAGE_BUFFER_SIZE 1024

int main(void){
  char message_buffer[MESSAGE_BUFFER_SIZE];
  char reply_buffer[MESSAGE_BUFFER_SIZE];
  int socket_handler;
  int message_size;

  /* in.h: Structure describing an Internet socket address. */
  socklen_t client_address_len;
  client_address_len = sizeof(struct sockaddr);

  struct sockaddr_in client_address;
  struct sockaddr_in server_address;

  server_address.sin_family = AF_INET; //AddressFormat_Internet
  server_address.sin_port = PORTNUMBER;
  server_address.sin_addr.s_addr = htonl(INADDR_ANY); // Address to accept any incoming messages.

  /* create socket */
  /* PF_INET == AF_INET (in new kernels) */
  socket_handler = socket(PF_INET, SOCK_DGRAM, 0);

  /* assign address to socket */
  bind(socket_handler, (struct sockaddr *) &server_address, sizeof(struct sockaddr_in));

  /* receive messages from the socket */
  while((message_size = recvfrom(socket_handler, message_buffer, sizeof(message_buffer), 0, (struct sockaddr *) &client_address, &client_address_len)) > 0){

    /* print message from client */
    printf("-> [%s:%d] %s", inet_ntoa(client_address.sin_addr), client_address.sin_port, message_buffer);

    /* composite message and send to client */
    sprintf(reply_buffer, "Message from %s:%d with size %d bytes, has been received!", inet_ntoa(client_address.sin_addr), client_address.sin_port, message_size);
    sendto(socket_handler, reply_buffer, sizeof(reply_buffer), 0, (struct sockaddr *) &client_address, client_address_len);



    /* print message to client */
    printf("<- %s\n", reply_buffer);

    /* clean buffers */
    memset(message_buffer, '\0', MESSAGE_BUFFER_SIZE);
    memset(reply_buffer, '\0', MESSAGE_BUFFER_SIZE);
  }

  return 0;
}
