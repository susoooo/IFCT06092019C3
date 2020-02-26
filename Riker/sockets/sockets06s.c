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

void doCommand(int client_socket, char command[]);
long readNumberFromClient(int client_socket, int number);
void getNumbers(int client_socket , int many, long *numbers);

int main() {
  char message[1024];
  char command[1024];
  char welcomeMessage[1024];
  char byeMessage[1024];
  char menuMessage[1024];
  int server_socket;
  int client_socket;
  socklen_t server_len;
  socklen_t client_len;
  int n;

  sprintf(welcomeMessage, "Welcome to the Two Numbers Calculator\n");
  sprintf(menuMessage, " 1 - Sum\n 2 - Rest\n 3 - Multiplication\n 4 - Division\n 5 - Factorial\n 0 - Quit TNC\n---------------\n");
  sprintf(byeMessage, "Thanks for use TNC\n\nBye!\n");

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
    /* puts("bind failed"); */
    perror("bind failed");
  }

  /* set max simultaneous conection */
  listen(server_socket, 5);

  /* accept client conection */
  client_len = sizeof(struct  sockaddr_in); /* NOTE: without this, invalid argument error */
  if((client_socket = accept(server_socket, (struct sockaddr *) &client_addr, &client_len)) < 0)
    perror("accept failed");
  else
    {
      /* send welcome message and menu */
      strcat(message, welcomeMessage);
      strcat(message, menuMessage);
      send(client_socket, message, strlen(message), 0);
    }

  while((n = recv(client_socket, command, sizeof(command),0)) > 0){
    /* remove new line */
    command[strcspn(command, "\n")] = 0;

    /* quit */
    if(strcmp(command, "0") == 0) {
      send(client_socket, byeMessage, strlen(byeMessage), 0);
      break;
    }

    /* get numbers and calculate */
    doCommand(client_socket, command);

    /* send message to client */
    memset(message, '\0', MESSAGE_BUFFER_SIZE);
    strcat(message, command);
    strcat(message, menuMessage);
    send(client_socket, message, strlen(message), 0);

    memset(command, '\0', MESSAGE_BUFFER_SIZE);
  }

  close(client_socket);

  return  0;
}

void doCommand(int client_socket, char command[]){
  int counter;
  long numbers[2];
  long res;
  char operation[MESSAGE_BUFFER_SIZE];

  if(strcmp(command, "1") == 0) {
    getNumbers(client_socket, 2, numbers);
    res = numbers[0]+numbers[1];
    strcpy(operation, "Sum");
  } else if(strcmp(command, "2") == 0) {
    getNumbers(client_socket, 2, numbers);
    res = numbers[0]-numbers[1];
    strcpy(operation, "Rest");
  } else if(strcmp(command, "3") == 0) {
    getNumbers(client_socket, 2, numbers);
    res = numbers[0]*numbers[1];
    strcpy(operation, "Multiplication");
  } else if(strcmp(command, "4") == 0) {
    getNumbers(client_socket, 2, numbers);
    res = numbers[0]/numbers[1];
    strcpy(operation, "Division");
  } else if(strcmp(command, "5") == 0) {
    getNumbers(client_socket, 1, numbers);
    res = 1;
    for (counter=numbers[0]; counter > 1; counter--)
      res *= counter;
    strcpy(operation, "Factorial");
  } else {
    res = atoi(command);
    strcpy(operation, "Invalid option: ");
  }
  sprintf(command, "%s: %ld\n\n", operation, res);
  write(STDOUT_FILENO, operation, strlen(operation));
  write(STDOUT_FILENO, "\n", 1);
}

long readNumberFromClient(int client_socket, int number) {
  char text[4];
  char buffer[MESSAGE_BUFFER_SIZE];
  char res;
  sprintf(text, "N %d?", number);
  send(client_socket, text, sizeof(text),0);
  recv(client_socket, buffer, sizeof(buffer), 0);
  /* TODO: is number? is integer? */

  res = strtol(buffer, NULL, 10);
  return res;
}

void getNumbers(int client_socket , int many, long *numbers){
  int i;
  long  res;
  res = 0;
  for (i = 0; i<many; i++) {
    res = readNumberFromClient(client_socket, i+1);
    numbers[i] = res;
  }
}
