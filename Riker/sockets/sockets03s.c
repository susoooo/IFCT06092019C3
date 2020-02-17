/* UDP server */

#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <unistd.h>
#include <string.h>
#include <errno.h>

#define PORTNUMBER 47654
#define MESSAGE_BUFFER_SIZE 1024

/* commands */
#define BAD_COMMAND -1
#define LOGIN 0
#define SUM 1
#define REST 2
#define DIVISION 3
#define MULTIPLICATION 4
#define FACTORIAL 5

int parseMessageBuffer(char message_buffer[], int message_size);
void getNumbers(int how_many_numbers, int *numbers, int socket_handler, struct sockaddr_in *sa_c , socklen_t * len_c);
long calculateOperation(int command, int numbers[]);

int main(void){
  char message_buffer[MESSAGE_BUFFER_SIZE];
  char reply_buffer[MESSAGE_BUFFER_SIZE];
  int socket_handler;
  int message_size;
  int command;
  int numbers_l;
  int numbers[2];
  long result;
  int login;

  login = 0;

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

  /* printf("perry"); */
  /* fflush(stdin); */
  /* receive messages from the socket */
  while((message_size = recvfrom(socket_handler, message_buffer, sizeof(message_buffer), 0, (struct sockaddr *) &client_address, &client_address_len)) > 0){

    /* parse command */
    command = parseMessageBuffer(message_buffer, message_size);
    if(command != BAD_COMMAND && login == 1) {
      if (command == FACTORIAL)
        numbers_l = 1;
      else
        numbers_l = 2;
      getNumbers(numbers_l, numbers, socket_handler, &client_address, &client_address_len);
      result = calculateOperation(command, numbers);
      sprintf(reply_buffer, "Result: %ld\n\n1 - SUM\n2 - REST\n3 - DIVISION\n4 - MULTIPLICATION\n5 - FACTORIAL\n---------------\n", result);
      sendto(socket_handler, reply_buffer, sizeof(reply_buffer), 0, (struct sockaddr *) &client_address, client_address_len);
    } else {
      if (command == LOGIN) {
        sprintf(reply_buffer, "You, %s, have login in Calc Server.\n", inet_ntoa(client_address.sin_addr));
        strcpy(reply_buffer, "1 - SUM\n2 - REST\n3 - DIVISION\n4 - MULTIPLICATION\n5 - FACTORIAL\n---------------\n");
        login = 1;
        printf("LOGIN: %s\n", inet_ntoa(client_address.sin_addr));
      } else {
        if (login == 0)
          sprintf(reply_buffer, "^ERROR: You must be login. Write command LOGIN and send\n");
        else 
          sprintf(reply_buffer, "^ERROR: %s is not an option.", message_buffer);
      }
      sendto(socket_handler, reply_buffer, sizeof(reply_buffer), 0, (struct sockaddr *) &client_address, client_address_len);
    }

    /* clean buffers */
    memset(message_buffer, '\0', MESSAGE_BUFFER_SIZE);
    memset(reply_buffer, '\0', MESSAGE_BUFFER_SIZE);
  }

  return 0;
}

int parseMessageBuffer(char message_buffer[], int message_size){
  int c;
  /* TODO: remove '\n' */
  message_buffer[strcspn(message_buffer, "\n")] = 0;
  message_size--;

  if((message_size == 5) && (strcmp(message_buffer, "LOGIN") == 0)) { /* FIXME: remove login ? */
    c = LOGIN;
  } else {
    if (message_size == 1) {
      switch (atoi(message_buffer)) {
      case 1: { c = SUM; break; }
      case 2: { c = REST; break; }
      case 3: { c = DIVISION; break; }
      case 4: { c = MULTIPLICATION; break; }
      case 5: { c = FACTORIAL; break; }
      default:
        c = BAD_COMMAND;
        break;
      }
    }
    else
      c = BAD_COMMAND;
  }
  return c;
}

void getNumbers(int h, int *numbers, int s, struct sockaddr_in *sa_c, socklen_t *len_c){
  int message_size;
  char b[MESSAGE_BUFFER_SIZE];
  char r[MESSAGE_BUFFER_SIZE];
  char number;
  int counter;

  counter = 0;
  if(h == 1) {
    sprintf(b, "Enter number: ");
    sendto(s, b, sizeof(b), 0, (struct sockaddr *) sa_c, *len_c);
    message_size = recvfrom(s, r, sizeof(b), 0, (struct sockaddr *) sa_c, len_c);
    /* TODO parse number */
    numbers[counter]= strtol(r, NULL, 10);
  }
  else {
    while(counter <2)  {
      sprintf(b, "N %d?: ", counter+1);
      sendto(s, b, sizeof(b), 0, (struct sockaddr *) sa_c, *len_c);
      message_size = recvfrom(s, r, sizeof(b), 0, (struct sockaddr *) sa_c, len_c);
      /* TODO parse number */
      numbers[counter]= strtol(r, NULL, 10);
      counter++;
    }
  }
}

long calculateOperation(int command, int n[]){
  long r; 
  int counter;

  switch (command) {
  case SUM: { r = n[0] + n[1]; break; }
  case REST: { r = n[0] - n[1]; break; }
  case DIVISION: { r = n[0] / n[1]; break; }
  case MULTIPLICATION: { r = n[0] * n[1]   ; break; }
  case FACTORIAL: {
    r = 1;
    for (counter=2; counter <= n[0]; counter++)
      r = r * counter;
    break; }
  }
  return r;
}
