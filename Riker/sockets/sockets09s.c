/* * simple TCP server */

/* TODO: close threads */
/* TODO: log function and put loggin messages */
/* TODO: command arguments */
/* TODO: index job to remove user */

#include <arpa/inet.h>
#include <errno.h>
#include <netinet/in.h>
#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/socket.h>
#include <sys/types.h>
#include <unistd.h>

#define PORTNUMBER 47654
#define MESSAGE_BUFFER_SIZE 1024
#define NICK_SIZE 256
#define MAX_USERS 64
#define MAX_QUEUE 256

#define MSG_COMMAND_SIZE 24
#define MSG_TEXT_SIZE 1000
#define COMMANDS_LENGTH 3

#define LIN 0
#define LOUT 1
#define LINFO 2

struct userMessage {
  int id;
  char msg[MESSAGE_BUFFER_SIZE];
};

struct User {
  char name[NICK_SIZE];
  char address[16];
  int socket;
  struct userMessage queue[MAX_QUEUE];
  int current_queue;
  int id;
};

struct message {
  char command[MSG_COMMAND_SIZE];
  char text[MSG_TEXT_SIZE];
};

char commands_list[COMMANDS_LENGTH][MSG_COMMAND_SIZE] = {"NAME", "MESSAGE", "GOODBYE"};

static const struct User emptyuser;
struct User users[MAX_USERS];
int newuser_index = 0;

int nextSpacePosition(char string[], int from);
void parseMessage(char raw_msg[], struct message *msg);
int iscommand(char command[]);
int userlogin(socklen_t s);
void addusername(char name[], int index);
void sendOK(socklen_t s);
void waitOK(int id);
void sendERROR(socklen_t s, char msg[]);
int isregistered(char name[]);
void *clientThread(void *user_id);
void dispatchMessageToQueue(int id, char msg[]);
void dispatchMessagesToUser(int id);
void loggin(char text[], int type);

int main(int argc, char *argv[]) {

  char buffer[1024];
  int server_socket;
  int client_socket;
  socklen_t server_len;
  socklen_t client_len;
  pthread_t c_threads[MAX_USERS];
  int n;
  int port;

  /* command line options */
  if (argc > 1) {
    port = atoi(argv[1]);
  } else {
    /* defaults */
    port = PORTNUMBER;
  }

  struct sockaddr_in server_addr;
  struct sockaddr_in client_addr;

  server_socket = socket(PF_INET, SOCK_STREAM, 0);
  server_addr.sin_family = AF_INET;
  server_addr.sin_port = htons(port);
  server_addr.sin_addr.s_addr = htonl(INADDR_ANY);
  server_len = sizeof(struct sockaddr_in);
  server_len = sizeof(struct sockaddr_in);

  bind(server_socket, (struct sockaddr *)&server_addr, server_len);

  /* set max simultaneous conection */
  listen(server_socket, 5);

  /* accept client conection */
  while (1) {
    if ((client_socket = accept(server_socket, (struct sockaddr *)&client_addr,
                                &client_len)) < 0) {
      perror("accept failed");
    } else {
      /* lauch new client thread */
      if (pthread_create(&c_threads[newuser_index], NULL, clientThread,
                         (void *)&client_socket) != 0) {
        perror("main(): Error creating socket");
      } else {
        /* next user index */
        ;;
      }
    }
  }

  close(server_socket);
  return 0;
}

/* return position of next space or null terminating character */
/* TODO: more than one space */
int nextSpacePosition(char string[], int from) {
  int pos;
  pos = from;
  while (string[pos] != ' ' && string[pos] != '\0')
    pos++;

  return pos;
}

