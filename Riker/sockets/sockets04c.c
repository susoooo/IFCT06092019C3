/* TCP client */

#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <unistd.h>
#include <string.h>
#include <netdb.h>

#define PORTNUMBER 47654
#define MESSAGE_BUFFER_SIZE 1024

int main(void) {
  char buf[MESSAGE_BUFFER_SIZE];
  char hostname[64];
  int s;
  int n, len;
  struct sockaddr_in name;
  struct hostent *hp;

  gethostname(hostname, sizeof(hostname));

  hp = gethostbyname(hostname);

  s = socket(AF_INET, SOCK_STREAM, 0);
  name.sin_family = AF_INET;
  name.sin_port = htons(PORTNUMBER);

  memcpy(&name.sin_addr.s_addr, hp->h_addr_list[0], hp->h_length);
  len = sizeof(struct sockaddr_in);

  connect(s, ( struct sockaddr *) &name, len);

  while ((n = read(0, buf, sizeof(buf))) > 0)
    send(s, buf, n, 0);
  close(s);

  return 0;
}
