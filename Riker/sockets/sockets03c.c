/* UDP client */

#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <unistd.h>
#include <string.h>
#include <netdb.h>

#define PORTNUMBER 47654

#define MESSAGE_BUFFER_SIZE 1024

int main(void){
  char message_buffer[MESSAGE_BUFFER_SIZE];
  int socket_handler;
  int message_size;
  char hostname[64];

  /* netdb.h: Description of data base entry for a single host */
  struct hostent *hp;
  /* in.h: Structure describing an Internet socket address. */
  socklen_t client_address_len;
  struct sockaddr_in client_address;

  client_address.sin_family = AF_INET; //AddressFormat_Internet
  client_address.sin_port = PORTNUMBER;

  /* create socket */
  socket_handler = socket(PF_INET, SOCK_DGRAM, 0),

  /* set 'hostname' to local hostname */
  gethostname(hostname, sizeof(hostname));

  /* return canonical hostname */
  hp = gethostbyname(hostname);

  /* copy host address to 'client_address' */
  memcpy(&client_address.sin_addr, hp->h_addr_list[0], hp-> h_length);

  /* loop to read text from STDIN andsend to server */
  /* and receive messages from server. */
  while ((message_size = read(0, message_buffer, sizeof(message_buffer))) > 0) {
    sendto(socket_handler, message_buffer, message_size, 0, (struct  sockaddr*) &client_address, sizeof(struct sockaddr_in));

    recvfrom(socket_handler, message_buffer, sizeof(message_buffer), 0, (struct  sockaddr*) &client_address, &client_address_len);
    /* printf("-> %s", message_buffer); */
    /* fflush(stdout); */
    puts(message_buffer);
    memset(message_buffer,'\0' , sizeof(message_buffer));
  }

  return 0;
}