void parseMessage(char raw_msg[], struct message *msg) {
  int pos;
  int found;
  int space;

  /* init command/text string */
  memset(msg->command, '\0', strlen(msg->command));
  memset(msg->text, '\0', strlen(msg->text));

  /* remove new line from msg */
  raw_msg[strcspn(raw_msg, "\n")] = 0; /* FIXME */

  /* set command and text */
  space = nextSpacePosition(raw_msg, 0);
  strncpy(msg->command, raw_msg, space); /* space -1? */
  if (iscommand(msg->command) == 1) {
    if (strcmp(msg->command, "MESSAGE") == 0) {
      pos = space;
      space = nextSpacePosition(raw_msg, space + 1);
      strncpy(msg->command, raw_msg, space); /* space -1 */
      if (strcmp(msg->command, "MESSAGE UPDATE") != 0) {
        memset(msg->command, '\0', strlen(msg->command));
        strncpy(msg->command, raw_msg, pos);
        strncpy(msg->text, (raw_msg + pos + 1), strlen(raw_msg));
      } else {
        strncpy(msg->text, (raw_msg + space + 1), strlen(raw_msg));
      }
    } else {
      strncpy(msg->text, (raw_msg + space + 1), strlen(raw_msg));
    }
  } else {
    memset(msg->command, '\0', strlen(msg->command));
    strcpy(msg->text, raw_msg);
  }
}

/* return 1 if is a command. 0 if isn't a command. */
int iscommand(char command[]) {
  int success;
  int counter;

  success = 0;
  for (counter = 0; counter < COMMANDS_LENGTH; counter++) {
    if (strcmp(command, commands_list[counter]) == 0) {
      success = 1;
      break;
    }
  }
  return success;
}

/* login/register user */
/* return: 0 or positive integer as user index */
/*         -1 bad command */
/*         -2 user already registered */
/*         -3 send error */
/*         -4 receiving error */
int userlogin(socklen_t s) {
  int user_index;
  char login_m[] = "Register nick with command: NAME <your nick>";
  char message[MESSAGE_BUFFER_SIZE];
  struct message msg;
  memset(msg.command, '\0', sizeof(msg.command));

  user_index = -1;
  if (send(s, login_m, strlen(login_m), 0) < 0) {
    user_index = -3;
    perror("Error sending REGISTER message to client.");
  } else {
    if (recv(s, message, sizeof(message), 0) < 0) {
      user_index = -4;
      perror("Error receiving REGISTER message from client.");
    } else {
      parseMessage(message, &msg);
      if (iscommand(msg.command) == 1 && (strcmp(msg.command, "NAME") == 0)) {
        if (isregistered(msg.text) == 0) {
          user_index = newuser_index;
          addusername(msg.text, user_index);
          newuser_index++;
        } else {
          user_index = -2;
        }
      } else {
        user_index = -1;
      }
    }
  }
  return user_index;
}

void addusername(char name[], int index) {
  memset(users[index].name, '\0', sizeof(users[index].name));
  strcpy(users[index].name, name);
}

/* set return error int */
void sendOK(socklen_t s) {
  char msg[] = "OK";
  if (send(s, msg, strlen(msg), 0) < 0) {
    perror("Error sending REGISTER message to client.");
  } else {
    loggin("OK", LOUT);
  }
}

void waitOK(int id) {
  char msg[MESSAGE_BUFFER_SIZE];
  memset(msg, '\0', sizeof(msg));
  if (recv(users[id].socket, msg, sizeof(msg), 0) < 0) {
    perror("ERROR receiving OK message from client");
  } else {
    msg[strcspn(msg, "\n")] = 0; /* FIXME */
    if(strcmp(msg, "OK") != 0){
      loggin("Bad OK", LINFO);  /* FIXME */
    } else {
      loggin("OK", LIN);  /* FIXME */
    }
  }
  printf("super out\n");
}

/* Return 1 if is registered and 0 if is not registered. */
int isregistered(char name[]) {
  int i;
  int registered;
  char msg[MESSAGE_BUFFER_SIZE];

  registered = 0;
  for (i = 0; i < newuser_index; i++) {
    if (strcmp(users[i].name, name) == 0) {
      sprintf(msg, "Nick %s is already login.", name);
      loggin(msg, LINFO);
      registered = 1;
      break;
    }
  }
  return registered;
}

void sendERROR(socklen_t s, char msg[]) {
  /* TODO: include client information */
  if (send(s, msg, strlen(msg), 0) < 0) {
    perror("send Error!");
  } else {
    loggin(msg, LOUT);
  }
}

