/* 4-Crear un cliente que se conecte a un servidor de correo y envíe un correo. Utilizar el protocolo SMTP. */

/* Tested in: */
/*  - Linux gillespie 4.19.0-6-amd64 #1 SMP Debian 4.19.67-2+deb10u2 (2019-11-11) x86_64 GNU/Linux */
/*  - Postfix: 3.4.8-0+10debu1*/

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

#define PORTNUMBER 25
#define MESSAGE_BUFFER_SIZE 1024

void sendHELO(int s, char hostname[]);
void sendFROM(int s, char address[]);
void sendTO(int s, char address[]);

int main() {
  char buffer[MESSAGE_BUFFER_SIZE];
  char command[MESSAGE_BUFFER_SIZE];
  char login[6];
  char hostname[64];
  int client_socket;
  int n;
  socklen_t len;
  struct hostent *hp;
  struct sockaddr_in client_addr;

  /* strcpy(login, "LOGIN",); */
  sprintf(login, "LOGIN\n");

  len = sizeof(struct sockaddr_in);

  gethostname(hostname, sizeof(hostname));

  hp = gethostbyname("127.0.0.1");

  client_socket = socket(PF_INET, SOCK_STREAM, 0);
  client_addr.sin_family = AF_INET;
  client_addr.sin_port = htons(PORTNUMBER);

  memcpy(&client_addr.sin_addr, hp->h_addr_list[0], hp->h_length);
  len = sizeof(struct sockaddr_in);

  if(connect(client_socket, (struct sockaddr *) &client_addr, len)<0)
    {
      perror("connect error");
    }
  else
    {
      n = recv(client_socket, buffer, sizeof(buffer),0);
      write(STDOUT_FILENO, buffer, n);
      write(STDOUT_FILENO, "\n>", 2);
    }

  while ((n = read(STDIN_FILENO, buffer, sizeof(buffer))) > 0) {
    send(client_socket, buffer, n, 0);
    n = recv(client_socket, buffer, sizeof(buffer),0);
    write(STDOUT_FILENO, buffer, n);
    write(STDOUT_FILENO, "\n> ", 3);
    memset(buffer, '\0', MESSAGE_BUFFER_SIZE);
  }
  close(client_socket);
  return 0;
}