/* TODO: deal with this error */
void* clientThread(void *s) {
  int socket = *((int *)s);
  char message[MESSAGE_BUFFER_SIZE];
  char log[MESSAGE_BUFFER_SIZE*2];
  int id;
  int quit;
  struct message msg;

  /* login client */
  id = -1;
  while (id < 0) {
    id = userlogin(socket);
    if (id < 0) {
      switch (id) {
      case -1: {
        loggin("Bad command to login", LOUT);
        break;
      }
      case -2: {
        sendERROR(socket, "NICK is in use. Enter another nick.");
        loggin("Nick is already login", LOUT);
        break;
      }
      case -3: {
        perror("SEND error");
        break;
      }
      }
    }
  }

  users[id].id = id;
  users[id].socket = socket;
  /* memset(users[id].address, '\0', sizeof(users[id].address)); */ // TODO
  /* strcpy(users[id].address, inet_ntoa(client_addr.sin_addr)); */ // TODO

  /* log */
  sprintf(log, "REGISTERED: %s@%s with ID: %d in soscket %d",
         users[id].name, users[id].address, id,
         users[id].socket);
  loggin(log, LIN);

  /* OK response to client */
  sendOK(users[id].socket);

  quit = 0;
  while (quit!=1) {
    if (recv(users[id].socket, message, sizeof(message), 0) < 0) {
      perror("clientThread(): Error receiving message from client.");
    } else {
      parseMessage(message, &msg);
      memset(message, '\0', strlen(message));

      if (strcmp(msg.command, "MESSAGE") == 0) {
        sprintf(message,"MESSAGE from [%s]: %s", users[id].name, msg.text);
        loggin(message, LIN);
        dispatchMessageToQueue(id, msg.text);
        sendOK(users[id].socket);
      } else if (strcmp(msg.command, "MESSAGE UPDATE") == 0) {
        sprintf(message,"MESSAGE UPDATE from [%s]", users[id].name);
        loggin(message, LIN);
        dispatchMessagesToUser(id);
        sendOK(users[id].socket);
      } else if (strcmp(msg.command, "GOODBYE") == 0){
        sprintf(message, "GOODBYE user [%s]", users[id].name);
        loggin(message, LIN);
        users[id] = emptyuser;
        sendOK(socket);
        quit = 1;
      } else {
        sprintf(message,"Bad command. Commands are \"NAME, MESSAGE, MESSAGE UPDATE, GOODBYE\".");
        if (send(users[id].socket, message, strlen(message), 0) < 0) {
          perror("ERROR sending message in MESSAGE UPDATE");
        } else {
          loggin(message, LOUT);
        }
      }
    }
  }
  loggin("CLOSE socket", LINFO);
  close(socket);
}

/* TODO: control queue limit */
void dispatchMessageToQueue(int id, char msg[]) {
  int i;

  for (i = 0; i < newuser_index; ++i) {
    if (users[i].id != id) {
      /* put messages in  user queue */
      users[i].queue[users[i].current_queue].id = id;
      strcpy(users[i].queue[users[i].current_queue].msg, msg);
      users[i].current_queue++;
    }
  }
}

void dispatchMessagesToUser(int id) {
  int i;
  char message[MESSAGE_BUFFER_SIZE];

  sprintf(message, "SENDING %d MESSAGES", users[id].current_queue);
  if (send(users[id].socket, message, strlen(message), 0) < 0) {
      perror("ERROR sending message in MESSAGE UPDATE");
  } else {
    waitOK(id);
  }

  /* send messages to client */
  memset(message, '\0', sizeof(message));
  for (i = 0; i < users[id].current_queue; ++i) {
    sprintf(message, "MESSAGE %d to [%s] from [%s]: %s", i + 1, users[id].name, users[users[id].queue[i].id].name, users[id].queue[i].msg);
    if (send(users[id].socket, message, strlen(message), 0) < 0) {
      perror("ERROR sending message in MESSAGE UPDATE");
    } else {
      waitOK(id);
      loggin(message, LOUT);
    }
    memset(message, '\0', sizeof(message));
  }
  memset(message, '\0', sizeof(message));
  sprintf(message, "MESSAGES ENDED");
  if (send(users[id].socket, message, strlen(message), 0) < 0) {
    perror("ERROR sending message MESSAGE ENDED");
  } else {
    waitOK(id);
    loggin(message, LOUT);
    /* clean queue */
    users[id].current_queue = 0;
  }
}

void loggin(char text[], int type) {
  switch (type) {
  case LIN: {
    printf("-> %s\n", text);
    break;
  }
  case LOUT: {
    printf("<- %s\n", text);
    break;
  }
  case LINFO: {
    printf("***%s\n", text);
    break;
  }

  }
}
